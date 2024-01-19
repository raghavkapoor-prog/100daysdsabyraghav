#include <iostream>

#include <vector>
using namespace std;




void printsubarrays(vector<int>nums, int start, int end ){


//   base case

if(end==nums.size());


// 1 case 
   for (int i =start; i<end;i++){
     cout<<nums[i]<<" ";
   }


  printsubarrays(nums,start,end+1);
    



}