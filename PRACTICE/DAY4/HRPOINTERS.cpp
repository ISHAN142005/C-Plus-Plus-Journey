#include<iostream>
using namespace std;

void change(int *a,int* b);

void change(int *a,int* b){
    int temp=*a;
    *a=*b+temp;
    *b=abs(*b-temp); //abs-->used for taking the positive value only
    
 //If not using abs inbuilt function   
    // if(*b>0){
    //     *b=*b;
    // }
    // else if(*b<0){
    //     *b=(-1*(*b));
    // }
}
    int main(){
        int a,b;
        cin>>a;
        cin>>b;
        
        change(&a,&b);
        
        cout<<a<<endl
        <<b<<endl;
        return 0;
        
    }
