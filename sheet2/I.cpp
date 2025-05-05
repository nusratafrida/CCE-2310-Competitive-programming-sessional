#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r=0,temp;
    cin>>n;
    temp=n;
    while(n>0)
    {
        r = r*10 + n%10;
        n/=10;
    }
    cout<<r<<endl;
    if(r==temp)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
