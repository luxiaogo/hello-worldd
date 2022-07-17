#include<iostream>
using namespace std;
#include<string>
#include<cctype>
int main()
{
    string a,b,c,d;
    cin >> a >> b >> c >> d;
    int pos,i=0,j=0;
    char t[2];
    while(i<a.length() && i<b.length())
    {
        if(a[i]==b[i] &&(a[i]>='A' &&a[i]<='G'))
        {t[0]=a[i];
        break;}
        i++;
    }
    i++;
    while(i<a.length() && i<b.length())
    {
        if(a[i]==b[i] && ((a[i]>='A' && a[i]<='N') || isdigit(a[i])))
        {
            t[1]=a[i];
            break;
        }
        i++;
    }
    while(j<c.length() && j<d.length())
    {
        if(c[j]==d[j] && isalpha(c[j]))
        {pos =j;
        break;}
        j++;
    }
    string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    cout << week[t[0]-'A'+1] << " ";
    int m=isdigit(t[1])?t[1]-'0':t[1]-'A'+10;
    printf("%02d:%02d",m,pos);
}