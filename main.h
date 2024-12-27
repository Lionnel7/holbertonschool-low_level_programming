#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> /* Pour size_t */

/* Définition de la structure listint_t */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Prototypes des fonctions */
size_t listint_len(const listint_t *h);

#endif /* MAIN_H */
