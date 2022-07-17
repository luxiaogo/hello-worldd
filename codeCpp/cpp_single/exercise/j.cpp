#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Student
{
    public:
    string name;
    private:
    double score;
    void inputscore()
    {
        cin >> name ;
    }
};
void vectorprinter(vector<int>&v)
{
    for(vector<int>::iterator it = v.begin();it!=v.end();it++)
    cout << *it << " " ;
    cout << endl ;
}
int main()
{
    void vectorprinter(vector<int>&v);
    void inputscore();
    Student s1;
    vector<int>v1;
    for(int i=1;i<10;i++)
    v1.push_back(i);
    vectorprinter(v1);
    
}