#include <iostream>

using namespace std ;


void subsequeneces(string a,int i, string output){
   
   
  

     if (i>=a.size()){
       return ;
     }

    // base cases 

    // relative ordering 
    // stopping condition 
    // same repeat nahi kar sakte 
    // call

    // map bhi acha sol tha 
    char ch = a[i];

  
      output.push_back(ch);
      
      subsequeneces(a, i++,output);


   
     subsequeneces(a, i,output);

  

}