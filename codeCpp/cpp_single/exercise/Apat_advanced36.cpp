#include<iostream>
using namespace std;
const int inf=99999999;
int main(){
    string name,num;
    int n,score;
    char sex;
    string manname,femalename,mannum,femalenum;
    int minman=inf,maxfemale=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> name >> sex >> num >> score;
        if(sex=='M'){
            if(score<minman){
                minman=score;
                manname=name;
                mannum=num;
            }
        }
        if(sex=='F'){
            if(score>maxfemale){
                maxfemale=score;
                femalename=name;
                femalenum=num;
            }
        }
    }
    if(maxfemale==0){
        cout << "Absent" << endl;
    }else{
        cout << femalename << " " << femalenum << endl;
    }
    if(minman==inf){
        cout << "Absent" << endl; 
    }else{
        cout << manname << " " << mannum << endl;
    }
    if(maxfemale==0 || minman==inf){
        cout << "NA";
        return 0;
    }
    cout << maxfemale-minman;
}