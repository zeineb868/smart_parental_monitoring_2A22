#include "personned_aides.h"

Personned_aides::Personned_aides()
{
    identifiant=0;
    nom="";
    prenom="";
    adresse="";
    email="";
    metier="";
    prix_heure=0;
    num_tel=0;
}
Personned_aides::Personned_aides(int id,QString nom,QString prenom,QString adresse,QString email,QString metier,float prix_heure,long num_tel)
{
    this->identifiant=id;
    this->nom=nom;
    this->prenom=prenom;
    this->adresse=adresse;
    this->email=email;
   this-> metier=metier;
    this->prix_heure=prix_heure;
    this->num_tel=num_tel;
}
