#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>
void dequeprinter(const deque<int>&d)
{
    for(deque<int>::const_iterator it = d.begin();it!=d.end();it++)
    cout << *it << " " ;
    cout << endl;
}
void test01()
{
    deque<int>q;
    for(int i=1;i<10;i++)
    q.push_back(i);
    dequeprinter(q);
    deque<int>w(q);
    dequeprinter(w);
    deque<int>e(5,10);
    dequeprinter(e);
}
int main()
{
    test01();
}