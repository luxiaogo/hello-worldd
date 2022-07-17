#include<iostream>
#include<deque>
using namespace std;
void printdeque(const deque<int>&d)
{
    for(deque<int>::const_iterator it=d.begin();it!=d.end();it++)
    cout << *it << " ";
    cout << endl;
}
int main()
{
     //三只小猪称体重
     int pig1,pig2,pig3;
     cout << "请输入小猪A的体重：" << endl;
     cin >> pig1;
     cout << "请输入小猪B的体重：" << endl;
     cin >> pig2;
     cout << "请输入小猪C的体重：" << endl;
     cin >> pig3;
     cout << "小猪A的体重为：" << pig1 << endl;
     cout << "小猪B的体重为：" << pig2 << endl;
     cout << "小猪C的体重为：" << pig3 << endl;
     if(pig1>pig2)
     {if(pig1>pig3)
     cout << "A最重" << endl;
     else cout << "C最重" << endl;}
     else
     {
         if(pig2>pig3)
         cout << "B最重" << endl;
         else 
         cout << "C最重" << endl;
     }
     system("pause");
     return 0;
}