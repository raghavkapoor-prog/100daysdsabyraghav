#include <iostream>

using namespace std ;


//   string  abcdddeeffghijjjjk

// find the last occurence of the  c 
//    right to left ek bar traverss karo jo bhi aapke pass aa raha iterator usse return kardo 
// what we can do is that let us solve it using recurrsion 


  int last(string str, int n, char f,int i ){
    n = str.size();
    i=n-1;
    if (n==0){
        return INT8_MAX;

    }

    if (f==str[i]){
       return i;
    }

    int ans = last(str,n,f,i--);

    return ans ;
    



  }

int main (){


    return 0;

}