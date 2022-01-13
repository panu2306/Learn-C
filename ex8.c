#include<stdio.h>

int main(int argc, char* argv[]){
	int i = 0;

	if(argc == 1){
		printf("Only one argument is provided\n");
	}
	else if(argc > 1 && argc < 4){
		printf("Here are the arguments you have provided:\n");

		for(i=0; i<argc; i++){
			printf("argument = %s\n", argv[i]);
		}
	}
	else{
		printf("You have too many arguments");
	}

	return 0;
}

