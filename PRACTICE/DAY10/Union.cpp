#include<iostream>
using namespace std;
 union Variety{
    char Cereal;
    char Grain;
    int Pound;
};


int main(){

union Variety v1;

v1.Cereal='A';
v1.Grain='B';
v1.Pound=99;

cout<<"The value of Cereal is:"<<v1.Cereal<<endl;//garbage value
cout<<"The value of Grain is:"<<v1.Grain<<endl;//garbage value
cout<<"The value of Pound is:"<<v1.Pound<<endl;//original value






    return 0;
}