   
   #include <iostream>
   #include <stack>
   using namespace std ;

   
    void insertSorted(std::stack<int>& s, int element) {
    if (s.empty() || element > s.top()) {
        s.push(element);
    } else {
        int topElement = s.top();
        s.pop();
        insertSorted(s, element);
        s.push(topElement);
    }
}

void sortStack(std::stack<int>& s) {
    if (!s.empty()) {
        int topElement = s.top();
        s.pop();
        sortStack(s);
        insertSorted(s, topElement);
    }
}




int main (){



    return 0;
}