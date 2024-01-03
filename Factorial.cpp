#include <iostream>
using namespace std;

int factorial (int number ){

   if (number<2){
    return 1;
   }
  

    return factorial (number-1);
}

