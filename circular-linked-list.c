#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
//new node
struct node* createnode(int value) {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}
//inserting
void insert(int value) {
    struct node *newnode = createnode(value);
    //list is empty
    if (head == NULL) {
        head = newnode;
        newnode->next = head;
    }
    else {
        struct node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        newnode->next = head; 
        temp->next = newnode; 
// changing head
        head = newnode;       
    }
}
//display 
void display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct node *temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(back to head)");
}
// Delete
void delete() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    //for one node
    if (head->next == head) {
        free(head);
        head = NULL;
    }
    else {
        struct node *temp = head;
        struct node *last = head;
        //to Find last node
        while (last->next != head) {
            last = last->next;
        }
        head = head->next;
        last->next = head;
        free(temp);
    }
}
// Main function
int main() {
    insert(10);
    insert(20);
    insert(30);
    printf("List: ");
    display();
    delete();
    printf("After deletion: ");
    display();
    return 0;
}
