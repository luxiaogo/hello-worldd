#include<iostream>
using namespace std;
#include <string>
int main()
{
    string str="hello";
    int pos= str.find("he");                //find
    cout << "pos = " << pos << endl;
    str.replace(1,2,"fuck");                //replace
    cout << "str=" << str << endl;
    string strr="what";
    if(str.compare(strr)==0)                //compare
    cout << "They are the same.";
    else cout << "No, they are not.";
    string str1;
    cout << "请输入：" << endl;
    cin >> str1;
    for (int i =0;i < str1.size();i++)      //input   
    cout << str1[i] << " " <<endl;
    str.insert(1,"ll");                      //it will be in front!
    str.erase(1,1);                          //Now it's hlfucklo
    string son = str.substr(1,3);           //It should be lfu
    cout << son << endl;                    //常和find连用
    cout << endl;
}