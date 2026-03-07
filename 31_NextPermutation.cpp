#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
void permutaion(vector<int>&nums){

    int n = nums.size(), pivotIdx = -1;
    for (int i = n - 2 ; i >= 0; i--)
    {
        if (nums[i] < nums[i+1])
        {
            pivotIdx = i;
            break;
        }
        
    }

    if (pivotIdx != -1)
    {
        for (int i = n-1; i > pivotIdx; i--){
            
            if (nums[pivotIdx] < nums[i] )
            {
                swap(nums[pivotIdx], nums[i]);
                break;
            }
            
        }
    
    }

    reverse(nums.begin() + pivotIdx + 1, nums.end());  
}
int main()
{   
    vector<int> arr = {2, 9, 4, 7, 5, 3, 1};
    permutaion(arr);

    for (int x : arr)
    {
        cout<< x<<" ";
    }

    cout << endl;
    
    return 0;
}