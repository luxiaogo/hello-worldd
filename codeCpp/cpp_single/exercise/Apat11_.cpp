#include<iostream>
using namespace std;
#include<vector>
int n;
int main()
{
    int N,n;
    cin >> N;
    vector<int>v[5];
    for(int i=0;i<N;i++){
    cin >> n;
    if(n%5==0 && n % 2==0)
    v[1].push_back(n);
    else if(n%5==1)
    v[2].push_back(n);
    else if(n%5==2)
    v[3].push_back(n);
    else if(n%5==3)
    v[4].push_back(n);
    else if(n%5==4)
    v[5].push_back(n);
    }
    int a1,a2,a4,a5=0;
    for(int i=0;i<5;i++)
        for(int j=0;i<v[i].size();j++)                   //先把复杂问题简单化，再补充细节
        {
            if(v.size()==0)cout << N;
            if(i==0 && v[i][j]%2==0)a1 += v[i][j];      //这个双重循环，多用if语句来限定条件，也十分方便
            if(i==2 && v[i][j]%2==0)a2 += v[i][j];
            if(i==2 && v[i][j]%2==1)a2 -= v[i][j];
            if(i==4 && v[i][j]>a5)a5 = v[i][j];
        }
}