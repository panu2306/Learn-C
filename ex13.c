#include<stdio.h>

int main(int argc, char* argv[]){

	int i;

	//for printing argv
	for(i=1; i<argc; i++){
		printf("Argument No. %d: %s\n", i, argv[i]);
	}

	//define array of strings
	char* states[] = { "Maharashtra", "Keralaghjhgjhgj", "Punjab", "mh" };
	
	//printing states
	int num_of_states = sizeof(states)/sizeof(states[0]);
	for(i=0; i<num_of_states; i++){
		printf("State No. %d: %s\n", i, states[i]);
	}

	return 0;


}
