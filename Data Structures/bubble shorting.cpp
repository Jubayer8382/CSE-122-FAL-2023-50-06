#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter data size :";
    int n;
    cin>>n;
    int arr[n];
    int coun=0;
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                coun++;
            }
        }


    }
    cout<<"The sorting array is :";
    for(int i=0; i<n; i++)
    {

        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"loop count :"<<coun<<endl;


}

