#include<iostream>
#include<vector>
using namespace std;
struct node{
    string s1,s2;
};
int main(){
    vector<node>v;
    string s1,s2;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int flag=0;
        cin >> s1 >> s2;
        for(int i=0;i<s2.size();i++){
            if(s2[i]=='1'){flag=1;s2[i]='@';}
            if(s2[i]=='l'){flag=1;s2[i]='L';}
            if(s2[i]=='0'){flag=1;s2[i]='%';}
            if(s2[i]=='O'){flag=1;s2[i]='o';}
        }
        if(flag==1){
            node m;
            m.s1=s1;
            m.s2=s2;
            v.push_back(m);
        }
    }
    if(v.size()==0){
        if(n==1)cout << "There is 1 account and no account is modified";
        else cout << "There are " << n << " account and no account is modified";
    }
    if(v.size()!=0){
        cout << v.size();
        for(int i=0;i<v.size();i++){
            cout << endl << v[i].s1 << " " << v[i].s2;
        }
    }
}