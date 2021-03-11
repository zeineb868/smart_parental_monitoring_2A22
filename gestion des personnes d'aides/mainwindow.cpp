#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "personned_aides.h"
#include <QIntValidator>
#include <QMessageBox>
#include <QIntValidator>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->lineEdit_id_a->setValidator(new QIntValidator(0, 99999, this));
    ui->afficher_personne->setModel(P.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Ajouter_Employe_3_clicked()
{
    int identifiant=ui->lineEdit_id_a->text().toInt();
    QString nom=ui->lineEdit_nom_a->text();
    QString prenom=ui->lineEdit_pernom_a->text();
    QString adresse=ui->lineEdit_adresse_a->text();
     QString email=ui->lineEdit_email_a->text();
      QString metier=ui->lineEdit_metier_a->text();
      int prix_heure =ui->lineEdit_prix_heure_a->text().toInt();
      int num_tel =ui->lineEdit_num_tel_a->text().toInt();
Personned_aides P1(identifiant,nom,prenom,adresse,email,metier,num_tel,prix_heure);
bool test=P1.ajouter();
QMessageBox msgBox;
if(test)
   { msgBox.setText("Ajout avec succes.");
      ui->afficher_personne->setModel(P.afficher());
}
else
    msgBox.setText("Echec d'ajout");
msgBox.exec();
}

void MainWindow::on_supprimer_clicked()
{Personned_aides P1;
    P1.Setidentifiant(ui->lineEdit_id_a_3->text().toInt());
    bool test=P1.supprimer(P1.Getidentifiant());
    QMessageBox msgBox;
    if(test)
       { msgBox.setText("Suppresion avec succes.");
    ui->afficher_personne->setModel(P.afficher());}
    else
        msgBox.setText("Echec de suppresion");
    msgBox.exec();
}
