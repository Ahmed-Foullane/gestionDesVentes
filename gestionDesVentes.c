#include <stdio.h>
#include <stdlib.h>
void calculerLeTotal(){
    
}
int main(){
    int nombreDeProduits = 0;
    float montantsDesVentes[nombreDeProduits];



    int choice = 10;
        printf("\ncombine de produits ont ete vendus aufourd'huit: ");
        scanf("%d",&nombreDeProduits);
        for (int i = 0; i < nombreDeProduits; i++)
        {
            printf("\nentrez le montant de la vente du produit %d: ",i+1);
            scanf("%f",&montantsDesVentes[i]);
        }
    while (choice != 6)
    {
        printf("1.calculer le total des ventes ");
        printf("\n2.trouver la vente de plus élevée et la plus bass ");
        printf("\n3.afficher les ventes supérieures a une moyenne ");
        printf("\n4.compter le nomber de ventes supérieures a 100 ");
        printf("\n5.compter le nombre de ventes inférieures a 100 ");
        printf("\n6.quitter");
        printf("\nenter your choice: ");
        scanf("%d",&choice);
        system("@cls||clear");
        if (choice == 1)
        {
     float totale = 0;
    for (int i = 0; i < nombreDeProduits; i++)
    {
        totale += montantsDesVentes[i];
    }
    printf("let total des ventes est: %f",totale);
        } 
    if (choice == 2)
    {
        float min = montantsDesVentes[0];
        float max = montantsDesVentes[0];
        for (int i = 0; i < nombreDeProduits; i++)
        {
            if (min > montantsDesVentes[i])
            {
                min = montantsDesVentes[i];
            }
            if (max < montantsDesVentes[i])
            {
                max = montantsDesVentes[i];
            }
            
        }
        printf("\nla ventes la plus eleves est %f",max);
        printf("la ventes la plus basse est %f\n",min);
        
    }
    if (choice == 3)
    {
        float moyenne = 0;
        int indexOfNsuperZ = 0;
        float lesNombreSuperieurAziro[indexOfNsuperZ];
        for (int i = 0; i < nombreDeProduits; i++)
        {
            moyenne += montantsDesVentes[i] ;
        }
        moyenne = moyenne/nombreDeProduits;
        for (int i = 0; i < nombreDeProduits; i++)
        {
            if (montantsDesVentes[i] > moyenne)
            {
                lesNombreSuperieurAziro[indexOfNsuperZ] = montantsDesVentes[i];
                indexOfNsuperZ++;
                
            }
            
        }
        for (int i = 0; i < indexOfNsuperZ; i++)
        {
            printf("\nle ventes superieues a une moyenne est: %d\n",lesNombreSuperieurAziro[i]);
        }
        
    }if (choice == 4)
    {
        for (int i = 0; i < montantsDesVentes; i++)
        {
            if (montantsDesVentes[i]<100)
            {
                printf("le nombre: %d",montantsDesVentes[i]);
            }
            
        }
        
    }
    
    }


    
    

    return 0;

}