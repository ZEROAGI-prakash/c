#include <stdio.h>
#include <stdlib.h>

struct node *new_node;
struct node *start = NULL,*connect = NULL;

struct node
{
    int data;
    struct node *next;
    struct node *back;
};

void create_node(){
    new_node = (struct node*) malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",&new_node->data);
    new_node->next= NULL;
    new_node->back= NULL;

    if(start == NULL){
        start=new_node;
        connect=new_node;
    }else{
        new_node->back = connect;
        connect->next = new_node;
        connect = new_node; 
    }
};

void display(){
    struct node *dis=NULL;
    dis = start;
    while(dis!=NULL){
        printf("%d",dis->data);
        dis = dis->next;
    };
}

int main(){
    create_node();
    display();
}