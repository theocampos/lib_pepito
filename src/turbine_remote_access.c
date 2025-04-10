/*
** EPITECH PROJECT, 2024
** Pepito library
** File description:
** turbine_remote_access
*/

#include "pepito.h"

void turbine_remote_access()
{
    char temp_file[] = "Data/remote_accessXXXXXX";
    int fd = mkstemp(temp_file);

    if (fd == -1) {
        printf("Error: Unable to create temporary file.\n");
        return;
    }

    printf("Temporary file created: %s\n", temp_file);

    char credentials[] = "{ACCESS_GRANTED}";
    write(fd, credentials, strlen(credentials));
    close(fd);

    printf("Enabling remote access...\n");
    sleep(5);

    fd = open(temp_file, O_RDONLY);
    if (fd == -1) {
        printf("Error: Temporary file was tampered with or deleted.\n");
        return;
    }
    unlink(temp_file);
}
