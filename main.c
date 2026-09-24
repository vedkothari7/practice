#include <stdio.h>
#define SIZE 5

void enqueue(int);
void dequeue();
void display();

int item[SIZE], front=-1, rear=-1;
int main(){
    dequeue();
    enqueue(4);
    enqueue(2);
    enqueue(1);
    enqueue(6);
    dequeue();
    display();
}

void enqueue(int value){
    if(rear == SIZE-1){
        printf("overflow\n");
    }
    else{
        if(front==-1)
    front=0;
    rear++;
    item[rear] = value;
    printf("value is inserted\n");
    }
}
void dequeue(){
    if(front==-1){
        printf("underflow\n");
    }
    else{
        printf("\ndeleted \n");
        front++;
        if(front>rear){
            front=rear-1;
        }
    }
}
void display(){
    if(rear==-1){
        printf("queue is empty\n");
    }
    else{
        printf("queue elements are:\t");
        int i;
        for(i=front; i<=rear; i++){
            printf("%d\t",item[i]);
        }
    }
    printf("\n");
}