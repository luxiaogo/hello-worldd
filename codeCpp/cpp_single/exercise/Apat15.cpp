#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct stu
{
    int num,de,cai;
};
int cmp(struct stu a,struct stu b)
{
    if((a.de+a.cai)!=(b.de+b.cai))
    return((a.de+a.cai)>(b.de+b.cai));
    else if(a.de!=b.de)
    return(a.de>b.de);
    else 
    return(a.num<b.num);
}
int main()
{
    int N,L,H;
    stu temp;
    cin >> N >> L >> H;
    vector<stu>v[4];
    for(int i=0;i<N;i++){
    cin >> temp.num >> temp.de >> temp.cai;
    if(temp.de>H && temp.cai>H)
    v[0].push_back(temp);
    else if(temp.de>H && temp.cai>L)
    v[1].push_back(temp);
    else if(temp.de>L && temp.cai>L && temp.de>temp.cai)
    v[2].push_back(temp);
    else
    v[3].push_back(temp);
    }
    for(int i=0;i<4;i++)
    sort(v[i].begin(),v[i].end(),cmp);
    for(int i=0;i<4;i++)
    for(int j=0;j<v[i].length();j++)
    cout << v[i][j].num << v[i][j].de << v[i][j].cai;
}