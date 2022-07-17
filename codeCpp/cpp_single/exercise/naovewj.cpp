#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<string>v;
    vector<string>v2;
    vector<string>v3;
    int n,node,m,age,oldage=9999999,oldname;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> node;
        v.push_back(node);
    }
    cin >> m;
    for(int i=0;i<m;i++)
    {
        cin >> node;
        v3.push_back(node);
        vector<string>::iterator s=find(v.begin(),v.end(),node);
        if("*s");
            v2.push_back(node);
    }
    if(v2.empty())
    {
        for(int i=0;i<m;i++)
        {
            age=((v3[i][6]-'0')*1000+(v3[i][7]-'0')*100+(v3[i][8]-'0')*10+(v3[i][9]-'0'))*365+((v3[i][10]-'0')*10+(v3[i][11]-'0'))*30+(v3[i][12]-'0')*10+v3[i][13]-'0';
            if(age>oldage){oldage=age;oldname=v3[i];}
        }
        cout << olname;
    }
    else
    {
        oldage=9999999;
        for(int i=0;i<v2.size();i++)
        {
            age=((v2[i][6]-'0')*1000+(v2[i][7]-'0')*100+(v2[i][8]-'0')*10+(v2[i][9]-'0'))*365+((v2[i][10]-'0')*10+(v2[i][11]-'0'))*30+(v2[i][12]-'0')*10+v2[i][13]-'0';
            if(age>oldage){oldage=age;oldname=v2[i];}
        }
        cout << oldname;
    }
}
