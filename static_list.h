/*
 * TITLE: PROGRAMMING II LABS
 * SUBTITLE: Practical 1
 * AUTHOR 1: Xabier Barreiro Alberte LOGIN 1: xabier.barreiroa@udc.com
 * AUTHOR 2: Mateo Pérez Rodríguez   LOGIN 2: mateo.perez@udc.es
 * GROUP: 4.2
 * DATE: 03 / 03 / 2023
 */

#ifndef STATIC_LIST_H
#define STATIC_LIST_H
#define LNULL -1
#define MAX 25
#include "types.h"
typedef int tPosL;
typedef struct {
    tItemL data[MAX];
    tPosL ultPos;
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
