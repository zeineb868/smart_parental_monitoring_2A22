#ifndef PERSONNED_AIDES_H
#define PERSONNED_AIDES_H

#include<QString>
class Personned_aides
{
public:
    Personned_aides();
     Personned_aides(int,QString,QString,QString,QString,QString,float,long);
         int Getidentifiant() { return identifiant; }
            void Setidentifiant(int val) { identifiant = val; }
            QString Getnom() { return nom; }
            void Setnom(QString val) { nom = val; }
            QString Getprenom() { return prenom; }
            void Setprenom(QString val) { prenom = val; }
            QString Getadresse() { return adresse; }
            void Setadresse(QString val) { adresse = val; }
            QString Getemail() { return email; }
            void Setemail(QString val) { email = val; }
            QString Getmetier() { return metier; }
            void Setmetier(QString val) { metier = val; }
            float Getprix_heure() { return prix_heure; }
            void Setprix_heure(float val) { prix_heure = val; }
            long Getnum_tel() { return num_tel; }
            void Setnum_tel(long val) { num_tel = val; }
private:
    int identifiant;
            QString nom;
            QString  prenom;
            QString  adresse;
            QString  email;
            QString  metier;
            float prix_heure;
            long num_tel;
};

#endif // PERSONNED_AIDES_H
