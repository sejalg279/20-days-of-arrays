#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;
int func(int arr[],int n,int k)
{
    sort(arr,arr+n);
    return arr[k-1];
}

int main()
{
    int n,k;
    cout<<"Enter no";
    cin>>n;
    int arr[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter key";
    cin>>k;
   int ans=func(arr,n,k);
   cout<<ans;
    return 0;
}
