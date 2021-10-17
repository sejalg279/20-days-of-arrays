#include<iostream>
#include<conio.h>
using namespace std;
void reverses(int arr[],int s,int e)
{
    while(s<e)
    {
        int temp;
        temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"\n Enter "<<n<<" no:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int s=0,e=n-1;
    reverses(arr,s,e);
    for(int i=0;i<n;i++)
        {
            cout<<"\n "<<arr[i];
        }
    getch();
    return 0;
}
