/*
 * TITLE: PROGRAMMING II LABS
 * SUBTITLE: Practical 1
 * AUTHOR 1: Xabier Barreiro Alberte LOGIN 1: xabier.barreiroa@udc.com
 * AUTHOR 2: Mateo Pérez Rodríguez   LOGIN 2: mateo.perez@udc.es
 * GROUP: 4.2
 * DATE: 03 / 03 / 2023
 */

#ifndef DYNAMIC_LIST_H
#define DYNAMIC_LIST_H

#define P1_DYNAMIC_LIST_H

//P1_DYNAMIC_LIST_H
#define MAX 25
#include "types.h"
#include "static_list.h"
#include <stdlib.h>



struct tList* create(){
    struct tList*L= (struct tList*) malloc(sizeof (struct tList));
    tItemL data[MAX];
    L -> NULL = -1;
    struct tPosL *ultPos;
    return L;
}tList;

void createEmptyList(tList* L);

bool insertItem(tItemL obj, tPosL P, tList* L);

void updateItem(tItemL obj , tPosL P, tList* L);

void deleteAtPosition(tPosL P, tList* L);

tPosL findItem(tParticipantName N, tList L);

bool isEmptyList(tList L);

tItemL getItem(tPosL P, tList L);

tPosL first(tList L);

tPosL last(tList L);

tPosL previous(tPosL P, tList L);

tPosL next(tPosL P, tList L);

#endif


