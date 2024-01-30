#include <iostream>
using namespace std;

// implement the overflow and underflow condition is the interview 
class stack{

    public:
    int *arr;
    int size;
    int top;


       stack(int size){
          
        arr =new int[size];
        this->size=size;
        this-> top= -1;
       }

    void push(int data){
        
        top++;
        arr[top]=data;

    }

    void pop (){
        top--;
    }

    bool isEmpty(){

        if (top==-1){
            return true;

        }

        else{
            return false;
        }
    }

    int gettop (){
     cout << arr[top];
    }

    int getsize(){

        return top+1;
    }
       

};


int main (){
    stack s(10);

   s.push(5);
   s.push(6);
   s.push(7);
   s.push(8);
   s.push(9);
   s.push(10);
   s.push(12);

   s.pop();


   s.gettop();
   

}