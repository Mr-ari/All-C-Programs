#include<stdio.h>
#include<malloc.h>

typedef struct queneNode{
  int data;
  struct queneNode *next;
}queneNode;

typedef struct quene {
  queneNode *front;
  queneNode *rear;
}quene;
