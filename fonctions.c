#include <stdio.h>
#include "fonctions.h"


// - IN : nb1 et nb2, 2 nombres dont on veut le plus grand des 2
// - OUT : la valeur la plus grande entre nb1 et nb2 : max.

int getMax(int nb1, int nb2)
{
    int max;

    if (nb1>nb2)
    {
        max=nb1;
    }

    else if (nb2>nb1)
    {
        max=nb2;
    }

    else
    {
        max=nb1;
    }

    return max;
}



// - IN : vide
// - OUT : entier saisi

int saisirEntier()
{
    int entier;
    printf("Saisissez un entier: \n");
    scanf("%d", &entier);

    return entier;
}



// - IN : l=largeur et L=longueur
// - OUT : aire et perimètre du rectangle

int calculAire(int largeur, int longueur)
{
    int aireRectangle = largeur*longueur;

    return aireRectangle;
}

int calculPerimetre(int largeur, int longueur)
{
    int perimetreRectangle = 2*largeur+2*longueur;

    return perimetreRectangle;
}



// - IN : nb1, nb2 deux entiers
// - vrai(1) si nb1 est un multiple de nb2; faux(0) sinon

int multiple(int nb1, int nb2)
{
    if (nb1%nb2==0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}



// - IN : note1, note2, note3
// - moyenne si note1, note2, note3 comprises entre 0 et 20; -1 sinon

float calculMoyenne(int note1, int note2, int note3)
{
    float moyenne;

    if (note1<0 || note1>20)
    {
        return -1;
    }

    else if (note2<0 || note2>20)
    {
        return -1;
    }

    else if (note3<0 || note3>20)
    {
        return -1;
    }

    else
    {
        moyenne= (note1+note2+note3)/3;
        return moyenne;
    }
}



// - IN : nombre de classes ouvertes
// - OUT : nombre total d'eleves dans l'ecole

int nombreTotalEleves(int nombreClassesOuvertes)
{
    int i, nombreElevesClassei ,nombreTotalEleves;

    for (i=1; i<nombreClassesOuvertes+1; i++)
    {
        printf("Nombre d'élèves de la classe n° %d\n", i);
        nombreElevesClassei= saisirEntier();
        nombreTotalEleves=nombreTotalEleves+nombreElevesClassei;
    }

    return nombreTotalEleves;
}



// - IN : entier
// - OUT : 1 si l'entier est multiple de 2 et 7; 0 sinon

int multipleDe2EtDe7(int entier)
{
    if (entier%2==0 || entier%7==0)
    {
      return 1;
    }

    else
    {
        return 0;
    }
}



// - IN : nombre de pierres disponibles
// - OUT : nombres d'etages possibles à construire avec les pierres disponibles

int nombreEtages(int nombreDePierres)
{
    int pierresRestantes, pierresUtilisees, nombreEtages=1;

    pierresRestantes=nombreDePierres;

    while(pierresRestantes >= nombreEtages*nombreEtages)
    {

        pierresUtilisees = nombreEtages * nombreEtages;
        pierresRestantes = pierresRestantes - pierresUtilisees;
        nombreEtages++;

    }

    nombreEtages--;

    return nombreEtages;
}