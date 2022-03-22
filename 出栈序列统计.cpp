#include <bits/stdc++.h>
using namespace std;
//ans = sum{i=0~n-1}f(i)*f(n-i-1)
int f(int n)
{
    if(n==1||n==0){return 1;}
   
    else{
        int sum = 0;
        for(int i=0;i<=n-1;i++)
        {
            sum = sum + f(i)*f(n-i-1);
        }
        return sum;
    }
}
int main()
{
    int n;cin>>n;
    cout<<f(n)<<endl;
    return 0;
}
