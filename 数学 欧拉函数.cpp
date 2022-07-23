#include<bits/stdc++.h>
using namespace std;
int oula(int n)
{
    int rea=n;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
        {
            rea=rea-rea/i;
            while(n%i==0)
                n=n/i;
        }
    if(n>1)rea=rea-rea/n;
    return rea;
}
int main()
{
    int n;
    cin>>n;
    cout<<oula(n);
}