#include "main.h"

number *create_list(int n)
{
    number *first = malloc(sizeof(*first));
    first->value = n;
    first->next = NULL;

    return first;
}

//////////////////////////////////

void add_to_end(number **list)
{
    int input2;

    number *temporaire = *list;

    while(temporaire->next != NULL)
    {
        temporaire = temporaire->next;
    }

    number *item = malloc(sizeof(*item));

    printf("Entrer un nombre à ajouter\n");
    scanf("%d", &input2);

    item->value = input2;
    item->next = NULL;

    temporaire->next = item;
}

//////////////////////////////////

void display_list(number **list)
{
    number *temporaire = *list;

    while(temporaire != NULL)
    {
        printf("%d\n", temporaire->value);
        temporaire = temporaire->next;
    }
}

/////////////////////////////

int main()
{
    int count = 3;
    int input;
    number  *list;

    printf("Rentrer un nombre\n");
    scanf("%d", &input);

    list = create_list(input);

    for(int j = 0; j < count; j++)
    {

    add_to_end(&list);

    display_list(&list);
    }

    number *current = list;

    while (current != NULL) 
    {
    number *next = current->next;
    free(current);
    current = next;
    }   

    return 0;
}

