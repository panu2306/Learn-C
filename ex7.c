#include<stdio.h>

int main(int argc, char* argv[]){
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'A';
	char first_name[] = "Pranav";
	char last_name[] = "Bhendawade";
	
	printf("You are %d miles away\n", distance);
	printf("You have %f power in you\n", power);
	printf("You have %lf super power in you\n", super_power);
	printf("You have %c as an initial\n", initial);
	printf("Your first name is %s\n", first_name);
	printf("Your last name is %s\n", last_name);
	printf("You full name is %s %s\n", first_name, last_name);

	return 0;

}
