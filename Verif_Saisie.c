#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int verif_saisie(char reponse[25])
{
    int comptage=0;
    for (int i = 0; i < strlen(reponse); i++)
    {
        if (reponse[i]>='0'&& reponse[i] <='9')
        {
            comptage++;
        }
    }
        if (comptage == strlen(reponse))
        {
            return 1;
        }
        else
        {
            return 0;
        }
}
int verif_saisie(char reponse[25]);
int main()
//Déclaration des variables
{
    int tab[3]={12345,1234,123};
    char Rep[25];
    int i=0;
    int cpt=1;
        printf("Veiller saisir votre code secret: ");
        scanf("%s", Rep);
        while (verif_saisie(Rep)==0)
        {
            printf("Veillez saisir un nombre: ");
            scanf("%s", Rep);
        }
    while (tab[i] != atoi(Rep))
    {
        if (i<3)
        {
            i++;
        }
        else{
            cpt++;
            i = 0;
            if (cpt == 3)
            {
                printf("Fin des tentatives");
                return 0;
            }
            if (cpt == 2)
            {
                printf("il vous reste un essai: ");
            }
            else
            {
                printf("Veuillez reessayer: ");
            }
            scanf("%s", Rep);
            while (verif(Rep)==0)
            {
                printf("Veillez saisir un nombre: ");
                scanf("%s", Rep);
            }
            
        }  
    }
     printf("Le code secret saisi est correct");
    return 0;
}