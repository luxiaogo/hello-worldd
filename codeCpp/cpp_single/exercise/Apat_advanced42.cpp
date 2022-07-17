#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string card[55],card2[55];
    int index=0,n;
    char c[4]={'S','H','C','D'};
    for(int i=0;i<4;i++)
    for(int j=1;j<=13;j++){
        string s=c[i]+to_string(j);
        index++;
        card[index]=s;
    }
    card[53]="J1";
    card[54]="J2";
    cin >> n;
    int a[55];
    for(int i=1;i<=54;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=54;j++){
            card2[a[j]]=card[j];
        }
        for(int v=1;v<=54;v++){
            card[v]=card2[v];
        }
    }
    int flag=0;
    for(int i=1;i<=54;i++){
        if(flag==1){
            cout << " ";
        }
        cout << card[i];
        flag=1;
    }
}