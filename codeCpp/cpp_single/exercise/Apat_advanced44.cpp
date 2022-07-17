#include<iostream>
#include<vector>
using namespace std;
int minuss(int a,int b){
    return (a-b);
}
int main(){
    int n,m;
    int closenum=99999999;
    vector<string>ans;
    cin >> n >> m;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin >> a[i];
    for(int i=1;i<=n;i++)
    {
        int total=0;
        for(int j=i;j<=n;j++){
            total+=a[j];
            if(minuss(total,m)<closenum && minuss(total,m)>=0){
                closenum=minuss(total,m);
                ans.clear();
            }
            if(minuss(total,m)==closenum){
                string s=to_string(i);
                s+='-';
                s+=to_string(j);
                ans.push_back(s);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << endl;
    }
}