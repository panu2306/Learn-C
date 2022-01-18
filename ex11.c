#include<stdio.h>

int main(int argc, char* argv[]){
	
	int numbers[4] = { 0 };
	char name[4] = { 'a' };

	//printing them out
	printf("Numbers: %d\t%d\t%d\t%d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("Name: %c%c%c%c\n", name[0], name[1], name[2], name[3]);
	printf("Name: %s\n", name);

	//setting up the numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	//setting up the names
	name[0] = 'P';
	name[1] = 'A';
	name[2] = 'N';
	name[3] = '\n';

	//printing them out
	printf("Numbers: %d\t%d\t%d\t%d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("Name: %c%c%c%c", name[0], name[1], name[2], name[3]);
	printf("Name: %s", name);

	//another way to declare char array
	char *another = "Panu";

	printf("Another Name:%s\n", another);
	printf("Another as a char array:%c%c%c%c\n", another[0], another[1], another[2], another[3]);

	return 0;
	

}
