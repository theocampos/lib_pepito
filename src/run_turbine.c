/*
** EPITECH PROJECT, 2022
** Pepito library
** File description:
** run_turbine
*/

#include "pepito.h"

void run_turbine() {
    char input[128];
    unsigned int i = 0;
    
    printf("Enter the number of rotation that the turbine will do (between 0 and 15): ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    int rotations = atoi(input);

    if (rotations != 0 && rotations > 15) {
        printf("Invalid number of rotations.\n");
        return;
    }

    while (i != (unsigned int)rotations) {
        if (i > 15) {
            printf("{ERR0R TURB1NE CAN'T ST0P}\n");
        }
        printf("Turbine is running... %d/%d\n", i + 1, rotations);
        sleep(rand() % 3 + 1);
        i++;
    }
    printf("Turbine has stopped.\n");
}