#include <iostream>
#include <stack>
using namespace std;


int main (){
    string str= "hello jee";
   stack<string>st;
 
 for(int i =0; i<str.length(); i++){
    char ch = str[i];
    st.push(ch);
 }

 while (st.empty()){
    cout<<st.top();
    st.pop();

 }
   

}