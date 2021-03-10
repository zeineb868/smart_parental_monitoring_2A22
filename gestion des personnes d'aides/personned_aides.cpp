#include "personned_aides.h"
#include<QSqlQuery>
#include<QtDebug>
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
Personned_aides::Personned_aides(int id,QString nom,QString prenom,QString adresse,QString email,QString metier,int num_tel,int prix_heure)
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
bool Personned_aides::ajouter()
{
    QSqlQuery query;
    QString id_string=QString::number(identifiant);
     QString num_tel_string=QString::number(num_tel);
       QString prix_heure_string=QString::number(prix_heure);
     query.prepare("INSERT INTO personne (identifiant, nom, prenom, adresse, email, metier, num_tel, prix_heure) "
                       "VALUES (:identifiant, :nom, :prenom, :adresse, :email, :metier, :num_tel, :prix_heure)");
         query.bindValue(":identifiant", id_string);
         query.bindValue(":nom", nom);
         query.bindValue(":prenom", prenom);
         query.bindValue(":adresse", adresse);
         query.bindValue(":email", email);
         query.bindValue(":metier", metier);
         query.bindValue(":num_tel",num_tel_string);
         query.bindValue(":prix_heure", prix_heure_string);

    return  query.exec();
}
