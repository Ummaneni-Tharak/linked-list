#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
int main()
{
    struct node *head=NULL,*temp,*second,*third,*prev=NULL;
    //first node
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 10;
    //second node
    second = (struct node*)malloc(sizeof(struct node));
    second->data = 20;
    //third node
    third = (struct node*)malloc(sizeof(struct node));
    third->data = 30;
    //Linking  nodes
    head->next = second;
    second->next = third;
    third->next = NULL;
    //Delete node at 20
    temp = head;
    while(temp != NULL)
    {
        if(temp->data == 20)
        {
            prev->next = temp->next;
        free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    //Display
    temp = head;
    while(temp != NULL)
    {
        printf("data: %d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
    return 0;
}
