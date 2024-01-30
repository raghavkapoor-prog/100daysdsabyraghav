#include <iostream>
#include <stack>
using namespace std;

int solve (stack<int>st, int pos, int ans){
    if (pos==1){
       ans=st.top();
    }
    
   int temp =st.top();
    st.pop();
    solve (st,pos--,ans);

    st.push(temp);
}


