#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string s2;
    sort(s.begin(),s.end());
    int pos;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='+')
        {
            pos=i;
            break;
        }
    }
    s2=s.substr(pos);
    for(int i=0;i<s2.size();i++)
    {
        cout<<s2[i];
        if(i!=s2.size()-1)
        cout<<'+';
    }
    return 0;
}