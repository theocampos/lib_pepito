/*
** EPITECH PROJECT, 2024
** Pepito library
** File description:
** init_steam_turbine
*/

#include "pepito.h"

void init_steam_turbine() {
    srand(time(NULL));

    printf("Start of the steam turbine initialized\n");
    sleep(1);
    printf("Steam turbine status: OK\n");
    sleep(2);
    printf("Steam valves status: OPEN\n");
    sleep(1);
    printf("Pressurized water tank: OK\n");
    sleep(1);
    printf("Pressurized water valves: READY\n");
    sleep(1);
    printf("Steam turbine rotor status: OK\n");
    sleep(2);
    printf("Starting steam turbine rotor...\n");
    sleep(1);
    printf("Steam turbine rotor status: OK\n");
    sleep(1);
    printf("Steam turbine rotor current speed: 1000 r/min\n");
    sleep(1);
    printf("Reactor initialization complete.\n");
    sleep(1);
}

