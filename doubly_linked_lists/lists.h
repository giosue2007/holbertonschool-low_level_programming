typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t; /* <--- Vérifie bien que le ';' est ici */

/* Prototipo della tua funzione */
size_t print_dlistint(const dlistint_t *h);