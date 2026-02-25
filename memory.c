#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //Write a File
    FILE *file = fopen("output.txt", "w");

    char text[] = "Phi Yi Xian wrote this";

    if(file == NULL){
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "%s", text);
    printf("File written successfully!\n");
    fclose(file);

    //Read a File
    file = fopen("output.txt", "r");

    char buffer[1024] = {0};

    if(file == NULL){
        printf("Error opening file!\n");
        return 1;
    }

    while(fgets(buffer, sizeof(buffer), file) != NULL){
        printf("%s", buffer);
    }

    fclose(file);

    // malloc() = A function in C that dynamically allocates
    // a specified numbre of bytes in memory

    int number = 0;
    printf("Enter the number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char)); //dynamically allocate memory for the grades

    if(grades == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter grade %d: ", i + 1);
        scanf(" %c", &grades[i]);
    }

    for(int i = 0; i < number; i++){
        printf("Grade %d: %c\n", i + 1, grades[i]);
    }

    free(grades); //return "rented" space back to OS
    grades = NULL;

    //calloc() = Contiguous allocation
    // Allocates memory dynamically and set all allocated bytes to 0
    // malloc() is faster but calloc() leads to less bugs

    int num = 0;
    printf("Enter the number of players: ");
    scanf("%d", &num);

    int *scores = calloc(num, sizeof(int)); //dynamically allocate memory for the scores

    if(scores == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i = 0; i < num; i++){
        printf("%d ", scores[i]);
    }

    free(scores);
    scores = NULL;

    //realloc() = Reallocation
    // resize previously allocated memory
    // realloc(ptr, bytes)
    int number2 = 0;
    printf("Enter the number of prices: ");
    scanf("%d", &number2);
    float *prices = malloc(number2 * sizeof(float)); //dynamically allocate memory for the prices

    if(prices == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i = 0; i < number2; i++){
        printf("Enter price %d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    int newNumber = 0;
    printf("Enter the new number of prices: ");
    scanf("%d", &newNumber);

    float *temp = realloc(prices, newNumber * sizeof(float)); //resize the previously allocated memory

    if(temp == NULL){
        printf("Memory reallocation failed!\n");
        free(prices); //free the previously allocated memory
        return 1;
    } else {
        prices = temp; //point to the newly allocated memory
        temp = NULL;
        for(int i = number; i < newNumber; i++){
            printf("Enter price %d: ", i + 1);
            scanf("%f", &prices[i]);
        }
        for(int i = 0; i < newNumber; i++){
            printf("Price %d: %.2f\n", i + 1, prices[i]);
        }
    }

    
    free(prices); //free the previously allocated memory
    prices = NULL;

    return 0;
}