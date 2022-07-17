#include<iostream>
using namespace std;
int main()
{
    int x,y,n,m,p,q,sum;
    int map=0;
    char a[20][21];
    cin >> n;
    for(int i=0;i<n;i++)
    cin >> a[i];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        sum=0;x=i;y=j;
        while(a[x][y]!='#')
        {
            if(a[x][y]='*')
            sum++;
            x--;
        }
        x=i;y=j;
        while(a[x][y]!='#')
        {
            if(a[x][y]='*')
            sum++;
            x++;
        }
        x=i;y=j;
        while(a[x][y]!='#')
        {
            if(a[x][y]='*')
            sum++;
            y++;
        }
        x=i;y=j;
        while(a[x][y]!='#')
        {
            if(a[x][y]='*')
            sum++;
            y--;
        }
        if(sum>map)
        map=sum;
    }
    cout << map;
}