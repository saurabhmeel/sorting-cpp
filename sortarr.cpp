//hello
#include<bits/stdc++.h>
using namespace std;


void solve( int arr[], int n)
{
   sort(arr,arr+n);
   for(int i =0 ; i<n;i++)
     cout<<arr[i]<<" ";
}

int main()
{
    int arr[] = {5 , 6 ,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    solve( arr,n);
    return 0;
}
