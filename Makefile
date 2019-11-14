SHELL = /bin/bash
FLAGS = -Wall -std=gnu99 -g
.PHONY: test_life clean

all: life

life: life.o life_helpers.o
	gcc ${FLAGS} -o $@ $^

%.o: %.c 
	gcc ${FLAGS} -c $<

test_life: life
	@test_life_output=`./life ......X.......X.......X...... 10 | cmp sample-life-output`; \
	if [ -z "$$test_life_output" ]; then \
		echo "Compiled and life check passed :)"; \
	else \
	 	echo "Failed life check"; \
	fi

clean:
	-rm -f *.o life
