#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int ans=0;
        int l=0,r=0;
        while(r<nums.size()-1){
            int farthestpoint=0;
            for(int i=l;i<=r;i++){
                farthestpoint=max(farthestpoint,i+nums[i]);
            }
            l=r+1;
            r=farthestpoint;
            ans++;
        }
        return ans;
    }
};