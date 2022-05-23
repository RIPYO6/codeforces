#include<iostream>
#include<string>

using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int A[n];
    int sum=k;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    if(A[k-1]==0)
    {
        for(int i=k-1;i>=0;i--)
        {
            if(A[i]==0)
            sum--;
        }

    }
    else 
    {
        for(int i=k;i<n;i++)
        {
            if(A[i]>=A[k-1])
            sum++;
        }
    }
    cout<<sum;
    return 0;
}