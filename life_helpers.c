#include <stdio.h>
#include <string.h>

void print_state(char *state, int size) {
	for (int i = 0; i < size; i++) {
		printf("%c", state[i]);
	}
	printf("\n");
}

void update_state(char *state, int size) {
	int i;
	char tmp_i = state[0];
	for (i = 1; i <= size - 2; i++) {
		if (state[i-1] == state[i+1]) {
			state[i-1] = tmp_i;
			tmp_i = '.';
		} else {
			state[i-1] = tmp_i;
			tmp_i = 'X';
		}
	}
	state[i-1] = tmp_i;
}