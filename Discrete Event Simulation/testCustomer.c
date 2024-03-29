

// FILE: testCustomer.c
// Purpose: makes new customers and prints their informations
// Written By: Eunsoo Jang
// Date: April 23, 2018

#include <stdio.h>
#include<stdlib.h>
#include "customer.h"


int main(void){
  Customer *cs[5];
  int t=23;
  for(int i =0; i <5; i++){
    cs[i] = newCustomer(t);
    t++;
  }

  for(int i=0; i<5; i++){
    cs[i] = newCustomer(t);
    t++;
  }

  for(int i=0; i<5; i++){
    printf("<%s: %d, %d>\n", cs[i]->id, cs[i]->arrivalTime, cs[i]->serviceTime);
    printf("Customer id: %s, Arr: %d, Ser: %d\n", getCustId(cs[i]), getArrivalTime(cs[i]), getServiceTime(cs[i]));
    printf("%s\n", custToString(cs[i]));
    printf("------------------\n");
  }
}
