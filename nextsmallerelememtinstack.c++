// s 


// barckets alloqwe are the {}


// minimum reversqals required tio convert the string into a balanced expression 



// S = "}{{}}{{{"
// Output: 3


// ek bar staxk mein store kakrke dekh leta hoon kuch shyd naya mil jaye 




#include <iostream>
#include <stack>
using namespace std;



int count (string s, int size ){


 if(s.size() & 1) return -1;
    int ans=0;
    stack<char>st;
    for(char &ch:s){
        if(ch == '{'){
            st.push(ch);
        }
        else{
            // ch is a closing braces
            if(!st.empty() and st.top()=='{'){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
    }
    // if stack is empty then return 0
    if(st.empty()){
        return 0;
    }
    while(!st.empty()){
        char a = st.top();
        st.pop();
        char b = st.top();
        st.pop();
        if((a=='{' and b=='{') or (a=='}' and b=='}')){
            ans+=1;
        }
        else{
            ans+=2;
        }
    }
    return ans;


}



int main (){




    return 0;
}