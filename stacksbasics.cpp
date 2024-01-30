#include <iostream>
#include <stack>
using namespace std;



int main (){


    stack<int>s;

    s.push(10);
    s.push(20);
    s.push(30);


   s.pop();
   cout << s.top();

   if (s.empty()){
      cout<<"stack is empty ";
   }

 else{
    cout<<"stack is not empry ";
 }
   


    
}

