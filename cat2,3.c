//NAME:EXCEL BARAKA
//REG NO:CT102/G/21404/24
#include <stdio.h>

int main() {
    double hoursWorked, hourlyWage, grossPay, tax, netPay;
    
    
    printf("Enter hours worked in a week: ");
    scanf("%lf", &hoursWorked);
    
    printf("Enter hourly wage: ");
    scanf("%lf", &hourlyWage);
    
    
    if (hoursWorked > 40) {
        grossPay = (40 * hourlyWage) + ((hoursWorked - 40) * hourlyWage * 1.5);
    } else {
        grossPay = hoursWorked * hourlyWage;
    }
    

    if (grossPay <= 600) {
        tax = grossPay * 0.15;
    } else {
        tax = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }
    
    
    netPay = grossPay - tax;
    
    
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", netPay);
    
    return 0;
}
