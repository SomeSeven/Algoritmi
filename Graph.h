//
// Created by Domenico Galdiero on 07/06/18.
//

#ifndef ALGORITMI_GRAPH_H
#define ALGORITMI_GRAPH_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "Date.h"
#include "GroupUser.h"

using namespace std;

class Graph {
public:
    Graph() ;

    template <typename T>                         //T indica il tipo di uno dei 3 possibili utenti.
    void setUser(T);                               //Aggiunge al vector l'oggetto passato come parametro.

    void setRelation(string, string);                //Aggiunge la relazione fra 2 oggetti , vengono passati come parametri
    //gli identificativi univoci dei 2 oggetti interessati.
    GeneralUser* getUser(string) const;              //Restituisce l'oggetto relativo all'identificativo passato come parametro.

    int numberOfUsers(string) const;               //Restituisce il numero totale degli utenti del tipo specificato
    //come parametro("tutti","semplice","azienda","gruppo").
    int nUsersAfterDate(Date) const;               //Restituisce il numero di utenti nati dopo una certa data passata come parametro.
    void companyMoreEmployees(string) const;               //Stampa l'azienda con maggior numero di dipendenti diretti/totali e il numero
    //in questione. Diretti/totali viene specificato come parametro.
    void userMoreRelations(string) const;                //Stampa l'utente con il maggior numero di amici/conoscenze(spec. da parametro)
    //e il relativo numero.
    float averageAgeSimpleUsers() const;            //Restituisce l'età media degli utenti semplici.


    struct relationsStruct; //provvisorio. da definire altrove.

private:

    vector < GeneralUser* > _users_vector;          //Vector di puntatori della classe base, ai quali è possibile associare ognuno dei 3 tipi
    //di utenti , così da poter contenere ogni oggetto utente in un solo vector e gestire gli
    //utenti utilizzando i puntatori(polimorfismo).

    vector < vector <relationsStruct>> _relations; //Vector di vector per la gestione delle relazioni fra utenti,
    //al vector esterno è associato un iteratore per scorrere il vettore (ogni indice di casella corrisponde ad un utente)
    //mentre il vettore interno conterrà struct contenenti a loro volta la relazione e puntatore all'utente
    //verso cui si esprime la relazione.
    vector<char> _color;
};


#endif //ALGORITMI_GRAPH_H
