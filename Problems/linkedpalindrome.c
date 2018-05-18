#include<stdio.h>
struct node
{
    int data;
	    struct node *next;
};
void print(struct node **head)
{
    	struct node *temp=*head;
    	printf("\nList:");
    	while(temp!=NULL)
    	{
        		printf("\n%d ",temp->data);
        		temp=temp->next;		
    	} 
}
void push(struct node **stack_ptr,int data)
{
    	struct node *temp=*stack_ptr;
    	temp=(struct node*)malloc(sizeof(struct node));
    	temp->data=data;
    	temp->next=*stack_ptr;	
    	*stack_ptr=temp;
}
int palindrome(struct node **head)
{
    	struct node *temp=*head;
    	struct node *temp1=*head;
    	struct node *stack_ptr=NULL;

    	while(temp!=NULL)
    	{
        		push(&stack_ptr,temp->data);
        		temp=temp->next;		
    	}

    	while(temp1!=NULL)
    	{
        		if(temp1->data==stack_ptr->data)
        		{
            			temp1=temp1->next;
            			stack_ptr=stack_ptr->next;
            			continue;
        		}
        		else
        		{
            			printf("\nNot Palindrome");
            			return;
        		}				
    	}
    	printf("\nPalindrome");
}

int main()
{
    	struct node *one = (struct node*)malloc(sizeof(struct node));
    	struct node *two = (struct node*)malloc(sizeof(struct node));
    	struct node *three = (struct node*)malloc(sizeof(struct node));
    	struct node *four = (struct node*)malloc(sizeof(struct node));

    	struct node *head=one;

    	one->data=1;
    	one->next=two;

    	two->data=2;	
    	two->next=three;

    	three->data=2;
    	three->next=four;

    	four->data=1;
    	four->next=NULL;

    	print(&head);

    	palindrome(&head);	

    	return 0;
}
