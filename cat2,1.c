//NAME:EXCEL BARAKA
//REG NO:CT192/G/21404/24



#include <stdio.h>
#include <string.h>

struct employee {
    char name[25];
    int id ;
    char department[20];
    float salary;
    char email[50];

};

int main(){
    struct employee employee1={
        "John Doe",
        12345,
        "Human Resource",
        55000.50,
        "johndoe@company.com"



    };
     printf("EMPLOYEE DETAILS:\n");
    printf("name: %s\n", employee1.name);
    printf("id: %d\n", employee1.id);
    printf("department: %s\n", employee1.department);
    printf("salary: %f\n", employee1.salary);
    printf("email: %s\n", employee1.email);

    return 0;
}
