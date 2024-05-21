//linklist
#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int val;
	struct node*next;
};
struct node*start=NULL;
void insert(int value)
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->val=value;
	temp->next=NULL;
	if(start==NULL)
		{
			start=temp;
		}
	else
		{
			struct node*m;
			m=start;
			while(m->next!=NULL)
				m=m->next;
			m->next=temp;
		}
}
void display()
{
	struct node*m;
	m=start;
	while(m->next!=NULL){
	printf("%d\n",m->val);
	m=m->next;
	}
	printf("%d\n",m->val);
}
void main ()
{
	int input,sc;
	printf("1. input the value\n2. show the result\n3. EXIT");
	for(int i=1 ; i>0 ; i++){
	printf("NUM = ");
	scanf("%d",&sc);
	switch(sc){
		case 1 :
		printf("INPUT=");
		scanf("%d",&input);
		insert(input);
		break;
		case 2 :
		display();
		break;
		case 3 :
		exit(0);
		break;
		default :
		printf("Wrong input");
		}
	}
}
	
	
			
