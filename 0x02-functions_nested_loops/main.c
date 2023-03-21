#include <unistd.h>

char print_alphabet(char c)

{
	return(write(1, &c, 1));
}
