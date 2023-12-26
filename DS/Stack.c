#include <stdio.h>
#include <stdlib.h>
int main(){
    // stack works on the principle of LIFO let's implement that now
    int top = -1;
    int stack[10]; // declaring stack with max values 10
    int size = 10;
    // insertion of any element in the stack
    
    // check for overflow
    if(top == size -1){
        printf("The stack is full, Overflow\n");
    }
    else{
        int temp;
        top++;
        printf("Enter the element to be inserted \n");
        scanf("%d", &temp);
        stack[top] = temp;
    }

    // POP operation

    // check for the underflow
    if(top == -1){
        printf("Stack is empty can't print the elements, underflow\n");
    }
    else{
        printf("the popped element is %d", stack[top]);
        top--;
    }

    // peek operation
    //check for the underflow

    if(top == -1){
        printf("undeflow cannot perform the operation \n");
    }else{
        printf("%d", stack[top]);
    }
}