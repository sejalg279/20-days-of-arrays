#include<iostream>
#include<conio.h>
#include<climits>
using namespace std;
int max(int arr[],int n)
{
    int start=arr[0],end1=0;
    for(int i=0;i<n;i++)
    {
        end1=end1+arr[i];
        if(start<end1)
            start=end1;
        if(end1<0)
            end1=0;
    }
    return start;
}
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ans=max(arr,n);
    cout<<"\nKanade algo:"<<ans<<endl;
    return 0;
}
/*8
-2
-3
4
-1
-2
1
5
-3

Kanade algo:7*/
