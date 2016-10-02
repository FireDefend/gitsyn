#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = 0;
	int b[10];
	for(int i = 0;i < 10;i++){
		b[i] = i+1;
	}
	for(int i = 0;i < 10;i++){
		a += b[i];
	}
	printf("%d\n", a);
	printf("ss");
	return 0;
}
