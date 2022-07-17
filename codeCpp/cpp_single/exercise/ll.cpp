#include<iostream>
using namespace std;
#include<deque>
void printdeque(const deque<int>&d)
{
    for(deque<int>::const_iterator it=d.begin();it!=d.end();it++)
    cout << *it << " ";
    cout << endl;
}
int main()
{
    deque<int>q;
    for(int i=0;i<10;i++)
    q.push_back(i);
    printdeque(q);
    q.resize(15);
    printdeque(q);
    q.resize(18,10);
    printdeque(q);
    q.push_front(5);
    printdeque(q);
    q.insert(q.begin(),5);
    printdeque(q);
    deque<int>::iterator it = q.begin();
    it++;
    it++;
    q.erase(it);
    printdeque(q);
    for(int i=0;i<q.size();i++)
    cout << q[i] << " ";
}