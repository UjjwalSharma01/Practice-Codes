#include <stdio.h>
#include <stdlib.h>

int main() {
  // Linked list
  typedef struct node {
    int val;
    struct node *link;
  } node;

  node *newnode, *head, *temp;
  int choice = 0;

  head = NULL;

  while (choice != -1) {
    printf("To stop the loop press -1, otherwise press 0 \n");
    scanf("%d", &choice);

    if (choice == -1) {
      break;
    }

    newnode = (node *)malloc(sizeof(node));

    // entering the values in the linked list
    printf("Please enter the value in the node \n");
    scanf("%d", &newnode->val);
    newnode->link = NULL;

    // if condition to insert the node into the existing list
    if (head == NULL) {
      head = newnode;
    } else {
      temp = head;
      while (temp->link != NULL) {
        temp = temp->link;
      }
      temp->link = newnode;
    }
  }

  // printing the linked list
  temp = head;
  while (temp != NULL) {
    printf("%d ", temp->val);
    temp = temp->link;
  }

  return 0;
}
