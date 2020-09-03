
#include "./include/banque.h"

void main() 
{
    
FILE *text;
        text = fopen("output.txt","w");
    STR_GB *str_gb;
    float result; 
    int choice, num, num1;
    do
    {
       printf("1 - Pour saisir un nombre de Banque\n"); 
    printf("2 - Pour modifier la liste des agences des banques\n"); 
    printf("3 - Pour afficher l'historique des operations bancaire\n");
    printf("8 - Exporter le groupement bancaire\n"); 
    printf("9 - Importer le groupement bancaire\n"); 
    printf("Enter your choice:\n"); 
    } while ((choice = scanf("%d",&num1)) < 0);
    
    
    
      
    switch (choice) { 
    case 1: { 
        printf("Enter nbr de banque:\n"); 
        num = scanf("%d", &num1); 
        //
        ft_traitement(&num ,str_gb);

        break; 
    } 
    case 2: { 
        //
        
        break; 
    } 
    case 3: { 
        // 

        break; 
    }
    case 8: {
        fprintf(text,"RC:%s\nRS:%d\nPatente:%d\n", str_gb->gb.RS,str_gb->gb.RC,str_gb->gb.patente); 
        break; 
    }
    case 9: { 
        // 

        break; 
    } 
    default: 
        printf("wrong Input\n"); 
    }
    fprintf(text,"RC:%s\nRS:%d\nPatente:%d\n", str_gb->gb.RS,str_gb->gb.RC,str_gb->gb.patente);
} 