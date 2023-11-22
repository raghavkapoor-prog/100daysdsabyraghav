#include <iostream>
#include <vector>
using namespace std;


int remove (vector<int>nums, int n){
    // I escape this edge case 
    int index=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            nums[index+1]=nums[i];
            index++;
        }
        
    }
    return index+1;
}