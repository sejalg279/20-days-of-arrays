#include<iostream>
#include<conio.h>
using namespace std;
int unions(int arr1[],int arr2[],int n,int m)
{
    cout<<"\n Union:";
int i=0,j=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
            cout<<arr1[i++]<<" ";
       else if(arr1[i]>arr2[j])
            cout<<arr2[j++]<<" ";
        else
        {
            cout<<arr2[j++]<<" ";
            i++;
        }
    }
    while(i<n)
        cout<<arr1[i++]<<" ";
    while(j<m)
        cout<<arr2[j++]<<" ";
}
int inter(int arr1[],int arr2[],int n,int m)
{
     cout<<"\n intersection:";
int i=0,j=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
            i++;
       else if(arr1[i]>arr2[j])
           j++;
        else
        {
            cout<<arr2[j++]<<" ";
            i++;
        }
    }
}
int main()
{
    int n,m;
    cout<<"\n Enter size 1:";
    cin>>n;
    int arr1[n];
    cout<<"\n Enter elements 1:";
    for(int i=0;i<n;i++)
        cin>>arr1[i];

    cout<<"\n Enter size 2:";
    cin>>m;
    int arr2[m];
     cout<<"\n Enter elements 2:";
    for(int j=0;j<m;j++)
        cin>>arr2[j];
    unions(arr1,arr2,n,m);
    inter(arr1,arr2,n,m);
    return 0;
}
/*
 Enter size 1:4

 Enter elements 1:12
23
45
56

 Enter size 2:3

 Enter elements 2:1
3
9
1 3 9 12 23 45 56*/
