#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,60};
    int *ptr=arr;
    // cout<<"Value of ptr is " <<*ptr<<endl;
    // cout<<"Value of ptr is " <<ptr<<endl;

    // cout<<"Value of ptr is " <<(++*ptr)<<endl;
    // cout<<"Value of ptr is " <<(*++ptr);

//    cout<<ptr<<endl;
//    cout<<++*ptr<<endl;
//    cout<<*++ptr<<endl;
//     cout<<*(++ptr)<<endl;
//     cout<<*(ptr++)<<endl;
//     cout<<*ptr;
for(int i=0;i<6;i++)
{
    cout<<"Address: "<<ptr+i<<"  || Value: "<<*(ptr+i)<<endl;
}
}