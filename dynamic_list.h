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

#include "types.h"
#define LNULL NULL



typedef struct tNodo * tPosL;
struct tNodo{
    tItemL data;
    tPosL next;
};
typedef tPosL tList;


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

