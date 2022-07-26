#include<stdio.h>
#include<stdbool.h>
int main()
{ 
    int const coef_Maths =5, coef_Phy=6, coef_SVT=6;
    float Moy_Math,Moy_Phy,Moy_SVT,Moy_Ge;
    float Note_Math[2],Note_Phy[2],Note_SVT[2];
    float Som_Math=0, Som_Phy=0,  Som_SVT=0;
    int i=0;
   // bool teste0 = ((Note_Math[0]>0) && (Note_Math[0]<20));
    //bool teste1 = ((Note_Math[1]>0) && (Note_Math[1]<20));
    char Prenom[20], Nom[20];
    printf("Veuillez saisir votre Prenom :");
    scanf("%s",Prenom);
    printf("Veuillez saisir votre Nom :");
    scanf("%s",Nom);
       for(i=0;i<2;i++)
        {
            printf("donner Note_Math[%d]:\n",i);
            scanf("%f",& Note_Math[i]);  
            Som_Math=Som_Math + Note_Math[i];
        }
 

    Moy_Math=Som_Math*coef_Maths/2;
    printf("Voici votre moyenne en maths : %f\n",Moy_Math);

      for(i=0;i<2;i++)
    {
        printf("donner Note_Phy[%d]:\n",i);
        scanf("%f",& Note_Phy[i]);  
        Som_Phy=Som_Phy + Note_Phy[i];
    }
    Moy_Phy=Som_Phy*coef_Phy/2;
    printf("Voici votre moyenne en PC : %f\n",Moy_Phy);


      for(i=0;i<2;i++)
    {
        printf("donner Note_SVT[%d]:\n",i);
        scanf("%f",& Note_SVT[i]);  
        Som_SVT=Som_SVT + Note_SVT[i];
    }
    Moy_SVT=Som_SVT*coef_SVT/2;
    printf("Voici votre moyenne en SVT : %f\n",Moy_SVT);

    Moy_Ge=(Moy_Math+Moy_Phy+Moy_SVT)/(coef_Maths+coef_Phy+coef_SVT);

    if (Moy_Ge<=10)
    {
        printf("Mediocre");
    }
   if (Moy_Ge >10 && Moy_Ge<=14)
    {
        printf("Bien");
    }
   if (Moy_Ge >14)
   {
    printf("Tres Bien");
   } 

}
