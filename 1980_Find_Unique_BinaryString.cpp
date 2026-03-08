#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string findDifferentBinaryString(vector<string>& nums){

    int n = nums.size();
    string result = "";
    for (int i = 0; i < n; i++)
    {
        result += (nums[i][i] == '0') ? '1' : '0';
    }
    return result;
}

int main()
{
    vector<string>nums = {"00","01"};
    string diff = findDifferentBinaryString(nums);
    cout<< diff;
    return 0;
}