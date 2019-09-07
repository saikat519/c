#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    int data;
    struct Node *left,*right;
}*newnode,*head=NULL;

typedef struct Node node;
void create();
void insertatend();
void insertathead();
void insertatmid();
void display();
void deleteatend();
void deleteathead();

void main()
{
    int ch,pos,n,i;
 
    printf("\n 1 - insertatend");
    printf("\n 2 - insertathead");
    printf("\n 3 - insertatmid");
    printf("\n 4 - display");
    printf("\n 5 - EXIT");
    printf("\n 6 -create-number_of-nodes");
    printf("\n 7 - delete at end");
    printf("\n 8 - delete at head");
    printf("\n 9 - delete at intermidiate positon");

    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
 
        switch (ch)
        {
        	
        case 1:insertatend();
        	     break;
        	
       case 2: insertathead();
                break;       	
        	
        	
       case 3:  printf("position to insert::");
        	       scanf("%d",&pos);
        	       insertatmid(pos);
                 break;
        
        case 4:
            display();
            break;            
        case 5:
            exit(0);
        case 6: printf("How many nodes you want:");
        	      scanf("%d",&n);  
 		for(i=0;i<n;i++)
		 create();
		 break; 
        case 7:deleteatend();
        	     break;
        case 8:deleteathead();
        	     break;
        case 9:deleteatmid();
        		break;
        default :
            printf(" Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}


void insertatend()
{
	int x;
    node *ptr=head;
	newnode=(node *)malloc(sizeof(node));
	newnode->left=NULL;
	newnode->right=NULL;
	printf("Enter The Data:");
	scanf("%d",&x);
	newnode->data=x;
	if(head==NULL)
	head=newnode;		//empty list
	
	else
	{
		while(ptr->right !=NULL)
		ptr=ptr->right;
		
		
		ptr->right=newnode;	
		
	}
	
}

void insertathead()
{
	int x;
   	node *ptr=head;
	
	newnode=(node *)malloc(sizeof(node));
	
	newnode->left=NULL;
	newnode->right=NULL;
	
	printf("Enter The Data:");
	scanf("%d",&x);
	
	newnode->data=x;
	
	if(head==NULL)
	head=newnode;		


	else
	{
		newnode->right=head;
		head=newnode;
	}

}

void insertatmid(int pos)
{
	
	int x,i;
          node *ptr=head,*prev;
	
	
	if(head==NULL)
	printf("sorry list is empty :( \n");
	
	else
	{
	newnode=(node *)malloc(sizeof(node));
	printf("Enter The Data:");
	scanf("%d",&x);
	newnode->data=x;
		for(i=1;i<pos;i++)
		{
			prev=ptr;
			ptr=ptr->right;
		}
	newnode->right=ptr;
	prev->right=newnode;	
	}
	
}



void display()
{
	node *ptr=head;
	if(head==NULL)
	printf("List is empty!!!!\n");
	else
	{
		while(ptr !=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->right;
		}
	}
}

void create()
{
	int x;
    node *ptr=head;
	newnode=(node *)malloc(sizeof(node));
	newnode->left=NULL;
	newnode->right=NULL;
	printf("Enter The Data:");
	scanf("%d",&x);
	newnode->data=x;
	if(head==NULL)
	head=newnode;		//empty list
	
	else
	{
		while(ptr->right !=NULL)
		ptr=ptr->right;
		
		
		ptr->right=newnode;	
		
	}
		
}


void deleteatend()
{
	node *ptr=head,*prev;
	if(head==NULL)
		printf("List is empty::\n");
	else if(head->right==NULL)
	{
		head=NULL;
		free(head);
	}
	else
	{
		
		while(ptr->right !=NULL)
		{
			prev=ptr;
			ptr=ptr->right;
		}
	printf("%d is gonna be deleted\n",ptr->data);
		prev->right=NULL;
		free(ptr);
	}
	
}

void deleteathead()
{
	node *ptr=head;
	if(head==NULL)
		printf("List is empty::\n");
	else if(head->right==NULL)
	{
	printf("%d is gonna be deleted\n",ptr->data);
		head=NULL;
		free(head);
	}
	else
	{
	printf("%d is gonna be deleted\n",ptr->data);
		head=head->right;
		free(ptr);
	}	
}


void deleteatmid()
{
	int i,pos;
	node *ptr=head,*prev;	
	
printf("enter the position of node which you wanna delete::\n");
scanf("%d",&pos);
if(head==NULL)
printf("List is empty::");

else
{

	for(i=1;i<pos;i++)
	{
		if(ptr==NULL)
		{
		printf("position is greater than size::\n");
		return;
		}
		else
		{
		prev=ptr;
		ptr=ptr->right;
		}
	}
	printf("%d is gonna be deleted\n",ptr->data);
		
	prev->right=ptr->right;
	free(ptr);	
}

}
//@ SAIKAT MUKHOPADHYAY	
