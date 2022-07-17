#include<iostream>
using namespace std;
int main()
{
    char a[20][21];
    int i,j,p,q,map=0,sum,n,m,x,y;
    cin >> n >> m;
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
        if(a[i][j]=='·')
        {
            sum = 0;
            x = i;
            y = j;
            while(a[i][j]!='#')
            {
                if(a[i][j]=='*')
                sum++;
                x--;
            }
            x=i;y=j;
            while(a[i][j]!='#')
            {
                if(a[i][j]=='*')
                sum++;
                x++;
            }
            while(a[i][j]!='#')
            {
                if(a[i][j]=='*')
                sum++;
                y++;
            }
            while(a[i][j]!='#')
            {
                if(a[i][j]=='*')
                sum++;
                y--;
            }   
        }
        if(sum>map)
        {
            map=sum;
            p=x;
            q=y;
        }
    }
    cout << "最多可以放置出"  << sum << "个炸弹" << "位置为" << '(' << p << ',' << q << ')'; 
}