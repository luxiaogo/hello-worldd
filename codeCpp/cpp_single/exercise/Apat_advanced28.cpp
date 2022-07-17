#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct student
{
    string num,name;
    int score;
};
bool cmp1(student a,student b)
{
    return a.num>b.num;
}
bool cmp2(student a,student b)
{
    return a.name > b.name;
}
bool cmp3(student a,student b)
{
    return a.score>b.score;
}
int main()
{
    int n,c;
    cin >> n >> c;
    vector<student>v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i].num >> v[i].name >> v[i].score;
    }
    if(c==1)
        sort(v.begin(),v.end(),cmp1);
    else if(c==2)
        sort(v.begin(),v.end(),cmp2);
    else if(c==3)
        sort(v.begin(),v.end(),cmp3);
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout << v[i].num << " " << v[i].name << " " << v[i].score << endl;
    }
}