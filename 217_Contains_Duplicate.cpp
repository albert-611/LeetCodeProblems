#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool containsDuplicate(vector <int> &nums){

    /* 19ms
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++){
        if (nums[i] == nums[i-1]) return true;
        }
            return false;
            */ 
    unordered_set <int> seen; //21 ms
    for (int x : nums)
    {
        if(seen.count(x)) return true;
        seen.insert(x);
    }
    return false;
    
}
int main(){

    vector<int> nums = {1,2,3,1};
    cout << containsDuplicate(nums)<<endl;
    return 0;
}