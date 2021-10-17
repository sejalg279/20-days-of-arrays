#include<iostream>
#include<conio.h>
using namespace std;
int func(int arr[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
            {
                swap(arr[i],arr[j]);
                j++;
            }
        }
    }
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
    func(arr,n);
    for(int i=0;i<n;i++)
       {
      cout<<" \n "<<arr[i];
       }
}

/*Enter no4
Enter elements1
6
-7
-9

 -7
 -9
 1
 6*/
