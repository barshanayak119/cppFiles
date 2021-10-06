#include <iostream>
using namespace std;
class Swap{
    public:
    int a,b;
    void getNumber();
    void swapByAdd(int *n1, int *n2);
    void swapByRef(int &n1, int &n2);

};
void Swap :: getNumber(){
    cout<<"Enter the two number: "<<endl;
    cin>>a>>b;
    swapByAdd(&a,&b);
    swapByRef(a,b);
}
void Swap :: swapByAdd(int *n1, int *n2)
{
    cout<<"Before swap: "<<*n1<<" "<<*n2<<endl;
    int temp = *n1;
          *n1 = *n2;
          *n2 = temp;
    cout<<"After swap: "<<*n1<<" "<<*n2<<endl;      
}
void Swap :: swapByRef(int &n1, int &n2)
{
    cout<<"Before swap: "<<n1<<" "<<n2<<endl;
    int temp = n1;
          n1 = n2;
          n2 = temp;
    cout<<"After swap: "<<n1<<" "<<n2<<endl;      
}
int main(){
   Swap s;
   s.getNumber();
   return 0;
}