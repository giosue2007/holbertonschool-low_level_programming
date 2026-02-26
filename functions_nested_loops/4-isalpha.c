#include "main.h"

int _isalpha(int c);
{
	
}#include "main.h"

/**
 * _isalpha - Vérifie si un caractère est alphabétique
 * @c: Le caractère à vérifier (sous forme d'entier)
 *
 * Return: 1 si c est une lettre (minuscule ou majuscule), 0 sinon
 */
int _isalpha(int c)
{
	/* Si c est entre 'a' et 'z' OU entre 'A' et 'Z' */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
