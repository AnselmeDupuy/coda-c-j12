#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

typedef struct s_number number;

struct s_number 
{
    int value;
    number *next;
};

void add_to_end(number **list);
number *create_list(int n);
void display_list(number **list);


#endif