#include <stdio.h>
#include <math.h>

int main(){
    int option;
    printf("Type 1 to calculate and 2 for conversiton of weight or temperature or 3 to calculate compund interest! \n");
    scanf(" %d",&option);

    if(option==1){
        float num1;
        printf("Enter the first number\n");
        scanf("%f",&num1);

        getchar();
        char operator;
        printf("Enter the operator ( + , - , * , / ): \n");
        scanf("%c",&operator);

        float num2;
        printf("Enter your second number\n");
        scanf("%f",&num2);

        
        float result;

        switch(operator){
            case'+':
                result=num1+num2;
                break;

            case'-':
                result=num1-num2;
                break;

            case'*':
                result=num1*num2;
                break;

            case'/':
                result=num1/num2;
                break;

        }
        printf("Result: %.2f\n",result);
    }

    else if (option==2){
        char another;
        getchar();
        printf("Now do you want to connvert weight or temperature? (Type W or T) \n");
        scanf("%c",&another);

        if(another=='W'){
            int choice = 0;
        float pounds = 0.0f;
        float kilograms = 0.0f;

        printf("Weight Conversion Calculator\n");
        printf("1. Kilograms to Pounds\n");
        printf("2. Pounds to Kilograms\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &choice);

        if(choice == 1){
            printf("Enter the weight in kilograms: ");
            scanf("%f", &kilograms);
            pounds = kilograms * 2.20462;
            printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
        }
        else if(choice == 2){
            printf("Enter the weight in pounds: ");
            scanf("%f", &pounds);
            kilograms = pounds / 2.20462;
            printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);
        }
        else{
            printf("Invalid choice! Please enter 1 or 2\n");
        }
            }
        else if(another=='T'){
        getchar();
        char choice = '\0';
        float fahrenheit = 0.0f;
        float celsius = 0.0f;

        printf("Temperature Conversion Program\n");
        printf("C. Celsius to Fahrenheit\n");
        printf("F. Fahrenheit to Celsius\n");
        printf("Is the temp in Celsius (C) or Fahrenheit (F)?: ");
        scanf("%c", &choice);

        if(choice == 'C'){
            printf("Enter the temperature in Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9 / 5) + 32; 
            printf("%.1f Celsius is equal to %.1f Fahrenheit\n", celsius, fahrenheit);
        }
        else if(choice == 'F'){
            printf("Enter the temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit - 32) * 5 / 9;
            printf("%.1f Fahrenheit is equal to %.1f Celsius\n", fahrenheit, celsius);
        }
        else{
            printf("Invalid choice! Please select C or F\n");
        }
    }

    }
    else if(option==3){
        double principal = 0.0;
        double rate = 0.0;
        int years = 0;
        int timesCompounded = 0;
        double total = 0.0;

        printf("Compound Interest Calculator\n");

        printf("Enter the principal (P): ");
        scanf("%lf", &principal);

        printf("Enter the interest rate % (r): ");
        scanf("%lf", &rate);
        rate = rate / 100;

        printf("Enter the # of years (t): ");
        scanf("%d", &years);

        printf("Enter # of times compounded per year (n): ");
        scanf("%d", &timesCompounded);

        total = principal * pow(1 + rate / timesCompounded, timesCompounded * years);
    
        printf("After %d years, the total will be $%.2lf", years, total);   
    }
    else{
        printf("You Entered Wrong input.");
    }
}