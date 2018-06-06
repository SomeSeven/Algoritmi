// Created by aless on 05/06/2018.
// Modified by SomeSeven on 07/06/2018

#ifndef GENERALUSER_H
#define GENERALUSER_H

#include <iostream>
#include "Date.h"

using namespace std;

class GeneralUser {                          //Classe astratta, base per le diverse tipologie di utente.
public:
    GeneralUser();

    virtual string printOnFile() = 0;        //Stampa tutte le info di un utente in ordine come formato per file,
                                            //essendo pure virtual necessita l'overloading in tutte le classi derivate
                                            //e non richiede una implementazione qui.
    virtual void printInfo() = 0;            //Stampa le informazioni dell'utente a schermo.

    void setID(string);
    void setBirth(string);                  //Setters.

    string getID() const;                   //Getters.
    Date getBirth() const;

private:
    string _id;                             //Identificativo univoco
    Date _birth;                            //Data di nascita dell'utente o di fondazione
//  NoticeBoard _showcase;                  //Oggetto bacheca per la gestione delle notizioe dell'utente

};

#endif //GENERALUSER_H