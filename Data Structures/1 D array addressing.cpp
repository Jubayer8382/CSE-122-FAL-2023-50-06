#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter data size :";
    int ba,i,j,lb=0,n,lc,ch;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements :";
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter  elements are :"<<endl;
     for(int i =0; i<n; i++)
    {
        cout<<arr[i];
    }
    cout<<"Chooose the finding address :";
    cin>>ch;
    for(int i =0; i<n; i++){

        if(arr[i]==ch)
            j=i;
    }
    int *p;
    ba=arr[0];
    p=&ba;
    cout<<"Base address is:"<<ba<<endl;
    lc=(ba+(2*(j-lb)));
    cout<<"The location of array element:"<<lc<<endl;
}
