#include<iostream>
using namespace std;
int main(){

int marks[10]={90,23,50,32,32,98,87,67,56,81};

int i=0;
do{
    cout<<"The marks in subject "<<i+1 <<" is:"<<marks[i]<<endl;
    i++;
}
while(i<10);
    return 0;
}