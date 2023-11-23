#include <iostream>
using namespace std;

void sortColors(vector<int>& nums) {
//         nums is vector 
        int countRed=0;
        int countWhite=0;
        int countBlue=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                countRed++;
            }
//             count red if value is equals red 
            else if(nums[i]==1){
                countWhite++;
            }
// count white 
            else{
                countBlue++;
            }
// count Blue
        }
        for(int i=0;i<countRed;i++){
            nums[i]=0;
        }
        for(int i=countRed;i<countWhite+countRed;i++){
            nums[i]=1;
        }
        for(int i=countRed+countWhite;i<nums.size();i++){
            nums[i]=2;
        }
}