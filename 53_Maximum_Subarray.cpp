#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int> &nums){

    int currsum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        currsum = max(nums[i], currsum + nums[i]);
        maxSum = max(maxSum, currsum);
    }

    return maxSum;
}

int main(){

    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int result = maxSubArray(arr);

    cout << "MaxSum of SubArray = " << result << endl;
    return 0;
}