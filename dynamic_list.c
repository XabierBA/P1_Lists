/*
 * TITLE: PROGRAMMING II LABS
 * SUBTITLE: Practical 1
 * AUTHOR 1: Xabier Barreiro Alberte LOGIN 1: xabier.barreiroa@udc.com
 * AUTHOR 2: Mateo Pérez Rodríguez   LOGIN 2: mateo.perez@udc.es
 * GROUP: 4.2
 * DATE: 10 / 03 / 2023
 */
#include "dynamic_list.h"
#include <string.h>
void createEmptyList (tList *L) {
    L = LNULL;
}

bool isEmptyList (tList L) {
    return L->next==LNULL;
}
tPosL first (tList L) {
    return 0;
}
tPosL last (tList L){
    return L->data;
}

tPosL next (tPosL P, tList L) {
    return L->next;

    tPosL previous (tPosL P, tList L){
        if (P==0){
            return LNULL;
        }
        else return (P-1);
    }

    bool insertItem (tItemL obj, tPosL P, tList *L){
        tPosL aux;
        if (L->ultPos==MAX-1){
            return false;
        }
        else{
            L-> ultPos++;
            if(P==LNULL){
                L->data[L->ultPos]=obj;
            }
            else{
                for(aux=L->ultPos; aux>P;aux--){
                    L->data[aux]=L->data[aux-1];
                }
                L->data[P]=obj;
            }
            return true;
        }
    }
    void deleteAtPosition (tPosL P, tList *L){
        tPosL i;
        L->ultPos--;
        for(i=P;i<=L->ultPos;i++)
            L->data[i]=L->data[i+1];
    }

    tItemL getItem (tPosL P, tList L){
        return L.data[P];
    }
    void updateItem (tItemL obj, tPosL P, tList *L){
        L->data[P]=obj;
    }
    tPosL findItem (tParticipantName N, tList L) {
        tPosL i;
        if (isEmptyList(L)) {
            return LNULL;
        } else {
            for (i = 0; i <= L.ultPos; i++) {
                if (strcmp(L.data[i].participantName, N) == 0) {
                    return i;
                }
            }
            return LNULL;
        }
    }
}