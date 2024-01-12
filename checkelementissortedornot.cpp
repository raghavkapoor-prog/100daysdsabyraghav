#include<iostream>
using namespace std ;




bool check(int arr[], int n, int index){
   if (index>=n){
      return true;
   }


   if (arr[index-1]<arr[index]){
      bool abc= check(arr,n,index+1);
      return abc;
      
   }
   else {
      return false;
   }

    
}



int main (){

  
   int array []={1,2,3,4,5};
   int n =5;
     


    return 0;

}