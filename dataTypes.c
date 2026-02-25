#include <stdio.h>
#include <stdbool.h>

typedef enum{
    //Default number assigned to SUNDAY is 0, MONDAY is 1, and so on
    SUNDAY = 1, 
    MONDAY = 2,
    TUESDAY = 3,
    WEDNESDAY = 4,
    THURSDAY = 5,
    FRIDAY = 6,
    SATURDAY = 7
} Day;

typedef struct{
    char name[50];
    int age;
    float grade;
    bool isFullTime;
} Student;

typedef struct{
    char model[50];
    int year;
    int price;
} Car;

void addOne(int *num){
    (*num)++; //dereference the pointer to access the value and increment it by 1
}

int main()
{
    //enum = user defined data consists of a set of named integer constants
    Day today = WEDNESDAY;
    printf("Day %d\n", today); //prints 3, because WEDNESDAY is assigned the value 3


    //struct = user defined data that can hold multiple data types
    Student student1 = {
        "John Doe", //name
        20,         //age
        85.5,       //grade
        true        //isFullTime
    };

    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);

    //array of structs
    Car cars[] = {
        {"Toyota Camry", 2020, 24000},
        {"Honda Accord", 2019, 22000},
        {"Ford Mustang", 2021, 30000}
    };

    int number = sizeof(cars) / sizeof(cars[0]); //calculates the number of elements in the cars array
    for(int i = 0; i < number; i++){
        printf("Model: %s, Year: %d, Price: $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }

    //pointer = a variable that stores the memory address of another variable
    int x = 10;
    int *ptr = &x; //ptr now holds the address of x

    addOne(ptr); //pass the pointer to the function, which will modify the value of x
    printf("Value of x: %d\n", *ptr); 
    printf("Address of x: %p\n", ptr); //prints the memory address of x

    return 0;
}