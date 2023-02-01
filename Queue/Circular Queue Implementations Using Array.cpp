 #include <stdio.h>

#include <stdlib.h>

struct queue{

      int front,rear;

      int capacity;

      int size;

      int *array;

};

struct queue *create(int capacity){

      struct queue *q = malloc(sizeof(struct queue));

      if(!q){

            printf("Not enough Space\n");

            return NULL;

      }

      else{

            q->capacity = capacity;

            q->front = q->rear = -1;

            q->size = 0;

            q->array = malloc(sizeof(int)*q->capacity);

            if(!q){

                  printf("Not enough Space!!\n");

                  return NULL;

            }

            return q;

      }

}

int size(struct queue *q){

      return q->size;

}

int frontelement(struct queue *q){

      return q->array[q->front];

}

int rearelement(struct queue *q){

      return q->array[q->rear];

}

int fullqueue(struct queue *q){

      return q->size==q->capacity;

}

int emptyqueue(struct queue *q){

      return q->size==0;

}

void enqueue(struct queue *q,int data){

      if(fullqueue(q)){

            printf("Queue Overflow\n");

            return;

      }

      q->rear = (q->rear+1)%(q->capacity);

      q->array[q->rear] = data;

      if(q->front==-1){

            q->front=q->rear;

            q->size+=1;

      }

}

int dequeue(struct queue *q){

      if(emptyqueue(q)){

            printf("Queue is empty\n");

            return -1;

      }

      int data;

      data = q->array[q->front];

      if(q->front == q->rear){

            q->front = q->rear = -1;

            q->size = 0;

      }else{

            q->front = (q->front+1)%(q->capacity);

            q->size-=1;

      }

      return data;

}

void delete(struct queue *q){

      if(q){

            if(q->array)

            free(q->array);

            free(q);

      }

}



int main()

{

      int capacity = 5,i;

      struct queue *qu = create(capacity);

      for(i=0;i<capacity;i++){

            enqueue(qu,i);

      }

      printf("FrontElement is %d \n",frontelement(qu));

      printf("rearElement is %d \n",rearelement(qu));

    return 0;

}

