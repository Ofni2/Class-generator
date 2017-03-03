#include "FenPrincipale.h"
#include "FenCodeGenere.h"

FenPrincipale::FenPrincipale()
{
	// Création des layouts et des widgets
	// …
	// Connexions des signaux et des slots
	connect(quitter, SIGNAL(clicked()), qApp, SLOT(quit()));
	connect(generer, SIGNAL(clicked()), this, SLOT(genererCode()));
}


void FenPrincipale::genererCode()
{
	// On vérifie que le nom de la classe n'est pas vide, sinon on arrête
		if (nom->text().isEmpty())
		{
			QMessageBox::critical(this, "Erreur", "Veuillez entrer au moins un nom de classe");
			return; // Arrêt de la méthode
		}
	// Si tout va bien, on génère le code
	QString code;
	// Génération du code à l'aide des informations de la fenêtre
	// …
	// On crée puis affiche la fenêtre qui affichera le code généré, qu'on lui envoie en paramètre
		FenCodeGenere *fenetreCode = new FenCodeGenere(code, this);
	fenetreCode->exec();
}