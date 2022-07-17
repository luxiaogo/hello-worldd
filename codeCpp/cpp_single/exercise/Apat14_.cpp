#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b,c,d;
    char x,y;
    int z,j;
    cin >> a >> b >> c >> d;
    for(int i=0;i<a.length() || i<b.length();i++)
        if(a[i]==b[i] && a[i]>='A' && a[i]<='G')
        {x=a[i];i++;j=i;}
    for(int i=j;i<a.length() || i<b.length();i++)
        if(a[i]==b[i] && (isdigit(a[i]) || (a[i] < 'N' && a[i] > 'A')))
        y=a[i];
    for(int i=0;i<c.length() || i<d.length();i++)
    if(c[i]==d[i] && c[i] < 'z' || d[i] > 'a')
    z=i;
    string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    cout << week[x - 'A'] << " ";
    int num;
    num=isdigit(y)?y-'0':y-'A'+10;
    printf("%02d:%02d",num,z);
}