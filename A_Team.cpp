#include<iostream>
#include<string>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[3];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<endl;
        if(a&b|b&c|c&a)
        sum++;
    }
    cout<<sum;
    return 0;
}