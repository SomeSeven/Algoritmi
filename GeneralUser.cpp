// Created by SomeSeven on 07/06/2018.


#include "GeneralUser.h"

GeneralUser::GeneralUser() {

}

string GeneralUser::getID() const {
    return _id;
}

Date GeneralUser::getBirth() const {
    return _birth;
}

void GeneralUser::setBirth(const string &str) {
    _birth.stringToDate(str);                               //il controllo della stringa viene fatto in Date ? O qui ?
}

void GeneralUser::setID(const string &str) {
    _id = str;
}

void GeneralUser::printInfo() {

}

string GeneralUser::printOnFile() {

}