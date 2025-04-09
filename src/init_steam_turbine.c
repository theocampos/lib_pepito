/*
** EPITECH PROJECT, 2024
** Pepito library
** File description:
** init_steam_turbine
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_steam_turbine() {
    srand(time(NULL));

    printf("Start of the steam turbine initialized\n");
    sleep(rand() * 10);
    printf("Steam turbine status: OK\n");
    sleep(rand() * 10);
    printf("Steam valves status: OPEN\n");
    sleep(rand() * 10);
    printf("Pressurized water tank: OK\n");
    sleep(rand() * 10);
    printf("Pressurized water valves: READY\n");
    sleep(rand() * 10);
    printf("Steam turbine rotor status: OK\n");
    sleep(rand() * 10);
    printf("Starting steam turbine rotor...\n");
    sleep(rand() * 10);
    printf("Steam turbine rotor status: OK\n");
    sleep(rand() * 10);
    printf("Steam turbine rotor current speed: 1000 r/min\n");
    sleep(rand() * 10);
    printf("Reactor initialization complete.\n");
    sleep(rand() * 10 + 20);
}

