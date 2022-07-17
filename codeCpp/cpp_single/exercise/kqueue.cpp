
#include<iostream>
using namespace std;
#include <queue>
#include<string>
class person
{
    public:
    person(string name,int age)
    {this->m_name=name;
     this->m_age=age;}
     string m_name;
     int m_age;
};
int main()
{
    queue<person>q;
    person p1("唐僧",30);
    person p2("孙悟空",130);
    person p3("猪八戒",230);
    person p4("沙僧",330);
    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);
    while(!q.empty())
    {
    //查看队头
    cout << "队头姓名为：" << q.front().m_name << endl;
    //查看队尾
    cout << "队尾姓名为：" << q.back().m_name << endl;
    q.pop();
    }
}