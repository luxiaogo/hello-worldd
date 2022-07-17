#include<iostream>
#include<vector>
using namespace std;
void vectorprinter(vector<int>&v)
{
    for(vector<int>::iterator it =v.begin();it!=v.end();it++)
    cout << *it << " " << endl;

}
int main()
{
    int i;
    vector<int>v1;
    for(i=1;i<10;i++)
    v1.push_back(i);
}