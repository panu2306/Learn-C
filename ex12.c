#include<stdio.h>

int main(int argc, char* argv[]){
	
	int areas[] = { 10, 12, 13, 14, 20 };
	char name[] = "Pranav";
	char full_name[] = {
		'P', 'r', 'a', 'n', 'a', 'v',
		'V', '.',
		'B', 'h'
	};

	//printing
	printf("Size of int: %ld\n", sizeof(int));
	printf("Size of areas: %ld\n", sizeof(areas));
	printf("Number of ints in areas: %ld\n", sizeof(areas)/sizeof(int));

	printf("Size of char: %ld\n", sizeof(char));
	printf("Size of name: %ld\n", sizeof(name));
	printf("Number of chars in name: %ld\n", sizeof(name)/sizeof(char));

	printf("Size of full_name: %ld\n", sizeof(full_name));
	printf("Number of chars in full_name: %ld\n", sizeof(full_name)/sizeof(char));

	return 0;
}
