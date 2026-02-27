#include "main.h"
/**
 * _isdigit - vèrifie si un caractère est un chiffre (0 à 9).
 * @c: Le caractère (sous forme d'entier) à vérifier
 * 
 * Return: 1 si c est in chiffre, 0 sinon.
 */
int _isdigit(int c)
{
		/*Vérifier si c est compris entre le code ASCII de '0' et '9' */
		if (c >= '0' && c <= '9')
		{
				  return (1);
		}
		else
		{
				 return (0);
		}
}
