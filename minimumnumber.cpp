#include <iostream>
using namespace std;

int min (int arr[], int n, int i ){
  int minIndex = i;

    if (i == n) {
        return minIndex;
    }

    if (arr[i] < arr[minIndex]) {
        minIndex = i;
    }

    int r = min(arr, n, i + 1);
    return r;

}

int main (){

}