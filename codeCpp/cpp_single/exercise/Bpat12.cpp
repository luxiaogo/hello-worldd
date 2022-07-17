#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v[5];
    int n,N;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> N;
        if(N%5==0 && N%2==0)
        v[0].push_back(N);
        if(N%5==1)
        v[1].push_back(N);
        if(N%5==2)
        v[2].push_back(N);
        if(N%5==3)
        v[3].push_back(N);
        if(N%5==4)
        v[4].push_back(N);
    }
        int a1,a2,a3,a4,a5=0;
        for(int i=0;i<5;i++)
        for(int j=0;j<v[i].size();j++)
        {
            if(i==0)
            a1 += v[i][j];
            if(i==1 && j%2==0)
            a2 += v[i][j];
            if(i==1 && j%2==1)
            a2 -= v[i][j];
            if(i==2)
            a3=v[i].size();
            if(i==3)
            a4 += v[i][j];
            if(i==4 && v[i][j]>a5)
            a5=v[i][j];
        }
        for(int i=0;i<5;i++)
        {
            if(i!=0)
            cout << " ";
            if(i==0 && a1==0 || i!=0 && v[i].size()==0)
            cout << "N";
            if(i==0)cout << a1;
            if(i==1)cout << a2;
            if(i==2)cout << a3;
            if(i==3)cout << a4;
            if(i==4)cout << a5;
        }
}