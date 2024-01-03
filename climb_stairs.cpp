#include <iostream>
#include <vector>
using namespace std;

vector<int>dp(n+1,-1);
int climbstairs(int n ){
   int count =0;

   if (n==0||n==1){
    
    return 0;

   }

   if (dp[n]==-1){

      return dp[n];
   }

   dp[n] = climbstairs(n-1)+climbstairs(n-2);

   return dp[n];
   
}