/*
 * TITLE: PROGRAMMING II LABS
 * SUBTITLE: Practical 1
 * AUTHOR 1: ***************************** LOGIN 1: **********
 * AUTHOR 2: ***************************** LOGIN 2: **********
 * GROUP: 1.3
 * DATE: ** / ** / **
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
