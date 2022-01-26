#include<stdio.h>

int main(int argc, char* argv[]){
	
	//declaration of age array
	int ages[] = {10, 20, 30, 40, 50};
	
	//declaration of names array
	char *names[] = {"Virat", "Sachin", "Mahi", "Yuvi", "Kapil"};

	// printing printing
	//first way: 
	int i = 0;
	int size = sizeof(ages)/sizeof(int);
	//printf("SIZE: %d\n", size);
	for(i=0; i<size; i++){
		printf("%s is %d years old.\n", names[i], ages[i]);
	}

	printf("---------\n");	
	
	//second way:
	int *curr_age = ages;
	char **curr_name = names;

	for(i=0; i<size; i++){
		printf("%s is %d years old.\n", *(curr_name + i), *(curr_age + i));	
	}
	
	printf("---------\n");	
	
	//third way:
	for(i=0; i<size; i++){
		printf("%s is %d years old.\n", curr_name[i], curr_age[i]);
	}
	
	printf("---------\n");	

	//fourth way:
	for(curr_name = names, curr_age = ages; (curr_age - ages) < size; curr_name++, curr_age++){
		printf("%s is %d years old.\n", *curr_name, *curr_age);
		//printf("age_count:%p\tname_count:%p\n", curr_name, curr_age);	
	}

	return 0;
}


