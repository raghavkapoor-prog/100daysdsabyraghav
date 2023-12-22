#include <iostream>
using namespace std;







int main (){

  string s ;
  
 int n = s.size();
    int count = 0;
        int i = n - 1;
    while (i >= 0 && s[i] == ' ') {
        i--;
    }
        
        while (i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }

    return count;



    return 0;

}