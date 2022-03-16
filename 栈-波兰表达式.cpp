#include <bits/stdc++.h>
using namespace std;
char str[100];
double Poland()
{
    cin>>str;
    if(str[0]=='+')
        return Poland()+Poland();
    else if(str[0]=='-')
        return Poland()-Poland();
    else if(str[0]=='*')
        return Poland()*Poland();
    else if(str[0]=='/')
        return Poland()/Poland();
    else
        return atof(str);
}
int main()
{
    printf("%f\n", Poland());
    return 0;

}
