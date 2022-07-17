#include<iostream>
using namespace std;
#include<map>
#include<string>
void mapprinter(map<int,int>&m)
{
    for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
    cout << "key=" << (*it).first << "  value=" << it->second << endl;
    cout << endl;
}
class person
{
    public:
    person(string name,int age)
    {
        goodname=name;
        goodage=age;
    }
    string goodname;
    int goodage;
};
class personcompare
{
    bool operator()(const person&a,const person&b)
  { return a.goodage > b.goodage;}
};
void printmap(map<person,int>&w)
{
    for(map<person,int,personcompare>::iterator it=w.begin();it!=w.end();it++)
    cout << it->first.goodname << it->first.goodage << it->second;
}
int main()
{
    map<int,int>m;
    m.insert(pair<int,int>(5,5));
    m.insert(pair<int,int>(2,343));
    m.insert(pair<int,int>(3,239));
    m.insert(pair<int,int>(8,328));
    mapprinter(m);
    map<person,int,personcompare>p;
    p.insert(pair<person,int>(("老二",5),5));
    p.insert(pair<person,int>(("老五",2),6));
    p.insert(pair<person,int>(("老三",4),7));
    printmap(p);
}