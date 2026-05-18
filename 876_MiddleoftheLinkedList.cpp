#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 */

struct ListNode {

    int val;
    ListNode* next;

    // Default constructor
    ListNode() : val(0), next(nullptr) {}

    // Constructor with value
    ListNode(int x) : val(x), next(nullptr) {}

    // Constructor with value and next node
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {

public:

    // Function to find middle node
    ListNode* middleNode(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {

            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};

int main() {

    // Creating linked list:
    // 1 -> 2 -> 3 -> 4 -> 5

    ListNode* head = new ListNode(1);

    head->next = new ListNode(2);

    head->next->next = new ListNode(3);

    head->next->next->next = new ListNode(4);

    head->next->next->next->next = new ListNode(5);

    // Create object
    Solution obj;

    // Find middle node
    ListNode* middle = obj.middleNode(head);

    // Print result
    cout << "Middle Node Value: "
         << middle->val << endl;

    return 0;
}