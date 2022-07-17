#include<iostream>
using namespace std;
int main(){
    int a[10000],b[10000];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> b[i];
        a[b[i]]++;
    }
    for(int i=0;i<n;i++){
        if(a[b[i]]==1){
            cout << b[i];
            return 0;
        }
    }
    cout << "NONE";
    return 0;
}