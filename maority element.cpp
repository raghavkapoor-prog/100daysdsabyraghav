#include <iostream>
#include<unordered_map>
using namespace std;

int majority(int nums[], int n ){
  
 unordered_map<int,int>mp;

   for (int i=0; i<n;i++){
       mp[i]++;

       if (mp[i]>n/2){
           return i;
       }
   }

   return 0;

}

int main (){

}