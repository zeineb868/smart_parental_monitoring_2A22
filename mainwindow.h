#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"fournisseur.h"
#include "produit.h"
#include "commande.h"
#include <QTextStream>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void update_fournisseur();
    void update_produit();
    void update_commande();



private slots:
    void on_ajout_fournisseur_clicked();
    void on_afficher_fournisseur_activated(const QModelIndex &index);
    void on_modifier_clicked();
    void on_supprimer_clicked();
    void on_trier_clicked();
    void on_trier_marque_clicked();
    void on_afficher_fournisseur_clicked(const QModelIndex &index);
    void on_lineEdit_rechercherf_textChanged(const QString &arg1);

    void on_ajout_produit_clicked();
    void on_supprimerp_clicked();
    void on_afficher_produit_activated(const QModelIndex &index);
    void on_modifierp_clicked();
    void on_afficher_produit_clicked(const QModelIndex &index);

    void on_lineEdit_rechercherp_textChanged(const QString &arg1);
    void on_trierp_clicked();
    void on_trierp_nom_clicked();


    void on_ajout_commande_clicked();
    void on_trier_commande_clicked();
    void on_trier_adresseC_clicked();
    void on_modif_commande_clicked();
    void on_supp_commande_clicked();
    void on_afficher_commande_activated(const QModelIndex &index);
    void on_impdos_2_clicked();
    int creerPDF();



    void on_afficher_commande_clicked(const QModelIndex &index);
    void on_excel_clicked();

    void on_pdf_clicked();

private:
    Ui::MainWindow *ui;

    fournisseur tmpfournisseur;
    produit tmpproduit;
    commande tmpcommande;
    int id_fournisseur=0;
    int id_prod=0;
    int id_com=0;
public slots:
    int creerPdf();

};

#endif // MAINWINDOW_H
