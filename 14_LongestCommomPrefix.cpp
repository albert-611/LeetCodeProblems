#include<iostream>
#include<vector>
using namespace std;

string checkPrefix (vector <string>& strs){

    if(strs.empty()) return "";\
    
    string prefix = strs[0];

    for (int i = strs.size() - 1 ; i >= 1 ; i--)
    {
        while (strs[i].find(prefix) != 0)
        {
            prefix.pop_back();

            if (prefix.empty())
            {
                return "";
            }
            
        }
        
    }

    return prefix;
    

}

int main(){

    vector<string> strs = {"flower","flow","flight"};

    cout << checkPrefix(strs) << endl;
    return 0;
}