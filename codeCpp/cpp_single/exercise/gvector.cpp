#include<iostream>
using namespace std;
#include<vector>
#include<string>
/*int * func()
{
    
}*/
//class Person
//{
   // public:
   // person(string name,double score);
   // this->string m_name = name;
   // this->double m_score = score;
   //  
//};
void vectorprinter(vector<int>&v)
{
    for(vector<int>::iterator it = v.begin();it!=v.end();it++)
    cout << *it << " ";
    cout << endl;
}
int main()
{
    void vectorprinter(vector<int>&v);
    vector<int>v1;
    for (int i=0;i<10;i++)
    v1.push_back(i);                    //插入数据
    vectorprinter(v1);
    vector<int>v2(v1.begin(),v1.end());
    vectorprinter(v2);
    vector<int>v3(10,100);
    vectorprinter(v3);
    vector<int>v4(v3);
    vectorprinter(v4);
    vector<int>v5;
    v5.assign(v1.begin(),v1.end());
    vectorprinter(v5);
}