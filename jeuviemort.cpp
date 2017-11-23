#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

const int MAX_X=20;
const int MAX_Y=20;

struct grille_cell
{
    int tx,ty;
    int nb_viv;
    int nb_mort;
    int etat[MAX_X][MAX_Y];
};

void init_grille(struct grille_cell &jeu)
{
    int i,j;
    cout<<"Entrez les dimensions du jeu."<<endl<<"Nombre de lignes";
    cin>>jeu.tx;
    cout<<"Nombre de colonnes";
    cin>>jeu.ty;
    cout<<"Entrez le nombre de cellules vivantes.";
    cin>>jeu.nb_viv;
    jeu.nb_mort=(jeu.tx*jeu.ty)-jeu.nb_viv;
    for(i=0;i<=jeu.tx+1;i++)
    {
       for(j=0;j<=jeu.ty+1;j++)
       {
           jeu.etat[i][j]=0;
       }
    }
}


