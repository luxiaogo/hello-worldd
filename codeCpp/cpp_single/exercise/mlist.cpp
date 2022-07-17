#include<iostream>
using namespace std;
#include <list>
bool compare(int a,int b)
{
    return a>b;
}
void listprinter(list<int>&p)
{
    for(list<int>::iterator it=p.begin();it!=p.end();it++)
    cout << *it << " ";
    cout << endl;
}
int main()
{
    list<int>l;
    for(int i=0;i<10;i++)
    l.push_back(i);
    listprinter(l);
    l.reverse();
    listprinter(l);
    l.sort();
    listprinter(l);
    l.sort(compare);
    listprinter(l);
    
}