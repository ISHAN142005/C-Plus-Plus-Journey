#include<iostream>
using namespace std;
int main(){

    int weight[5]={52,59,88,101,76};
    int* a=weight;

    for (int i=0;i<5;i++){
        cout<<"The address of marks "<<i+1<<" is:"<<a+i<<endl;
        cout<<"The value of marks "<<i+1<<" is:"<<*(a+i)<<endl;
    }

    return 0;
}