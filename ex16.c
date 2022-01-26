#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>

struct Person{
	char* name;
	int age;
	int height;
	int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight){
	struct Person *who= malloc(sizeof(struct Person));

	assert(who != NULL);

	who -> name = strdup(name);
	who -> age = age;
	who -> height = height;
	who -> weight = weight;

	return who;
}

void Person_destroy(struct Person *who){
	
	assert(who != NULL);

	free(who -> name);
	free(who);
}

void Person_print(struct Person *who){
	printf("Details of Current Person:\nName: %s\nAge: %d\nHeight: %d\nWeight: %d\n", who->name, who->age, who->height, who->weight);
}

int main(int argc, char* argv[]){
	
	struct Person *p1 = Person_create("PQR", 24, 172, 80);
	Person_print(p1);
	Person_destroy(p1);
	struct Person *p2 = Person_create("ABC", 24, 121, 67);
	Person_print(p2);
	Person_destroy(p2);

	return 0;
}
