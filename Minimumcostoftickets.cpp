#include <iostream>
#include <vector>
using namespace std;



int maincost(vector<int>days, vector<int>cost, int index){

    // base case 
    int i = days[1];
    int n = days.size();
    if(i>=n){
        return ;
    }


    int option1 = cost[0]+ maincost(days,cost,index+1);


    int i ;

    for (i=index;i<n&&i<index; i+7){
        int option2 = cost[2]+solve days,cost,index+1()
    }

    // int min = min(maincost(days, cost[0]),min(maincost(days,cost[1]),maincost(days,cost[2]));


}


int main (){

}