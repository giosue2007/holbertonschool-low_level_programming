# Crash Report: Segmentation Fault Analysis

## 1. Description du Crash
Le programme s'arrête brutalement avec un message **"Segmentation Fault (core dumped)"**.

## 2. Cause Racine (Root Cause)
- **Ligne de code** : `*ptr = 42;`
- **État de la mémoire** : Le pointeur `ptr` (stocké sur la **Stack**) contient l'adresse `0x0` (NULL). 
- **L'accès invalide** : Tenter d'écrire la valeur `42` à l'adresse `NULL` est une violation de protection mémoire. Le système d'exploitation interdit l'accès à l'adresse `0` pour protéger le noyau.



## 3. Critique de l'IA (AI Correction)
- **Hypothèse de l'IA** : L'IA a affirmé que le programme crash car la fonction `cause_crash` est de type `void`.
- **Ma Correction** : C'est faux. Le type `void` indique simplement que la fonction ne retourne pas de valeur. Le crash est purement causé par le **déréférencement d'un pointeur NULL**. Même si la fonction était un `int`, elle crasherait exactement au même endroit. L'IA a confondu la syntaxe de la fonction et la validité de l'accès mémoire.