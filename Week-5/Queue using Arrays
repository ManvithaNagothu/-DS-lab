#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int front = -1,rear = -1,a[SIZE];
void enqueue(int ele){
    a[++rear] = ele;
    if(front == -1)
        front = 0;
}
int dequeue(){
    if(front == rear){
        return a[front];
        front = rear = -1;
    }
    else{
        return a[front++];
    }
}
void display(){
    for(int i=front;i<=rear;i++){
        printf("%d\n",a[i]);
    }
}

int main(){
    int ch,ele;
    while(1){
        printf("\n 1-enqueue \n 2-dequeue \n 3-display \n 4-exit \n");
        printf("Enter your choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1 : if(rear == SIZE - 1)
                        printf("Queue overflow");
                     else{
                        printf("Enter element to be inserted :");
                        scanf("%d",&ele);
                        enqueue(ele);
                     }
                     break;
            case 2 : if(front == -1)
                        printf("Queue underflow");
                     else
                        printf("deleted element is %d",  dequeue());
                     break;
            case 3 : if(front == -1)
                        printf("Queue empty");
                     else
                        display();
                     break;
            case 4 : exit(0);

       }
    }
}
