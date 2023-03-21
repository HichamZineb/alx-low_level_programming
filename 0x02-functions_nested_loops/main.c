#include <unistd.h>

int print_alphabet(char c)

{
	return(write(1, &c, 1));
}
