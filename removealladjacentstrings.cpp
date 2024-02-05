#include <iostream>
#include <stack>
using namespace std;



int removeadajacent(string s, int n){
   
stack<char>st;

for (char ch:s){
    char x = st.top();
    if (ch==x){
        st.pop();
    }
    else {
        st.push(ch);

    }

}

   string ans;
   while (st!empty()){
   char qwe=st.pop();

    ans.push_back(qwe);
      

   }

}


int main (){



    return 0;
}