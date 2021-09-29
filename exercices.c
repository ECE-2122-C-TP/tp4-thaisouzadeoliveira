#include <stdio.h>
#include "exercices.h"
#include "fonctions.h"


//EXERCICE 1

void exercice1()
{
    int nb1, nb2, max;

    printf("Saisissez deux nombres afin de les comparer");

    nb1= saisirEntier();
    nb2= saisirEntier();
    max= getMax(nb1, nb2);

    printf("Le plus grand nombre entre %d et %d est: %d\n", nb1, nb2, max);

}


//EXERCICE 2

void exercice2()
{
    int entier;
    entier= saisirEntier();
    printf("Vous avez saisi le %d\n", entier);
}


//EXERCICE 3

void exercice3()
{
    int largeur, longueur, aire;

    printf("Largeur du rectangle");
    largeur= saisirEntier();

    printf("Longueur du rectangle");
    longueur= saisirEntier();

    aire= calculAire(largeur, longueur);

    printf("L'aire du rectangle de largeur %d et de longueur %d vaut: %d\n", largeur, longueur, aire);

}

void exercice3bis()
{
    int largeur, longueur, perimetre;

    printf("Largeur du rectangle");
    largeur= saisirEntier();

    printf("Longueur du rectangle");
    longueur= saisirEntier();

    perimetre= calculPerimetre(largeur, longueur);

    printf("Le perimetre du rectangle de largeur %d et de longueur %d vaut: %d\n", largeur, longueur, perimetre);
}


//EXERCICE 4

#define Sup_Ou_Egale 10

void exercice4()
{
    int nb1, resultat;

    printf("Voir si un entier est multiple de 3 et/ou superieur ou égal à %d", Sup_Ou_Egale);
    nb1= saisirEntier();
    resultat= multiple(nb1, 3);

    (resultat==1)
    ? printf("%d est un multiple de %d\n", nb1, 3)
    : printf("%d n'est pas un mutiple de %d\n", nb1, 3);

    (nb1>=10)
    ? printf("%d est superieur ou égal à %d\n", nb1, Sup_Ou_Egale)
    : printf("%d n'est pas superieur ou égal à %d\n", nb1, Sup_Ou_Egale);

}


//EXERCICE 5

void exercice5()
{
    int note1, note2, note3;
    float moyenne;

    printf("Saisir 3 entier afin de calculer leur moyenne");

    note1= saisirEntier();
    note2= saisirEntier();
    note3= saisirEntier();

    moyenne= calculMoyenne(note1, note2, note3);

    if (moyenne==-1)
    {
        printf("Une des 3 notes saisies est négative. \n");
    }

    else
    {
        printf("La moyenne des 3 notes saisies vaut: %f\n", moyenne);
    }

}


//EXERCICE 6

void exercice6()
{
    int nombreClasses, totalEleves;

    printf("Nombre total de classes ouvertes:\n");
    nombreClasses= saisirEntier();

    totalEleves= nombreTotalEleves(nombreClasses);

    printf("Le nombre total d'élèves est de: %d\n", totalEleves);
}


//EXERCICE 7

void exercice7()
{
  int entier, resultat;

    printf("Tester si un entier est multiple de 2 et de 7");
    entier= saisirEntier();
    resultat= multipleDe2EtDe7(entier);

  while (resultat != 1)
  {
      printf("%d n'est pas un multiple de 2 et de 7 réessayez \n", entier);
      entier= saisirEntier();
      resultat= multipleDe2EtDe7(entier);
  }

      printf("%d est un multiple de 2 et de 7. \n", entier);

}


//EXERCICE 8


void exercice8()
{
    int nombreDePierres, etagesPossible;

    printf("Nombre de pierres disponibles \n");
    nombreDePierres= saisirEntier();

    etagesPossible= nombreEtages(nombreDePierres);

    printf("Avec %d pierres on peut réaliser %d étages", nombreDePierres, etagesPossible);

}