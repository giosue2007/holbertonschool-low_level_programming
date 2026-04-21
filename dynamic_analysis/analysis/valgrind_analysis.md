# Valgrind Analysis
- **Invalid Write** : Arrive quand on écrit en dehors d'un tableau.
- **Memory Leak** : Arrive quand on oublie de faire `free()` après un `malloc()`.

Valgrind permet de trouver ces erreurs avant qu'elles ne fassent crasher le programme.
