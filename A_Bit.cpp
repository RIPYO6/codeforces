#include<iostream>
#include<string>
 
 using namespace std;
void bit()
{
    int n;
    cin>>n;
    int X=0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s[0]=='+' || s[2]=='+')
        {
            X++;
        }
        else
        {
            X--;
        }

    }
    cout<<X;
}
 int main()
 {
     bit();
     return 0;
 }

