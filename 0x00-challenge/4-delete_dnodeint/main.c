#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - main code
 * Return: EXIT_SUCCESS.
 */
int main(void)
{
initlist_t *h;

h = NULL;
add_to_end(&h, 0), add_to_end(&h, 1);
add_to_end(&h, 2), add_to_end(&h, 3);
add_to_end(&h, 4), add_to_end(&h, 98);
add_to_end(&h, 402), add_to_end(&h, 1024);
initlist_print(h), printf("-----------------\n");
delete_at_index(&h, 5), initlist_print(h);
printf("-----------------\n");
delete_at_index(&h, 0);
initlist_print(h), printf("-----------------\n");
delete_at_index(&h, 0);
initlist_print(h), printf("-----------------\n");
delete_at_index(&h, 0);
initlist_print(h);
printf("-----------------\n");
delete_at_index(&h, 0);
initlist_print(h);
printf("-----------------\n"), delete_at_index(&h, 0);
initlist_print(h);
printf("-----------------\n");
delete_at_index(&h, 0);
initlist_print(h), printf("-----------------\n");
delete_at_index(&h, 0), printf("-----------------\n");
delete_at_index(&h, 0), printf("-----------------\n");
delete_at_index(&h, 0);
printf("-----------------\n"), delete_at_index(&h, 0);
printf("-----------------\n"), delete_at_index(&h, 0);
printf("-----------------\n"), delete_at_index(&h, 0);
printf("-----------------\n");
delete_at_index(&h, 0), printf("-----------------\n");
delete_at_index(&h, 0), printf("-----------------\n");
delete_at_index(&h, 0), printf("-----------------\n");
delete_at_index(&h, 0), initlist_print(h);
free_list(h);
return (0);
}

