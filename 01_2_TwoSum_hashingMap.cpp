#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target){

    unordered_map <int,int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        int curr = nums[i];
        int x = target - curr;
        if (mp.find(x) != mp.end())
        {
            return{mp[x],i};
        }
        
        mp[nums[i]] = i;
    }
    
}

int main(){

    vector<int> nums = {1, 4, 6, 2, 5, 3};
    int target = 7;
    vector <int> val = twoSum(nums, target);

    for(int x : val){
        cout << x << " ";
    }

    cout << endl;
    
    return 0;
    
}