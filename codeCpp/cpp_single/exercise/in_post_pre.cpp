#include<iostream>
using namespace std;
int pre[]={1,2,3,4,5,6};
int in[]={3,2,4,1,6,5};
int post[]={3,4,2,6,5,1};
void pree(int root,int start,int end){
    if(start>end)return;
    int i=start;
    while(i<end && in[i]!=post[root])i++;
    printf("%d",post[root]);
    pree(root-end+i-1,start,i-1);
    pree(root-1,i+1,end);
}
void postt(int root,int start,int end){
    if(start>end)return;
    int i=start;
    while(i<end && in[i]!=pre[root])i++;
    postt(root+1,start,i-1);
    postt(root+i-start+1,i+1,end);
    printf("%d",pre[root]);
}
int main(){
pree(5,0,5);
postt(0,0,5);
}