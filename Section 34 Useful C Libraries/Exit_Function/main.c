#include <stdio.h>
#include <stdlib.h>


FILE *openfile( const char *file) {
    File *infile;

    if((infile = fopen(file, "r")) == NULL) {
        fprintf(stderr, "Can't open %s for reading.\n", file);
        exit(EXIT_FAILURE);
    }

    return infile;
}
