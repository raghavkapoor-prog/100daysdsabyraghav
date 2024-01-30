#include <iostream>
#include <stack>
using namespace std;

void insertatbottom(stack<int>st, int i){


    // recursively pop the stack until it is empty store it in the temp then backtack after actually placing the key 
   
   if(st.empty()){
      st.push(i);
   }
    int temp =st.top();
    st.pop();
   
   insertatbottom(st,i);

//    backtrack condition 
// where I could actually 

   st.push(temp);
}

int main (){

}