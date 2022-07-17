#include <iostream>
using namespace std;
int main() {
	int next[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
	const int inf =99999999;
	int e[101][101]={inf};
	int n,m,temp;
	cin >> n >> m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> temp;
			e[i][j]=temp;
		}
	}
	int l[n*m];
	for(int i=0;i<n*m;i++)
	cin >> l[i];
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	{
		int x=i,y=j;
		int cnt=0,index=1;
		while(index<n*m)
		{
			for(int k=0;k<4;k++)
			{
				x += next[k][0];
				y += next[k][1];
				if(x>m-1||x<0||y>n-1||y<0)
				{
				x -= next[k][0];
				y -= next[k][0];
				continue;
				}
				
			}
		}
	}
}
		