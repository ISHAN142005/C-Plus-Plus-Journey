#include<iostream>
using namespace std;
int main(){

int marks[10]={90,23,50,32};
marks[4]=78;
marks[5]=89;
marks[6]=82;
marks[7]=76;
marks[8]=99;
marks[9]=100;
marks[10]=71;//of no use bcoz counting starts from 0


//we can also change the value in the array
marks[0]=99;

//printing the array of marks
for(int i=0;i<10;i++){
    cout<<"The marks in subject "<<i+1 <<" is:"<<marks[i]<<endl;
}
    return 0;
}