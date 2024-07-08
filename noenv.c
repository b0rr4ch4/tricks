#include <stdio.h>

void main(int argc, char* argv[])
{
	execve(*(argv + 1), (argv + 1), NULL);
}