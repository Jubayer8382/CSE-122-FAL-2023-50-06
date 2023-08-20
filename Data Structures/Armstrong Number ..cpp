//Write a C++ program to print out all Armstrong numbers between 1 and 10000. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number.
#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int n,o,rem,num=0;
    cin>>n;
    cin>>o;
    cin>>rem;
    cin>>num;
    cout<<"Enter the number :"<<endl;
    o=n;
    while(0!=0)
    {
        rem=0%10;
        num=num+rem*rem*rem;
        o=o/10;
    }
        if(n==num)
        {
            cout<<"Armstrong number :";
        }
        else
            cout<<"Armstrong number :";
        getch();
}
