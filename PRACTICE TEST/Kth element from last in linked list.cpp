#include<iostream>

using namespace std;

struct llist
{
     long n;
     llist *next;
};

/*llist* create(int n)
{
     llist *s=new llist;
     s->n=n;
     s->next=NULL;
     return s;
}
*/
bool flag;
llist * ptr,*str;
void push(long n)
{
     llist *str=new llist;
     str->n=n;
     str->next=NULL;
     if(flag==false)
     {
          flag=true;
          ptr=str;
     }
     else
     {
          str->next=ptr;
          ptr=str;
     }
}
long pop()
{
          long n=ptr->n;
          str=ptr;
          ptr=ptr->next;
          delete str;
          return n;
}
int  main()
{
     long n=0;
     flag=false;
     while(n>=0)
     {
          cin>>n;
          if(n>=0)
          {
               //llist * s=create(n);
               push (n);
          }
     }
     int k;
     cin>>k;

     while(k--)
     {
          long d=pop();
          if(k==0)
               cout<<d;
     }
}
