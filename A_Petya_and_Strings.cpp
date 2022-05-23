#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int sz1=s1.size();
    int sz2=s2.size();
    for(int i=0;i<sz1;i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
        {
            s1[i]=s1[i]-32;
        }
    }
    for(int i=0;i<sz2;i++)
    {
        if(s2[i]>='a' && s2[i]<='z')
        {
            s2[i]=s2[i]-32;
        }
    }
    int result=s1.compare(s2);
    cout<<result;
    return 0;
}