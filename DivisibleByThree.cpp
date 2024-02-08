#include<bits/stdc++.h>
using namespace std;
 
int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int findlcd(int arr[],int n)
{
    long long int ans=arr[0];
    for(int i=0; i<n; i++)
    {
      ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
    }
return ans;
}
int main()
{
    int arr[]={5,3,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findlcd(arr,n);
    
    return 0;
}