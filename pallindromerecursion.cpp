#include <iostream>
using namespace std;



bool pallindrome(string str,int start,int end){

    if (start<=end){
        return true;

    }

    if (start!=end){
       return false;
    }

    pallindrome(str,start,end);
}