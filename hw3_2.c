#include <stdio.h>
#include <stdlib.h>
int f(int n)
{
	int *j;
	*j++;
	
}

int main(int argc, char *argv[]) {
	int &j=105;
	
	printf("%d",f(2));
	
	
	return 0;
}
