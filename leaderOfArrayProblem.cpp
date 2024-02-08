#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,9,1,4,6,1};
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n;j++)
        {
            if(arr[i]<arr[j])
            break;
            else if(j==n-1)
            cout<<arr[i]<<",";
        }
        
    }
     cout<<arr[n-1];
     
 
    return 0 ;
}