#include "./include/banque.h"

void    ft_traitement(int *n, STR_GB *str_gb)
{
    int i;
    int tmp;
    i = 0;
    while (i < *n)
    {
        str_gb->gb.RS = "SARL";
        str_gb->gb.RC = 10;
        str_gb->gb.patente = 100;
        str_gb->gb.CA = 100000;
        str_gb->gb.nbr_agence_b = *n;
        // Completer le saisie 
        i++;
    }
    // printf("%d\n",str_gb->gb.RC);
    // printf("%d\n",str_gb->gb.patente);
}

void ft_modifier_list_agence(char *RS, int nbr_agence)
{
    STR_GB *str_gb;
    if (strcmp(str_gb->gb.RS,RS) == 0 && str_gb->gb.nbr_agence_b == nbr_agence)
    {
        //print
    }

}