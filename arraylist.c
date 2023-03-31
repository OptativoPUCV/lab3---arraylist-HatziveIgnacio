#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data;
    int capacity;
    int size;
} ArrayList;

ArrayList *createList(void) {
  ArrayList *lista = malloc(sizeof(ArrayList));

  if(lista==NULL)
  {
    return NULL;
  }
  
  lista->data = malloc(sizeof(void *)*2);

  if(lista->data == NULL)
  {
    return NULL;
  }
  lista->size = 0;
  lista->capacity = 2;
  return lista;
}

void append(ArrayList * l, void * data){

  if(l->capacity == l->size)
  {
  l->data =  realloc(data, (l->capacity*2) * sizeof(void*));
    l->capacity = l->capacity * 2;
    l->size++;
  }
  
  l->data[l->size] = data;
  l->size++;
}

void push(ArrayList * l, void * data, int i){

}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
 