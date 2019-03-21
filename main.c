#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*** Variables ***/
    int m, n, i, j, M1[10][10], M2[10][10], somme[10][10], produit[10][10];

    printf("Entrer les nombre de lignes et de colonnes: \n");
    scanf("%d%d", &m, &n);
    printf("Entrer les elements de la premiere matrice: \n");

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &M1[i][j]);
        }
    }

    printf("Entrer les elements de la deuxieme matrice: \n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &M2[i][j]);
        }
    }

    ///Calcul de la somme
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            somme[i][j] = M1[i][j] + M2[i][j];
        }
    }

    ///Calcul du produit
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            produit[i][j] = M1[i][j] * M2[i][j];
        }
    }

    ///Le systeme devient en vert
    system("color a");
    /**
    * Pour afficher la somme on aura besoin de deux boucles imbriquées encore une fois de "i" et "j"
    * pour parcourir les deux matrices et on affiche la troisieme matrice ou on a calculé la somme de M1 et M2
    **/
    printf("\n\n");
    printf("==============================\n");
    printf("La somme de deux matrices est : \n\n ");
    for(i = 0; i < m; i++){
        printf("(\t");
        for(j = 0; j < n; j++){
            printf("%d\t", somme[i][j]);
        }
        printf(")\n ");
    }

    /** Pareil pour l'affichage du produit */
    printf("\n\n");
    printf("================================\n");
    printf("Le produit de deux matrices est : \n\n ");
    for(i = 0; i < m; i++){
        printf("(\t");
        for(j = 0; j < n; j++){
            printf("%d\t", produit[i][j]);
        }
        printf(")\n ");
    }

    printf("\n\n\n");
    system("PAUSE");
    return 0;
}
