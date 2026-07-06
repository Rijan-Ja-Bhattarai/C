//
// Created by axelkyu on 7/5/26.
//
#include <stdio.h>

struct Monitor {
    int cpu_temp;
    float cpu_usage;
    int gpu_temp;
    float gpu_usage;
} System_Info;

int main(void) {
    struct Monitor sys_info;
    int temp;
    FILE *g_temp, *g_usage;
    FILE *c_temp = fopen("/sys/class/thermal/thermal_zone0/temp", "r");
    FILE *c_usage = fopen("proc/stat/ | head", "r");
    fscanf(c_temp, "%d", &temp);
    fscanf(c_usage, "%s", &usage);

    printf("%d degree celsius", temp / 1000);
    printf("%s usage", usage);
    fclose(c_temp);
    fclose(c_usage);
    return 0;
}
