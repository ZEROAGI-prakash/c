#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    int *next;
    int *back;
};

struct node create_node(){
    struct node *new_node;
    struct node *start = NULL,*connect = NULL;
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

    
    
}
int main(){

}