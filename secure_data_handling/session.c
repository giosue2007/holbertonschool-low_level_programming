void session_update_data(Session *session, const char *new_data) {
    char *temp;

    if (!session) return;

    /* Si on veut vider la donnée (Clear) */
    if (!new_data || strlen(new_data) == 0) {
        free(session->data);
        session->data = NULL;
        return;
    }

    /* Mise à jour sécurisée : on alloue AVANT de libérer l'ancien */
    temp = strdup(new_data);
    if (temp) {
        free(session->data); /* On libère l'ancien seulement si le nouveau est prêt */
        session->data = temp;
    }
    /* Si temp est NULL, on a échoué mais session->data est toujours là (pas de perte) */
}