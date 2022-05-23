#include<iostream>
#include<string>

using namespace std;
int main()
{
    int n;
    cin>>n;
    string A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        string a=A[i];
        int len=a.length();
        if(len >10)
        {
            cout<<a[0]<<len-2<<a[len-1]<<endl;
        }
        else 
        cout<<a<<endl;

    }
    return 0;
}