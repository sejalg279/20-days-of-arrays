#include<iostream>
#include<conio.h>
using namespace std;

int binary(int arr[],int n,int key)   //function defination
{
    int s=0,e=n,mid;
    while(s<=e)
    {
        mid=(s+e)/2;                        //middle of arr is calculated by using formula
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key)
            e=mid-1;
        else
            s=mid+1;
    }
}


int main()
{
    int n,key ,ans;
    cout<<"\n Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"\n Enter "<<n<<" no in sorted order:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\n Enter the key:";
    cin>>key;
    ans=binary(arr,n,key);
    cout<<ans;
    getch();
    return 0;
}
/*
 Enter size of array:5

 Enter 5 no in sorted order:12
23
34
46
67

 Enter the key:46
3*/
