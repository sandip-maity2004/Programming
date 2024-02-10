//
// Created by 12san on 10-02-2024.
//
#include<stdio.h>
#include"ourheaderfile.h"

int main() {
    printf(".............................SOFTWARE OF PROGRAMS......................................\n");
    int a,b,x, num, n,m, r, rows,cols, choice,option,o,q;

#define MAX_ROWS 10
#define MAX_COLS 10
    int matrix[MAX_ROWS][MAX_COLS], transpose[MAX_COLS][MAX_ROWS];
    char c;
    float ru, sgpa, percentage,Sgpa[20];
    while (1) {
        printf("Choose the option:\n");
        printf("1.exit\t\t");
        printf("2.Armstrong number\t\t");
        printf("3.calculation of two number\t\t");
        printf("4.Sum of N numbers\n\n");
        printf("5.Area of a circle\t\t");
        printf("6.ASCII value\t\t");
        printf("7.Currency converter into Dollars,Euros,Yen,Rubel.\t\t");
        printf("8.Transpose of Matrix calculation\n\n");
        printf("9.SGPA to CGPA\t\t");
        printf("10.SGPA to Percentage and Reverse\t\t");
        printf("11.Pattern\t\t");
        printf("12.Factorial of a number\n\n");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("thank you for your time.");
            break;
        }
        switch (choice) {
            case 2:
                printf("Enter number to check Armstrong numbers:\n");
                scanf("%d", &x);
                if (armstrong(num) == 0) {
                    printf("%d is an armstrong number.\n", num);
                } else {
                    printf("%d is not an armstrong number.\n", num);
                }
                break;
            case 3:
                printf("Enter two number:\n");
                scanf("%d %d", &a, &b);
                printf("Addition is: %d\n", sum(a, b));
                printf("Substraction is: %d\n", sum(a, b));
                printf("Multiplication is: %d\n", sum(a, b));
                printf("Division is: %d\n", sum(a, b));
                printf("Modulus is: %d\n", sum(a, b));
                break;
            case 4:
                printf("Enter the number:");
                scanf("%d", &n);
                printf("The sum of the first %d natural numbers is %d\n", n, SumOfNaturalNumbers(n));
                break;
            case 5:
                printf("Enter the number:\n");
                scanf("%d", &r);
                int area = 3.14 * r * r;
                printf("Area of radius %d of a circle is:%d", r, area);
                break;
            case 6:
                printf(" Input the character to know its ASCII value:\n");
                scanf(" %c", &c);
                printf("American Standard code for Information Interchange is:%d\n", c);
                break;
            case 7:
                printf("Enter the amount in rupees:\n");
                scanf("%f", &ru);
                printf("Amount in DOLLARS:%.2f\n", ru * 0.012);
                printf("Amount in EUROS:%.2f\n", ru * 0.011);
                printf("Amount in YEN:%.2f\n", ru * 1.77);
                printf("Amount in RUBEL:%.2f\n", ru * 1.16);
                break;
            case 8:
                // Input the number of rows and columns
                printf("Enter the number of rows (max %d): ", MAX_ROWS);
                scanf("%d", &rows);
                printf("Enter the number of columns (max %d): ", MAX_COLS);
                scanf("%d", &cols);

                // Input elements of the matrix
                printf("Enter elements of the matrix:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("Enter element matrix[%d][%d]: ", i, j);
                        scanf("%d", &matrix[i][j]);
                    }
                }

                // Printing the original matrix
                printf("\nOriginal Matrix:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("%d\t", matrix[i][j]);
                    }
                    printf("\n");
                }

                // Finding the transpose of the matrix
                for (int i = 0; i < cols; i++) {
                    for (int j = 0; j < rows; j++) {
                        transpose[i][j] = matrix[j][i];
                    }
                }

                // Printing the transpose of the matrix
                printf("\nTranspose of Matrix:\n");
                for (int i = 0; i < cols; i++) {
                    for (int j = 0; j < rows; j++) {
                        printf("%d\t", transpose[i][j]);
                    }
                    printf("\n");
                }

                return 0;
                break;
            case 9:
                    printf("Enter the number of semesters: ");
                    scanf("%d", &n);

                    printf("Enter SGPA for each semester:\n");
                    for (int i = 0; i < n; i++) {
                        printf("Enter SGPA for Semester %d: ", i + 1);
                        scanf("%f", &Sgpa[i]);
                    }
                    cgpa = calculateCGPA(Sgpa,n);

                    printf("CGPA = %.2f\n", cgpa);
                break;
            case 10:
                printf("1.SGPA to Percentage\n");
                printf("2.Percentage to SGPA\n");
                printf("Select your option:\n");
                scanf("%d",&option);
                if(option==1) {
                    // Convert SGPA to percentage
                    printf("Enter SGPA: ");
                    scanf("%f", &sgpa);
                    percentage = SgpaToPercentage(sgpa);
                    printf("Percentage: %.2f%%\n", percentage);
                }else {
                    // Convert percentage to SGPA
                    printf("\nEnter Percentage: ");
                    scanf("%f", &percentage);
                    sgpa = PercentageToSgpa(percentage);
                    printf("SGPA: %.2f\n", sgpa);
                }
                break;
            case 11:
                printf("1.Pattern of numbers\n");
                printf("2.pattern of stars\n");
                printf("Select the option:");
                scanf("%d",&o);
                if(o==1){
                    printf("pattern of numbers\n");
                    printf("1.Fibonacci series\n");
                    printf("2.triangle\n");
                    printf("3.Floid's triangle\n");
                    printf("4.Arithmetic Sequence\n");
                    printf("5.Geometric sequence\n");
                    printf("6.square number sequence\n");
                    printf("7.Harmonic sequence\n");
                    printf("8.Cube number sequence\n");
                    printf("choose the option:\n");
                    scanf("%d",&q);
                    switch(q){
                        case 1:
                            printf("Enter the number of terms for Fibonacci Series: ");
                            scanf("%d", &n);
                            generateFibonacciSeries(n);
                            break;
                        case 2:
                                printf("enter the value of n:");
                                scanf("%d",&n);
                                generateTriangularSequence1(n);
                                generateTriangularSequence2(n);
                                break;
                        case 3:
                            printf("Floyd's Triangle");
                            printf("Enter the number of rows: ");
                            scanf("%d", &rows);
                            printFloydsTriangle(rows);
                            break;
                        case 4:
                            break;
                        default:
                                printf("Invalid choice\n");
                    }
                } else {
                    printf("pattern of stars\n");
                    printf("1.Triangle shape\n");
                    printf("2.Fibonacci series\n");
                    printf("Choose the option:\n");
                    scanf("%d",&o);
                    switch(o){
                        case 1:
                            printf("Triangle shape");
                            printf("enter the rows:");
                            scanf("%d",&rows);
                            generateTriangleShape(rows);
                    }
                }
                break;
            default:
                printf("Sorry unavailable.....");
                break;
        }
    }
}