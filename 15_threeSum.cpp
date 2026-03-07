#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){
    sort(nums.begin(), nums.end());
    int n = nums.size();

    vector<vector<int>> ans;

    for(int i = 0; i < n-2; i++){

        if(i > 0 && nums[i] == nums[i-1]) continue;

        int left = i + 1;
        int right = n - 1;

        while(left < right){

            int sum = nums[i] + nums[left] + nums[right];

            if(sum == 0){

                ans.push_back({nums[i], nums[left++], nums[right--]});
                while(left<right && nums[left] == nums[left -1]) left++;
                while(left<right && nums[right] == nums[right + 1]) right--; 
            }

            else if(sum < 0) left++;

            else right--;
        }
    }

    return ans;
}
int main()
{
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> val = threeSum(nums);

    for(auto triplets : val){

        for(int x : triplets){
            cout << x << " ";
        }

        cout<<endl;
    }
    return 0;
}