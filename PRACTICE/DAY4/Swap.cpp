#include<iostream>
#include<algorithm>
using namespace std;
int main(){

int a,b;
cout<<"Enter first number (a):";
cin>>a;
cout<<"Enter second number (b):";
cin>>b;

cout<<"***BEFORE SWAP***"<<endl;
cout<<"The first number is:"<<a<<endl;
cout<<"The second number is:"<<b<<endl;


swap(a,b);

cout<<"***AFTER SWAP***"<<endl;
cout<<"The first number is:"<<a<<endl;
cout<<"The second number is:"<<b<<endl;


    return 0;
}