#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class ranklist
{
    public:
    ranklist(string a,int b,int c,int d,int e)
    {
        num=a;
        score=b;
        rank=c;
        order=d;
        loca=e;
    }
    string num;
    int score,rank,order,loca;
};
bool cmp(ranklist a,ranklist b)
{return a.score != b.score ? a.score>b.score:a.num<b.num;}  //不是很懂的感觉
int main()
{
    int n,m,x;
    string s;
    vector<ranklist>fin;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> m;       
        vector<ranklist>v(m);     //检查
        for(int j=0;j<m;j++)
        {
            cin >> s >> x;
            v.push_back(ranklist(s,x,0,0,i+1));
        }
        sort(v.begin(),v.end(),cmp);
        v[0].order=1;
        fin.push_back(v[0]);
        for(int j=1;j<v.size();j++)
        {
            v[j].order=(v[j].score==v[j-1].score)?(v[j-1].order):(j+1); //这排你要用到v[i]这种形式，所以命名vector的时候要写v(m)
            fin.push_back(v[j]);
        }
    }
    sort(fin.begin(),fin.end(),cmp);
    fin[0].rank=1;
    for(int i=1;i<fin.size();i++)
    fin[i].rank=(fin[i].num==fin[i-1].num)?(fin[i].rank):(i+1);
    
}