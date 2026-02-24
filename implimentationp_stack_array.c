#include <stdio.h>
#include <stdlib.h>
#define MAXsize 100
int stack[MAXsize];
int top=-1; 
int isempty()
{
    
        return (top==-1);
    
}

int isfull()
{ 
    return (top==MAXsize-1);
}
void push(int value)
{
    if(isfull())
    {
        printf("stack is full\n");
    }
    else
    {
        stack[++top]=value;
        printf("pushed element is %d\n",value);
    }
}
int pop()
{
    if(isempty())
    {
        printf("stack is empty\n");
        return -1;

    }
    else{
        int value=stack[top--];
        printf("popped element is %d\n",value);
        return value;
    }

}
int peek()
{
    if(isempty())
    {
        printf("stack is empty\n");
        return -1;
    }
    else
    {
        return stack[top];
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    printf("top element is %d\n",peek());
    pop();
    printf("top element is %d\n",peek());
    pop();
    pop();
    return 0;

}