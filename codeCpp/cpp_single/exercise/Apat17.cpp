#include<iostream>
using namespace std;
#include<string>
int main()
{
    string s;
    int iu,yu,b;
    cin >> s >> b;
    iu=(s[0]-'0')/b;
    if(iu!=0)
    cout << iu;
    yu=(s[0]-'0')%b;
    for(int i=1;i<s.length();i++){
    iu=(s[i]-'0'+yu*10)/b;
    if(iu!=0)
    cout << iu;
    yu=(s[i]-'0'+yu*10)%b;
    }
    cout << " " << yu;
}