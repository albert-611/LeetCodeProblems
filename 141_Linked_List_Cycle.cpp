#include<iostream>

using namespace std;

class Node{
    public: 

    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;  
    }

};

class List{
    public: 

    Node* head;
    Node* tail;

    List(){
        head = tail = NULL;
    }

    void insert(int val){
        Node* newNode = new Node (val);

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }else{
            tail -> next = newNode;
            tail = newNode;
        }   
        
        tail -> next = head -> next -> next;
    }

    bool  isCycle(){
        Node* sl = head;
        Node* fs = head;
        while (fs != NULL && fs -> next != NULL){ // syntax!
            sl = sl->next;
            fs = fs->next->next;

            if (sl == fs){
                return true;
            }       
        }   
        return false;
    }
};

int main(){

    List ll;

    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);
    ll.insert(6);
    ll.insert(7);
    ll.insert(8);


    cout <<"Cycle : " +to_string (ll.isCycle());
    

}