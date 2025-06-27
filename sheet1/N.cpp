// Course Title : Competitive Programming Sessional
// Course Code : CCE-2310
// Course Teacher Name : Mirza Raquib
#include<bits/stdc++.h>
using namespace std;
int main()
{
char X;
cin>>X;
if(X>='a' && X<='z')
{
cout<<char(X-32)<<endl;
}
else
{
cout<<char(X+32)<<endl;
}
return 0;
}
