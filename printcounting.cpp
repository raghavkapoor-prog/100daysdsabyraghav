#include <iostream>
using namespace std;


void print_count(int n , int i){

// what we have to do here is to print the counting of a number 
//   here the n is the number where to print the counting

   if (i==n){
      return ;
   }

   cout<<i<<endl;

   print_count(n, i+1);

}