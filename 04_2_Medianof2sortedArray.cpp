#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
    vector<int> c;
        c.insert(c.end(), nums1.begin(), nums1.end());
        c.insert(c.end(), nums2.begin(), nums2.end());
        sort(c.begin(), c.end());
        int n = c.size();
        if (n % 2 == 1)
            return c[n / 2];
        else
            return (c[n / 2 - 1] + c[n / 2]) / 2.0;
}

int main(){

    vector <int> nums1 = {1, 5, 4, 3};
    vector <int> nums2 = {2, 8, 7};

    cout << findMedianSortedArrays(nums1,nums2);

}