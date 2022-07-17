#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *p,*q,*t,*head;
    int i,n,a;
    head=NULL;
    cin >> n;
    for(i=0;i<n;i++){
    cin >> a;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=a;
    p->next=NULL;
    if(head==NULL)
    head=p;
    else
    q->next=p;
    q=p;}
    t=head;
    while(t!=NULL)
    cout << t->data;
    t=t->next;
}
