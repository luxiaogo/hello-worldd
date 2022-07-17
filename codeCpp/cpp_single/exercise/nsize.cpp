#include<iostream>
#include<set>
#include<string>
using namespace std;
void printset(set<int>&d)
{
    for(set<int>::iterator it=d.begin();it!=d.end();it++)
    cout << *it << " ";
    cout << endl;
}
class Mycompare
{
    public:
    bool operator()(int v1,int v2)
    {
        return v1>v2;
    }
};
class person
{
    public:
    person(string name,int age)
    {
        this->aname = name;
        this->aage = age;
    }
    string aname;
    int aage;

};
class personcompare
{
    public:
    bool operator()( const person p1 ,const person p2)
    {
    return p1.aage > p2.aage;
    }
};
class weaiof
{
    public:
    bool operator()(const person&o,const person&oo)
    {
        return o.aage > oo.aage;
    }
};
int main()
{
    set<int>s1;
    s1.insert(5);
    s1.insert(8);
    s1.insert(7);
    s1.insert(9);
    printset(s1);
    if(s1.empty())
    cout << "该容器为空";
    if(!s1.empty())
    cout << "该容器不为空" << endl;
    cout << "该容器大小为：" << s1.size() <<endl;
    set<int>s2;
    s2.insert(4);
    s2.insert(6);
    s2.insert(9);
    s2.insert(7);
    s1.swap(s2);
    printset(s1);
    printset(s2);
    s2.swap(s1);
    printset(s1);
    printset(s2);
    s1.find(8);
    set<int>::iterator pos =s1.find(30);
    if(pos !=s1.end())
    cout << "找到元素：" << *pos <<endl;
    else
    cout << "未找到该元素" << endl;
    int num = s1.count(8);
    cout << num;
    set<int>::iterator it;
    it=s1.begin();
    set<int,Mycompare>p;
    p.insert(20);
    p.insert(90);
    p.insert(60);
    p.insert(70);
    p.insert(50);
    for(set<int,Mycompare>::iterator it =p.begin();it!=p.end();it++)
    cout << *it << " ";
    cout << endl ;
    set<person,personcompare>u;
    person p1("jack",28);
    person p2("harry",23);
    person p3("milk",40);
    person p4("mac",30);
    u.insert(p1);
    u.insert(p2);
    u.insert(p3);
    u.insert(p4);
    for(set<person,personcompare>::iterator it=u.begin();it!=u.end();it++)
    cout << it->aname << it->aage << endl;

}
class mycompare
{
    public:
    bool operator()(int a,int b)
    {
        return a>b;
    }

};


















