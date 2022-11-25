#include<stdio.h>
#include<stdlib.h>

static int n;
struct node{
    int info;
    struct node*link ;
};
struct node *first ;


void create()
{
    struct node*cpt, *ptr ;

    printf("Enter the elements");
    ptr = (struct node*)malloc(sizeof(struct node));
    scanf("%d",&ptr->info);
    ptr->link = NULL ;
    first = ptr ;
    

    for(int i = 1 ; i < n ; i++)
    {
         cpt = (struct node*)malloc(sizeof(struct node));
         scanf("%d",&cpt->info);
         ptr->link = cpt ;
         ptr = cpt ;
    }

   ptr->link = NULL ;
}

int main()
{
   printf("Enter the number of elements");
   scanf("%d",&n);
   create();
   display();
}

void display()
{
    struct node*ptr ;
    ptr = first ;
    int i = 1 ;

    while( ptr!=NULL )
    {
        printf("%d",ptr->info);
        ptr = ptr->link ;
            }
}