#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*top=NULL;
void push()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    int x;
    scanf("%d",&x);
    temp->data=x;
    temp->next=top;
    top=temp;

}
void pop()
{
   if(top==NULL)
   {
       printf("stack is Empty\n");
   }
   else
   {
        struct node *temp;
        temp=top;
        top=top->next;
        free(temp);
   }
}

void display()
{
    struct node *p;
    p=top;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        push();
    }
    display();
    pop();
    display();


}
