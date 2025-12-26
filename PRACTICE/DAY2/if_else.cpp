#include<iostream>
using namespace  std;
int main(){
//dividing on the basis of age 
    int age;
cout<<"Enter your age:";
cin>>age;

if((age>0)&& (age<18)){
    cout<<"You are not an adult"<<endl;
}
else if(age<1){
    cout<<"Not born yet!"<<endl;
}
else if(age>=18){
    if(age<60){
        cout<<"Adult but not a senior citizen"<<endl;
    }
    else{
        cout<<"Adult and a senior citizen"<<endl;
    }
}
    return 0;
}