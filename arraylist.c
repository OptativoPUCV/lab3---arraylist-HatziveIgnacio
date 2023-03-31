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
    l->data =  realloc(l->data, (l->capacity*2) * sizeof(void*));
    l->capacity *= 2;
  }
  //
  l->data[l->size] = data;
  l->size++;
}

void push(ArrayList * l, void * data, int i)
{
  if( i > l->size) return;
  if(l->capacity == l->size)
  {
    l->data =  realloc(l->data, (l->capacity*2) * sizeof(void*));
    l->capacity *= 2;
  }
  //
  // mover a la derecha
  int aux_size = l->size;
  while ( aux_size > i)
    {
      l->data[aux_size] = l->data[aux_size-1];
      aux_size--;
    }
  
  l->data[i] = data;
  l->size++;
}

void* pop(ArrayList * l, int i)
{
  void *dato = l->data[i];
  if( i>0)
  {
    void *dato = l->data[l->size + i]
    for(int pos=i ; pos<l->size; pos++)
    {
      l->data[pos] = l->data[pos+1];
    }
    return dato;
  }
  // mover izq
  
  for(int pos=i ; pos<l->size; pos++)
    {
      l->data[pos] = l->data[pos+1];
    }
  l->size--;

  return dato;
}

void* get(ArrayList * l, int i)
{
  if( i>=l->size) return NULL;
  if( i<0)
  {
    return l->data[ l->size + i];
  }
  return l->data[i];
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
 