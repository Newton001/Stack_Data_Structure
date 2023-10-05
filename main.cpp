#include <iostream>
#include <stdlib.h>

using namespace std;
#define MAX  10

int sizes = 0;

// Creating a stack

struct stack {
    int items[MAX];
    int top;
};

typedef struct stack st;

void CreateEmptyStack(st *s)
{
    s->top = -1;
}

//Check if stack is empty

int isEmpty(st *s)
{
    if(s->top == -1)
        return 1;
    else
        return 0;
}

//Check if the stack is full

int isFull(st *s)
{
    if(s->top ==MAX-1)
        return 1;
    else
        return 0;
}


// Adding elements to a stack

void push(st *s, int newitem)
{
    if (isFull(s)){
        cout<<"\n STACK IS FULL";
    }
    else {
        s->top++;
        s->items[s->top] = newitem;
    }
    sizes++;
}

// Remove elements from a stack
void pop(st *s)
{
    if(isEmpty(s))
    {
        cout<< "\n STACK IS EMPTY";
    }
    else
    {
        cout<< "Item popped!" << s->items[s->top];
        s->top--;
    }
    sizes--;
    cout<< endl;
}

// Print the elements in a stack
void printStack(st *s)
{
    printf("Stack: ");
    for (int i = 0; i < sizes; i++)
    {
        cout<< s->items[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int ch;
    st *s = (st *)malloc(sizeof(st));
    CreateEmptyStack(s);

    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);

    printStack(s);

    pop(s);
    printStack(s);

}
