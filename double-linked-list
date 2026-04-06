#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head = NULL;
// Creating new node
struct node* createnode(int value) {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = NULL;
    return newnode;
}
//insert
void insert(int value) {
    struct node *newnode = createnode(value);
    if (head == NULL) {
        head = newnode;
    }
    else {
        newnode->next = head;
        head->prev = newnode; 
// updating head
        head = newnode;           }
}
//display
void display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
// Deleting node
void delete() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    //For one node
    if (head->next == NULL) {
        free(head);
        head = NULL;
    }
    else {
        struct node *temp = head;
        head = head->next;     
        head->prev = NULL; 
        // deleting last node
        free(temp);            
    }
}
// Main function
int main() {
    insert(40);
    insert(60);
    insert(50);
    printf("List: ");
    display();
    delete(50);
    printf("After deletion: ");
    display();
    return 0;
}
