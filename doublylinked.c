 #include<stdio.h>
 
  struct node
  {
	  int data;
	  struct node *next;
	  struct node *prev;
  };

  struct node *head,*tail;

  void create()
{
	
  struct node *newnode;
  head=0;
  int choice;
  while(choice)
  {
  newnode=(struct node*) malloc(sizeof(struct node));
  printf("Enter data : ");
  scanf("%d",&newnode->data);
  newnode->next=0;
  newnode->prev=0;
  
  if(head==0){
	  head=tail=newnode;
  }
  else{
	  tail->next=newnode;
	  newnode->prev=tail;
	  tail=newnode;}
  printf("do u want to continue :");
  scanf("%d",&choice);
  }
   void display(){
	   tail=head;
  while(tail!=0){
	  
             printf("entered element is :");
	     printf("%d",&tail->next);
	     tail=tail->next;
  }
   }
   void main(){
	   create()
	   display()
   }
	     
    

   
