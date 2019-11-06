

// FILE: testQueue.c
// Purpose: Makes queues are checks if the queues are empty
// Written By: Eunsoo Jang
// Date: April 23, 2018

#include "Queue.h"
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void){
  Queue *Q;
  Q = newQueue();
  srand(time(NULL));
  printf("Q Size = %d\n", sizeQ(Q));
  if(emptyQ(Q)){
    printf("The queue is empty.\n");
  }
  else{
    printf("The queue is empty.\n");
  }
  int *n;
  printf("Adding: ");
  for(int i =0; i<10;i++){
    n = malloc(sizeof(int));
    *n = rand()%100;
    printf("%d ", *n);
    insertQ(Q,n);
  }
  printf("\n");

  printf("Q Size = %d\n", sizeQ(Q));
  if(emptyQ(Q)){
    printf("The queue is empty.\n");
  }
  else{
    printf("The queue is not empty.\n");
  }
  for (int i = 0; i < 8; i++) {
    n = removeQ(Q);
    printf("Removed: %d\n", *n );
  }

  printf("Q Size = %d\n", sizeQ(Q));
  if(emptyQ(Q)){
    printf("The queue is empty.\n");
  }
  else{
    printf("The queue is not empty.\n");
  }
}
