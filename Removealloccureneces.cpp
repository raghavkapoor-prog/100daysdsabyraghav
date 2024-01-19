#include <iostream>
using namespace std;

   void remove (string s,string part ){
  

  int found = s.find(part);
  if(found!=string::npos){
    string left = s.substr(0,found);
    string right =s.substr(found+part.size(),s.size());
    s= left+right;

    remove(s,part);
  }
  else{
    return ;
  }





   }

int main(){




}