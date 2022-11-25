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

    printf("Enter the elements\n");
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
   printf("Enter the number of elements\n");
   scanf("%d",&n);
   create();
   display();
   add_beg();
   printf("Element after insertion");
   display();
   delete_end();
   printf("Elements after delete :");
   display();
}

void display()
{
    struct node*ptr ;
    ptr = first ;
    int i = 1 ;

    while( ptr!=NULL )
    {
        printf("%d\t\n",ptr->info);
        ptr = ptr->link ;
            }
}

void add_beg()
{
    struct node*ptr ;
    printf("Enter the element to insert at first\n");
    ptr = (struct node*)malloc(sizeof(struct node));
    scanf("%d",&ptr->info );
    ptr->link = first ;
    first = ptr ;
}

void delete_end()
{
    struct node *ptr , *cpt ;
    
    ptr = first ;
    while(ptr->link!= NULL)
    {
        cpt = ptr ;
        ptr = ptr->link ;

    }

    cpt->link = NULL ;
    free(ptr);

}