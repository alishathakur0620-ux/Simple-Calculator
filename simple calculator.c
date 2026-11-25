#include <stdio.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
int modulus(int a, int b);

int main()
{
    int choice;
    float num1, num2;
    int a, b;

    do
    {
        printf("\n===== SIMPLE CALCULATOR =====\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5)
        {
            printf("Enter first number: ");
            scanf("%f", &num1);

            printf("Enter second number: ");
            scanf("%f", &num2);
        }

        switch(choice)
        {
            case 1:
                printf("Result = %.2f", add(num1, num2));
                break;

            case 2:
                printf("Result = %.2f", subtract(num1, num2));
                break;

            case 3:
                printf("Result = %.2f", multiply(num1, num2));
                break;

            case 4:
                if(num2 != 0)
                    printf("Result = %.2f", divide(num1, num2));
                else
                    printf("Error! Division by zero is not allowed.");
                break;

            case 5:
                if(num2 != 0 && num1 == (int)num1 && num2 == (int)num2)
                {
                    a = (int)num1;
                    b = (int)num2;
                    printf("Result = %d", modulus(a, b));
                }
                else
                    printf("Modulus requires non-zero integer numbers.");
                break;

            case 6:
                printf("Thank you for using calculator!");
                break;

            default:
                printf("Invalid choice! Please try again.");
        }

    } while(choice != 6);

    return 0;
}

// Function definitions

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

int modulus(int a, int b)
{
    return a % b;
}