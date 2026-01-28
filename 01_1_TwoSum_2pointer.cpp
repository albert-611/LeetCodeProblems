#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<pair<int,int>> v;
    //coping nums vector to v vector
        for (int i = 0; i < nums.size(); i++)
        {
            v.push_back({nums[i],i});
        }
       
    //sorting of v vector with original indices
       for (int i = 0; i < v.size() - 1; i++)
       {
        int swap = 0;
        for (int j = 0; j < v.size() - 1 - i; j++)
        {
            if(v[j].first > v[j+1].first){

                v[j].first = v[j].first + v[j + 1].first - (v[j+1].first = v[j].first); // swaping values
                v[j].second = v[j].second + v[j + 1].second - (v[j+1].second = v[j].second); // swaping indices(index)
                swap = 1;
            }
        }

        if(swap == 0)break;
       }

       int st = 0, end = v.size() - 1;
    while (st < end)
    {
        int currsum = v[st].first + v[end].first;

        if (currsum == target)
        {
            return{v[st].second,v[end].second};
    
        }

        else if(currsum < target){
            st++;
        }

        else{
            end--;
        }    
    }
      return{};
    }

int main(){

    vector<int> nums = {3,2,4};
    int target = 6;
    vector <int> val = twoSum(nums, target);

    for(int x : val){
        cout << x << " ";
    }

    cout << endl;
    
    return 0;
    
}