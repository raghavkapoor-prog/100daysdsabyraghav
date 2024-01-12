#include <iostream>



using namespace std ;

// exploring all patterns 


  int cutrods (int x , int y , int z, int n ){

    if (n==0){
        return 0;

    }

    if (n<0){
        return INT64_MIN;

    }


  int OP1= cutrods(x-n,y,z,n);

  int OP2= cutrods(x,y-n,z,n);

  int OP3= cutrods(x,y,z-n,n);


   int ans = max (OP1,max(OP2,OP3));


   return ans;
   


  }

int main (){




    return 0;



}