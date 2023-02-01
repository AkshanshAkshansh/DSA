// program to implement array

#include <stdio.h>

#include <stdlib.h>

#include <limits.h>

struct stack{

      int top;

      int capacity;

      int *array;

};

struct stack *create(int size){

      struct stack *s = (struct stack *)malloc(sizeof(struct stack));

      if(!s){

            printf("Not enough space\n");

            return NULL;

      }

      s->capacity = size;

      s->top = -1;

      s->array = malloc(s->capacity*sizeof(int));

      if(!s->array){

            printf("Not enough space\n");

            return NULL;

      }

      return s;

}

int isempty(struct stack *s){

      return (s->top==-1);

}

int isfull(struct stack *s){

      return (s->top==s->capacity-1);

}

int size(struct stack *s){

      return (s->top+1);

}

void push(struct stack *s,int data){

      if(isfull(s)){

            printf("stack overflow\n");

            return;

      }

      else

      s->array[++s->top]=data;

}

int pop(struct stack *s){

      if(isempty(s)){

            printf("Stack is underflow\n");

            return -1;

      }

      return s->array[s->top--];

}

int peek(struct stack *s){

      if(isempty(s)){

            printf("stack is Empty\n");

            return -1;

      }

      else

      return (s->array[s->top]);

}

int main()

{

      int capacity=15,i;

      struct stack *stk = create(capacity);

      for(i=0;i<capacity;i++){

            push(stk,i);

      }

      printf("Top element in stack %d \n",peek(stk));

      printf("Deleted element in stack %d \n",pop(stk));

      printf("Top element in stack %d \n",peek(stk));

      printf("No of Element in Stack %d \n",size(stk));



    return 0;

}

