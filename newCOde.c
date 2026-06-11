#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int add(int a, int b);


typedef struct person {
    char name[50];
    int age;
} person;


int main(void) {
   
   
    int *numbers = malloc(20 * sizeof(int));
   
    if (numbers == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }


    srand((unsigned)time(NULL));
    for (int i = 0; i < 20; i++) {
        numbers[i] = 100 + rand() % 101;
    }


    for (int i = 0; i < 20; i++) {
        printf("number[%d] = %d\n", i, numbers[i]);
    }


    person sue;
    strncpy(sue.name, "Sue", sizeof(sue.name));
    sue.name[sizeof(sue.name) - 1] = '\0';
    sue.age = 20;
    printf("Name: %s\n", sue.name);
    printf("Age: %d\n", sue.age);




    int sum = add(5, 10);
    printf("the sum of 5 and 10 is: %d\n", sum);


    free(numbers);
    return 0;
}


int add(int a, int b) {
    return a + b;
}


//comment numero 1
//I am Zalen "Commenter" Puff
//These are my comments
