#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& heights){

    int mWater = 0;
    int lp = 0, rp = heights.size() - 1;

    while (lp < rp)
    {
        int w = rp - lp;
        int h = min(heights[lp], heights[rp]);

        int currWater = w * h;
        mWater = max(currWater, mWater);

        heights[lp] < heights[rp] ? lp++ : rp--;

        
    }
    
    return mWater;

}
int main(){

    vector <int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(heights);
    return 0;
}