/*
** EPITECH PROJECT, 2024
** Pepito library
** File description:
** read_turbine_config
*/

#include "pepito.h"

void read_turbine_config()
{
    char file_path[128];
    char full_path[256];
    char buffer[256];

    printf("Enter the configuration file name: ");
    fgets(file_path, sizeof(file_path), stdin);
    file_path[strcspn(file_path, "\n")] = '\0';

    if (strstr(file_path, "..") != NULL) {
        printf("Error: Invalid file name.\n");
        return;
    }

    snprintf(full_path, sizeof(full_path), "Data/%s", file_path);

    FILE *file = fopen(full_path, "r");
    if (!file) {
        printf("Error: Unable to open file: %s\n", full_path);
        return;
    }

    printf("Reading configuration file: %s\n", full_path);
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }

    fclose(file);
}
