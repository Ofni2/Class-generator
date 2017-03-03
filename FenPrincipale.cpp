#include "FenPrincipale.h"
#include "FenCodeGenere.h"

FenPrincipale::FenPrincipale()
{
	// Cr�ation des layouts et des widgets
	// �
	// Connexions des signaux et des slots
	connect(quitter, SIGNAL(clicked()), qApp, SLOT(quit()));
	connect(generer, SIGNAL(clicked()), this, SLOT(genererCode()));
}


void FenPrincipale::genererCode()
{
	// On v�rifie que le nom de la classe n'est pas vide, sinon on arr�te
		if (nom->text().isEmpty())
		{
			QMessageBox::critical(this, "Erreur", "Veuillez entrer au moins un nom de classe");
			return; // Arr�t de la m�thode
		}
	// Si tout va bien, on g�n�re le code
	QString code;
	// G�n�ration du code � l'aide des informations de la fen�tre
	// �
	// On cr�e puis affiche la fen�tre qui affichera le code g�n�r�, qu'on lui envoie en param�tre
		FenCodeGenere *fenetreCode = new FenCodeGenere(code, this);
	fenetreCode->exec();
}