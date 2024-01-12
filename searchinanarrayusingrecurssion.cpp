#include <iostream>
using namespace std;


int search(int arr[], int K, int n,int index){
    // array 10,20,30,40,50
    // n is the number of elements 

  int i =0;

    if (index >= n) {
        return -1;
    }

   if (arr[index]==K){
     return i;
   }

  
    return search(arr , K, n, index-1);




    
    for (int i =0; i<n; i++){

        if(arr[i]==K){

            return i;
        }
    }

     return -1;

}

int main ()
{

   int array[5]= {10,20,30,40,50};
   int x = search(array,90,5,0);



     if (x != -1) {
        cout << "Element found at index " << x << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
    
}