#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int  n;
    cout<<"\n Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"\n Enter the ELEMENTS:";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int counter=1;
    while(n>counter)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<arr[i];
    }
    getch();
    return 0;
}
/*
 Enter size of array:5

 Enter the ELEMENTS:23
678
1
35
75

1
23
35
75
678*/
