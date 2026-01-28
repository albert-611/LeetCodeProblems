#include<iostream>
#include<vector>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){

//storing nums1 and nums2 to merge
    vector<int> merge;
        //nums1 to merge
    for (int i = 0; i < nums1.size(); i++)
    {
        merge.push_back(nums1[i]);
    }
        //nums2 to merge
    for (int i = 0; i < nums2.size(); i++)
    {
        merge.push_back(nums2[i]);
    }
// sorting the merge vector
    for (int i = 0; i < merge.size(); i++)
    {
        int swap = 0;

        for (int j = 0; j < merge.size()-1-i ; j++)
        {
            if (merge[j] > merge[j + 1] )
            {
                // swaping formula a = a + b - (b = a)
                merge[j] = merge[j] + merge[j+1] - (merge[j+1] = merge[j]);
                swap = 1;
            }
            
        }

        if (swap == 0) break;

    }
// output
//     for (int i = 1; i <= merge.size(); i++)
//     {
//         cout << i <<  " ";
//     }

//     cout << endl;
      

int n = merge.size();
double median;

if(n %2 == 0){

    median = (merge[n/2 - 1] + merge[n/2]) / 2.0;
    return median;
}

else{
    median = merge[n/2];
    return median;
}

}

int main(){

    vector <int> nums1 = {1, 5, 4, 3};
    vector <int> nums2 = {2, 8, 7};

    cout << findMedianSortedArrays(nums1,nums2);

}