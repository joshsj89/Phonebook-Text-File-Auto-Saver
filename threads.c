#include <pthread.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include "lab10.h"

#define NODE struct contact
#define SIZE 26

/*
*****************************************************************
*
*       functions implementation
*
*****************************************************************
*/

void *auto_saver(void *arg) //Auto Saver thread function
{
    char *name = (char *)arg;

    while (1)
    {
        sleep(5);
        save_binary(name);
    }

    return NULL;
}