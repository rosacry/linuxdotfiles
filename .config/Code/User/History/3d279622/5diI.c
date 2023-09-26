#include <stdio.h>
#include <stdlib.h>

#include "debug.h"
#include "global.h"

int main(int argc, char **argv) {
    if (validargs(argc, argv)) {
        //??
    } else if (validargs(argc, argv) == -1) {
        printf("-1\n");
    } else if (global_options == 0) {  // no flags were passed
        printf("no flags were passed\n");
        // implement later
    } else if (global_options == HELP_OPTION) {  // -h flag passed
        printf("-h flag was passed\n");
        USAGE(*argv, EXIT_SUCCESS);
    } else if (global_options == NEWICK_OPTION) {  // -n flag passed
        if (outlier_name != NULL) {
            printf("-n and -o flag was passed\n");
        } else {
            printf("-n flag was passed\n");
        }
        USAGE(*argv, EXIT_SUCCESS);
        // implement later
    } else if (global_options == MATRIX_OPTION) {  // -m flag passed
        printf("-m flag was passed\n");
        USAGE(*argv, EXIT_SUCCESS);
        // implement later
    }
    return EXIT_FAILURE;  // something went wrong question mark
}

/*
 * Just a reminder: All non-main functions should
 * be in another file not named main.c
 */