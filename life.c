#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_state(char *state, int size);
void update_state(char *state, int size);

int main(int argc, char **argv) {
    if (argc != 3) {
    	fprintf(stderr, "USAGE: life initial n\n");
    	return 1;
    }
    int size = strlen(argv[1]);
    int n = strtol(argv[2], NULL, 10);
    char str_cpy[size+1];
    strcpy(str_cpy, argv[1]);
    print_state(str_cpy, size);
    for (int i = 1; i < n; i++) {
    	update_state(str_cpy, size);
    	print_state(str_cpy, size);
    }
}