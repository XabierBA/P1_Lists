/*
 * TITLE: PROGRAMMING II LABS
 * SUBTITLE: Practical 1
 * AUTHOR 1: Xabier Barreiro Alberte LOGIN 1: xabier.barreiroa@udc.com
 * AUTHOR 2: Mateo Pérez Rodríguez   LOGIN 2: mateo.perez@udc.es
 * GROUP: 4.2
 * DATE: 03 / 03 / 2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"

#define MAX_BUFFER 255

#ifdef DYNAMIC_LIST
#include "dynamic_list.h"
#endif
#ifdef STATIC_LIST
#include "static_list.h"
#endif

/*
 * GENERADOR
 * OBJETIVO -> Crear un participante y añadirlo a la lista
 * ENTRADA -> Lista, Nombre participante y datos extra
 * NO HAY PRE NI POST CONDICIÓN
 *
 */

void new(tList *L, char *p1, char *p2, char *commNum, char comm){
    printf("%s %c: Participant %s Location %s \n", commNum, comm, p1, p2);

    //Creo la información del participante y lo añado posteriormente a la lista
    tItemL Item;

    strcpy(Item.participantName, p1);



    if(findItem(Item.participantName, *L) == LNULL){

        Item.numVotes = 0;

        if(strcmp(p2, "eu") == 0){
            Item.EUParticipant = true;
        }

        else{
            Item.EUParticipant = false;
        }

        if(insertItem(Item, LNULL, L)){
            tPosL lpos = last(*L);
            tItemL Item2 = getItem(lpos, *L);

            //Comprobamos si el participante ya está añadido en la lista diferenciando si es de eu o no

            //Si el participante es de Europa
            if(Item2.EUParticipant = true){
                printf("New -> Participant: %s Location: EU \n", Item.participantName);
            }

            //Si el participante no es de Europa
            else{
                printf("New -> Participant: %s Location: NON-EU \n", Item.participantName);
            }
        }

        //Capturamos el error al insertar el participante en la lista
        else{
            printf("Error -> Not possible to add the new participant");
        }

    }

    //Capturamos el error si ya existen los datos dados en la lista
    else{
        printf("Error -> Not possible to add, the participant you want to introduce already exists ");
    }
}

/*
 * MODIFICADOR(VOTE)
 * VARIABLES -> Puntero, String, Natural, String, String
 * OBJETIVO -> Añadir los votos segun el participante y la lista correspondiente
 * ENTRADA -> Lista, Nombre paticipante y datos extra
 * NO HAY PRECONDICIÓN NI POSTCONDICIÓN
 *
 */

//HAZ AQUÍ EL MODIFICADOR(SI LEES ESTO BORRALO)

void vote(tList *List, char *p1, int *nVotos, char *commNum, char *comm){

}



/*
 * OBSERVADOR(STATS)
 * VARIABLES -> Puntero, String, Natural, String, String
 * OBJETIVO -> MOSTRA RLOS DATOS DE LA LISTA DE LOS PARTICIPANTES POR PANTALLA
 * ENTRADA -> Lista y datos extra
 * NO HAY PRECONDICIÓN NI POSTCONDICIÓN
 */


//AQUÍ VA EL OBSERVADOR(SI LEES ESTO BORRALO)

void stats(tList *List, char *p1, int nVotos, char *commNum, char *comm){

}





/*
 * MODIFICADOR(DISQUALIFY)
 * VARIABLES -> Puntero, String, Natural, String, String
 * OBJETIVO -> Descalificar al participante en caso de que se encuentre en la lista
 * ENTRADA -> Lista, Nombre paticipante y datos extra
 * NO HAY PRECONDICIÓN NI POSTCONDICIÓN
 *
 */

//AQUÍ VA EL MODIFICADOR(SI LEES ESTO BORRALO)

void disqualify(tList *List, char *p1, int nVotes, char *commNum, char comm){

}



void processcomm(char *commandNumber, char command, char *param1, char *param2, tList *List, int *nVotos) {

    switch (command) {
        case 'N':
            new(List,param1,param2,commandNumber,command);
            break;
        case 'V':
            break;
        case 'D':
            break;
        case 'S':
            break;
        default:
            break;
    }
}

void readTasks(char *filename) {
    FILE *f = NULL;
    char *commNum, *comm, *p1, *p2;
    const char delimiters[] = " \n\r";
    char buffer[MAX_BUFFER];

    f = fopen(filename, "r");

    if (f != NULL) {

        while (fgets(buffer, MAX_BUFFER, f)) {
            commNum = strtok(buffer, delimiters);
            comm = strtok(NULL, delimiters);
            p1 = strtok(NULL, delimiters);
            p2 = strtok(NULL, delimiters);

            processcomm(commNum, comm[0], p1, p2);
        }

        fclose(f);

    } else {
        printf("Cannot open file %s.\n", filename);
    }
}


int main(int nargs, char **args) {

    char *file_name = "new.txt";

    if (nargs > 1) {
        file_name = args[1];
    } else {
#ifdef INPUT_FILE
        file_name = INPUT_FILE;
#endif
    }

    readTasks(file_name);

    return 0;
}






