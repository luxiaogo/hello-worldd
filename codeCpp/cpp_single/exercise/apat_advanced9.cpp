#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,k;
    cin >> n;
    vector<float>v(10);
    vector<float>e(10);
    for(int i=0;i<n;i++)
    {
        cin >> k;
        cin >> v[k];
    }
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> k;
        cin >> e[k];
    }
    vector<float>c(20);
    for(int i=0;i<10;i++)        //
        for(int j=0;j<10;j++)
        {
            c[i+j] += v[i]*e[j];
        }                        //
    int flag=0;
    int num;
    for(int i=0;i<20;i++)
    {
        if(c[i]!=0)
            num++;
    }
    cout << num << " ";
    for(int i=19;i>=0;i--)
    {
        if(c[i]!=0)
        {
            if(flag==1)
                cout << " ";
            printf("%d %.1f",i,c[i]);
            flag=1;
        }
    }
}