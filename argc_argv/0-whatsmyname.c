#include <stdio.h>

/**
 * main - imprime le nom du programme
 * @argc: le nombre d'arguments (non utilisé ici)
 * @argv: un tableau de chaînes de caractères contenant les arguments
 *
 * Return: Toujours 0
 */
int main(int argc, char *argv[])
{
	    (void)argc; /*Pour eviter l'erreur "unused parameter" */
		printf("%s\n", argv[0]);
		return (0);
}
