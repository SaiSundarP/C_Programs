#ifndef COMPLEXITY_H
#define COMPLEXITY_H

#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <psapi.h>

// Start timer and memory
#define START_COMPLEXITY() \
    clock_t __start_time = clock(); \
    PROCESS_MEMORY_COUNTERS __pmc_start; \
    GetProcessMemoryInfo(GetCurrentProcess(), &__pmc_start, sizeof(__pmc_start)); \
    SIZE_T __start_mem = __pmc_start.WorkingSetSize;

// End timer and memory, print results
#define END_COMPLEXITY() \
    clock_t __end_time = clock(); \
    PROCESS_MEMORY_COUNTERS __pmc_end; \
    GetProcessMemoryInfo(GetCurrentProcess(), &__pmc_end, sizeof(__pmc_end)); \
    SIZE_T __end_mem = __pmc_end.WorkingSetSize; \
    double __time_spent = (double)(__end_time - __start_time) / CLOCKS_PER_SEC; \
    printf("\nExecution time: %f seconds\n", __time_spent); \
    printf("Memory used: %llu KB\n", (unsigned long long)(__end_mem - __start_mem)/1024); \
    FILE *f = fopen("complexity_log.csv", "a"); \
    if (f) { \
        fprintf(f, "%s,%f,%llu\n", __FILE__, __time_spent, (unsigned long long)(__end_mem - __start_mem)); \
        fclose(f); \
    }

#endif // COMPLEXITY_H
