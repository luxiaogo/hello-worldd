#include <stdio.h>
struct Student
{int num;
 int score;
 struct Student * Next;};
 int main()
 {
     struct Student a,b,c, * head, * p;
     a.num=1;a.score=2;
     b.num=2;b.score=4;
     c.num=3;c.score=0;
     head=&a;
     a.Next=&b;
     b.Next=&c;
     p=head;
     while(p!=NULL)
     {printf("%5d %5d\n",p->num,p->score);
      p=p->Next;}
      return 0;
 }