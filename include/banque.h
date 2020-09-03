# ifndef FT_BANK_H
#define FT_BANK_H

# include <stdbool.h>
# include <stdio.h>
# include <string.h>
# include <stdio.h>


typedef struct	s_agbank
{
	char    *RS;
    int     date_creation;
    int     CA;
    char    *adresse;
    int     nbr_clients;
}				t_agbank;

typedef struct	s_bank
{
	char    *RS;
    int     RC;
    int     patente;
    int     date_creation;
    int     CA;
    int     nbr_agence_b;
    t_agbank     *liste_agence_b;
}				t_bank;

typedef struct	s_client
{
	char    *full_name;
    char    *CIN;
    int     nbr_accounts;
}				t_client;

typedef struct	s_bank_account
{
	int     account_nbr;
    int     account_solde;
    int     nbr_operation;
    int     list_operation;
}				t_bank_account;

// typedef enum { virement, retrait } bool;

typedef struct	s_operation
{
	int     n_operation;
    int     montant_op;
    bool     type_op;
}				t_operation;

typedef struct      S_STR_GB
{
    t_bank          gb;
    t_agbank        agence;
    t_client        client;
    t_bank_account  bank_account;
    t_operation     operation;
    int             compteur;
}                   STR_GB;

// Saisir
void    ft_traitement(int *n ,STR_GB *str_gb);
void    ft_agence_bank(int n);
void    ft_client(int n);
void    ft_bank_account(int n);
void    ft__operation(int n);
//

// Modifier
void ft_modifier_list_agence(char *RS, int nbr_agence);
//

#endif