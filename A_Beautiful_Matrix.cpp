#include<iostream>

using namespace std;
int main()
{
    int A[5][5];
    int I,J,steps=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            int a;
            cin>>a;
            A[i][j]=a;
            if(a==1)
            {
                I=i;
                J=j;
            }
        }
    }
    I=abs(I-2);
    J=abs(J-2);
    steps=I+J;
    cout<<steps;
    return 0;

}