// this question was a new learning for me 

// first i tried to make temp array whereI could store the values from n to k 
// then I tried to make store in rest of the array 
// but this went with time limit exceeded and wrong answer but I managed to solve 


// 2nd approach that I tried I was 
// using while loop and for loop I tried to shift the element right by k places but Time limit exceeded 

#include<iostream>
#include <vector>
using namespace std;

    void rotate(vector<int>& nums, int k) {
            k=k%nums.size();
            // 1,2,3,4,5,6,7
            // k=3 
            // 3%7-> breaking of the array at k 
            reverse(nums.begin(),nums.end()-k);
            reverse(nums.end()-k,nums.end());
            reverse(nums.begin(),nums.end());

    }


int main(){


    


    return 0;

}

//  k=k%nums.size();

//        reverse(nums.begin(),nums.end()-k);
//        reverse(nums.end()-k,nums.end());
//        reverse(nums.begin(),nums.end());
        