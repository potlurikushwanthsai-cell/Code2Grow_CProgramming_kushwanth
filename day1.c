#include <stdio.h>

int main() {
    float basic_salary, hra_percent, da_percent, tax_percent;
    float hra, da, tax, gross_salary, is_above_50000, net_monthly_salary;

    // Input section
    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    printf("Enter HRA%%: ");
    scanf("%f", &hra_percent);

    printf("Enter DA%%: ");
    scanf("%f", &da_percent);

    printf("Enter TAX%%: ");
    scanf("%f", &tax_percent);
    hra = basic_salary * (hra_percent / 100);
    da  = basic_salary * (da_percent / 100);
    tax = basic_salary * (tax_percent / 100);

    gross_salary = basic_salary + hra + da - tax;
    is_above_50000 = (gross_salary > 50000);
    net_monthly_salary = gross_salary / 12;

    // Output section
    printf("HRA = %.2f\n", hra);
    printf("DA = %.2f\n", da);
    printf("TAX = %.2f\n", tax);
    printf("Gross Salary = %.2f\n", gross_salary);
    printf("Is Gross Salary above 50000? %.0f\n", is_above_50000);
    printf("Net Monthly Salary = %.2f\n", net_monthly_salary);

    return 0;
}
