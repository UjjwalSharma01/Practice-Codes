#include <stdio.h>
#include <stdlib.h>
int main(){
    struct node{
        int val;
        struct node* link;
    }
    struct node *newnode, *temp, *head;
    head = NULL;
    
    // code for insertion at the beginning
    newnode = (struct node*) malloc(sizeof(struct node));
    // after this enter the value which you want to enter in the beginning
    printf("Enter the value you want to insert \n");
    scanf("%d", &newnode -> val);
    link = NULL;


    // finally inserting the new node in the beginning;
    // first check for underflow if yes point the head directly to the new node
    if(head == NUll){
        head = newnode;
    }else{
        newnode->link = head;
        head = newnode ; // insertion at the beginning is completed
    }

    //  Insertion at the end code;

    // Check for the underflow if yes directly points head to the new node;

    if(head == NULL){
        printf("No element exist in the node, node is empty, element inserted successfully\n");
        head = newnode;
    }else{
        temp = head;
        while(temp->link != NULL){
            temp = temp->link;
        }
        temp->link = newnode; // insertion at the end completed
    }



    // Insertion at any given position

    printf("enter the position after which you want to insert the element\n");
    int pos;
    scanf("%d", &pos);
    int i = 0;
    temp = head ;
    while(i != pos-1){
        temp = temp->link;
        i++;
    }
    // once reached the position
    newnode->link = temp->link;
    temp->link =newnode; // entered at the desired position
    return 0;
}