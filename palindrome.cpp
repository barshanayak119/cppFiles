#include<iostream>
using namespace std;


void palin(int a){
    int temp = a,sum,r;
    while(a>0)    
    {    
    r=a%10;    
    sum=(sum*10)+r;    
    a=a/10;    
    }    
    if(temp==sum)    
    cout<<"Number is Palindrome.";    
    else    
    cout<<"Number is not Palindrome.";   

}


int main(){
    int a;
    cout<<"enter the number :"<<endl;
    cin>>a;
    palin(a);
}