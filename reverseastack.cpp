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


void reversestack(stack<int>s){
    // let us suppose that there 5 elements in an stack 

    // and stack is like 1 2 3 4 5 

    //  so 5 4 3 2 1


    if (!s.empty()) {
   int temp = s.top();
     s.pop();

   reversestack(s);
   insertatbottom(s,temp);
    }


    


}


int main (){





}