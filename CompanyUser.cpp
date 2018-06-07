// Created by Nicola on 05/06/2018.

#include "CompanyUser.h"

CompanyUser::CompanyUser() {
    _number_of_employee=0;
    _number_of_subsidiaries=0;
}
/*Setters*/
void CompanyUser::setTaxOffice(string adress)
{
    _tax_office_adress=adress;
}
void CompanyUser::setOperationalHeadquarters(string adress)
{
    _operational_headquarters_adress=adress;
}
void CompanyUser::setSection(string section)
{
    _section=section;
}
void CompanyUser::setIncrementEmployee()
{
    _number_of_employee++;
}
void CompanyUser::setIncrementSubsidiaries()
{
    _number_of_subsidiaries++;
}
/*Getters*/
string CompanyUser::getTaxOfficeAdress() const
{
    return _tax_office_adress;
}
string CompanyUser::getOperationaHeadquartersAdress() const
{
    return _operational_headquarters_adress;
}
string CompanyUser::getSection() const
{
    return _section;
}
int CompanyUser::getEmployee() const
{
    return _number_of_employee;
}
int CompanyUser::getSubsidiaries() const
{
    return _number_of_subsidiaries;
}

/*
string CompanyUser::printInfo() const   //Overloading funzione pure virtual della classe generale
{
    return getID()+",Azienda,{Indirizzo sede fiscale: "+getTaxOfficeAdress()
           +",Indirizzo sede operativa: "+getOperationaHeadquartersAdress()
           +",Data di fondazione: "+getBirth().str()
           +",Numero impiegati: "
           + getEmployee()
           + ",Numero consociate: "
           + getSubsidiaries();
}
*/