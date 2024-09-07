#include <stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int value){
    if (top==MAX-1){
        printf("Stack overflow\n");
    }else{
        top++;
        stack[top]=value;
    }
}
int custom_pop(){
    if (top==-1){
        printf("Stack underflow\n");
        return -1;
    }else{
        int popped_value=stack[top];
        top--;
        return popped_value;
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    printf("Top element: %d\n", custom_pop());
    return 0;
}