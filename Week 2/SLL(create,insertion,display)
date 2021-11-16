#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node*link;
};
struct node*head=NULL,*cur,*temp;
struct node *create(){
   int n,i;
   printf("enter number of elements");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
     cur = (struct node*)malloc(sizeof(struct node));
     printf("enter the elements");
     scanf("%d",&(cur->data));
     cur->link = NULL;
     if(head==NULL)
          head = cur;
     else{
         temp=head;
         while(temp->link!=NULL){
           temp = temp->link;
         }
         temp->link=cur;
         
      }
    } 
    return head;
}
struct node * insert_begin(int ele){
  cur = (struct node*)malloc(sizeof (struct node));
  cur -> data = ele;
  cur -> link = head;
  head = cur;
  return head;
}
struct node * insert_end(int ele){
  cur = (struct node*)malloc(sizeof(struct node));
  cur -> data = ele;
  cur -> link = NULL;
  temp = head;
  while(temp ->link != NULL)
       temp = temp->link;
  temp->link = cur;
  return head;
}
struct node * insert_pos(int ele,int pos){
  int c=1;
  cur = (struct node*)malloc(sizeof(struct node));
  cur -> data = ele;
  temp = head;
  while(c<pos-1)
  {
    temp=temp->link;
    c++;
  }
 cur->link=temp->link;
 temp->link=cur;
 return head;
}
void display(struct node *head){
   temp =head;
   while(temp->link!=NULL)
   {
     printf("%d->",temp->data);
     temp = temp->link;
    }
   printf("%d",(temp->data));
}
int main(){
  struct node * head;
  int ele,ch,pos;
  while(1){
      printf("1-create, 2-insert at begin, 3-insert at end, 4-insert at pos,5-display\n");
      printf("enter your choise\n");
      scanf("%d",&ch);
      switch(ch){
            case 1: head = create();
                   break;
            case 2: printf("enter the value to be inserted");
                   scanf("%d",&ele);
                   head = insert_begin(ele);
                   break;
            case 3: printf("enter the value to be inserted");
                   scanf("%d",&ele);
                   head = insert_end(ele);
                   break;
            case 4: printf("enter the value and position");
                   scanf("%d %d",&ele,&pos);
                   head = insert_pos(ele,pos);
                   break;
            case 5:display(head);
                  break;
            case 6:exit(0);
            
 }
}
}
output:
  case 1:
  1-create, 2-insert at begin, 3-insert at end, 4-insert at pos,5-display
enter your choise
1
enter number of elements4
enter the elements2
enter the elements3
enter the elements4
enter the elements5
  case 2:
    1-create, 2-insert at begin, 3-insert at end, 4-insert at pos,5-display
enter your choise
2
enter the value to be inserted1
   case 3:
    1-create, 2-insert at begin, 3-insert at end, 4-insert at pos,5-display
enter your choise
3
enter the value to be inserted6
    case4:
    1-create, 2-insert at begin, 3-insert at end, 4-insert at pos,5-display
enter your choise
4
enter the value and position7
3
    case 5:
    enter your choise
5
1->2->7->3->4->5->6

