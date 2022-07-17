#include<iostream>
#include<map>
#include<set>
using namespace std;
map<string,set<int>> title,auther,key,pub,year;
void query(map<string,set<int>>m,string s)
{
    if(m.find(s)!=m.end())
    {
        for(auto it=m[s].begin();it!=m[s].end();it++)
        {
            printf("%07d\n",*it);
        }
    }else cout << "Not Found\n";
}
int main()
{
    string ttitle,tauther,tkey,tpub,tyear;
    int n,m,num,id;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> id;
        getline(cin,ttitle);
        title[ttitle].insert(id);
        getline(cin,tauther);
        auther[tauther].insert(id);
        while(cin >> tkey);
        {
            key[tkey].insert(id);
            char c=getchar;
            if(c=='\n')break;
        }
        getline(cin,tpub);
        pub[tpub].insert(id);
        getline(cin,tyear);
        year[tyear].insert(id);
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d: ",&num);
        string temp;
        cin >> temp;
        if(num==1)query(title,temp);
        else if(num==2)query(auther,temp);
        else if(num==3)query(key,temp);
        else if(num==4)query(pub,temp);
        else if(num==5)query(year,temp);
    }
}