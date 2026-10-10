/*
// 1. Print sum of two numbers.
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    int c = a+b;
    printf("sum of %d & %d=%d\n", a, b, c);
    return 0;
}

// 2. Print difference, multiplication, division of two numbers.
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    printf("sum of %d +%d=%d\n", a, b, a+b);
    printf("Difference of %d -%d=%d\n", a, b, a-b);
    printf("Multiplication of %d * %d =%d\n",a, b, a*b);
    printf("Division of %d /%d=%d\n", a, b, a/b );
    return 0;
}

// 3. print area & Perimeter of Rectangle.
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter height of rectangle:");
    scanf("%d", &a);
    printf("Enter width of rectangle:");
    scanf("%d", &b);
    printf("Area of rectangle= %dm²\n", a*b);
    printf("Perimeter of rectangle= %d meter\n", 2*(a+b));
    return 0;
}
 //4. Calculate the area & circumference of circle.
 #include <stdio.h>
int main(){
    float a;
    printf("Enter radius of circle:");
    scanf("%f", &a);
    printf("Area of circle = %f m²\n", 3.14*a*a);
    printf("Circumference of cirle = %f meter\n", 2*3.14*a);
    return 0;
}
//5. Calculate area & perimeter of square.
 #include <stdio.h>
int main(){
    int a;
    printf("Enter side of square:");
    scanf("%d", &a);
    printf("Area of square= %d m²\n",a*a);
    printf("Perimeter of square= %d meter\n", 4*a);
    return 0;
}



//6. calculate the average of three numbers.
#include <stdio.h>

int main() {
    float a, b, c, average;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    average = (a + b + c) / 3;

    printf("Average = %.2f", average);

    return 0;
}



//7. marked five subject & caclulate their percentage and total marks
#include <stdio.h>
int main(){
    int a, b, c, d, e;
    printf("Obtained marsks----\n");
    printf("physics:");
    scanf("%d", &a);
    printf("chemistry:");
    scanf("%d", &b);
    printf("Biology:");
    scanf("%d", &c);
    printf("Mathematics:");
    scanf("%d", &d);
    printf("English:");
    scanf("%d", &e);
    printf("Total numbers of marks:500\n");
    printf("Total obtained marks:%d\n", a+b+c+d+e);
    printf("Obtained percentage:%d\n", (a+b+c+d+e)/5);
    return 0;
}
//8. Convert the tempreture into celcius, kelvin& fahrenheit.
#include <stdio.h>
int main(){
    float a;
    printf("Tempreture:");
    scanf("%f", &a);
    printf("Tempreture in celcius:%f deg.celcius\n", a);
    printf("Tempreture in kelvin:%f K\n", a+273);
    printf("Tempreture in fahrenheit:%f F\n", 9/5*a+32);
    return 0;
}
//9. Print the number of square(²) & cube(³).
#include <stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    printf("square value: %d\n", a*a);
    printf("cube value: %d\n", a*a*a);
    return 0;
}
//10. Swapping two numbers using third variable.
#include <stdio.h>
int main(){
    int a, b;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    printf("Before Swapping....\n");
    printf("a=%d \n", a);
    printf("b=%d \n", b);
    int c=a ;
    printf("After swapping.....\n");
    a=b;
    printf("a=%d\n", a);
    printf("b=%d\n", c);
    return 0;
}
//11. Swapping two numbers  without using third variable.
#include <stdio.h>
int main(){
    int a, b;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    printf("Before Swapping....\n");
    printf("a=%d \n", a);
    printf("b=%d \n", b);
    int c=a +b ;
    printf("After swapping.....\n");
    printf("a=%d\n", c-a);
    printf("b=%d\n", c-b);
    return 0;
}
// 12. Input 3 digit of number & calculate the sum of digits.
#include <stdio.h>
int main(){
    int p;
    printf("Enter three digit number:");
    scanf("%d", &p);
    int a=p/100;
    int b=(p/10) %10;
    int c=p%10;
    printf("Sum of digits, %d+%d+%d=%d\n", a,b,c,a+b+c);
    return 0;
}
//13. Input three digit number & print their reverse.
#include <stdio.h>
int main(){
    int p;
    printf("Enter three digit number:");
    scanf("%d", &p);
    int a=p/100;
    int b=(p/10) %10;
    int c=p%10;
    printf("Revers mumber: %d%d%d\n", c,b,a);
    return 0;
}
//14. Input a number & count the digits of number .
#include <stdio.h>
int main(){
    int p, count=0;
    printf("Enter a number:");
    scanf("%d", &p);
    if (p == 0){ 
        count = 1;
    } else{
        if(p<0){
            p = -p;
        }
        while (p>0){
            p = p/10;
            count++;
        }
    }
    printf("total digit of number:%d\n", count);
    return 0;
}
//15. Input a number & find the first &last digit of number.
#include <stdio.h>

int main() {
    int n, first, last;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Find last digit
    last = n % 10;

    // Find first digit
    while (n >= 10) {
        n = n / 10;
    }
    first = n;

    printf("First digit = %d\n", first);
    printf("Last digit = %d\n", last);

    return 0;
}

//16. Input selling price & cost price of an item & find profit and loss.
#include <stdio.h>

int main() {
    float cp, sp, profit, loss;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        profit = sp - cp;
        printf("Profit = %.2f", profit);
    }
    else if (cp > sp) {
        loss = cp - sp;
        printf("Loss = %.2f", loss);
    }
    else {
        printf("No Profit, No Loss");
    }

    return 0;
}


//17. Input basic salary of employee & calculate gross salary after adding allowance.
#include <stdio.h>

int main() {
    float salary, allowance, gross;

    printf("Enter basic salary: ");
    scanf("%f", &salary);

    printf("Enter allowance: ");
    scanf("%f", &allowance);

    gross = salary + allowance;

    printf("Gross Salary = %.2f", gross);

    return 0;
}

//18. Input distance in km & convert into meter, cm, & milimeter.
#include <stdio.h>

int main() {
    float km, meter, cm, mm;

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    meter = km * 1000;
    cm = km * 100000;
    mm = km * 1000000;

    printf("Meter = %.2f\n", meter);
    printf("Centimeter = %.2f\n", cm);
    printf("Millimeter = %.2f", mm);

    return 0;
}

//19. Input number of days & convert into years, weeks, & remaining days.
#include <stdio.h>

int main() {
    int days, years, weeks, remaining;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    remaining = days % 365;

    weeks = remaining / 7;
    remaining = remaining % 7;

    printf("Years = %d\n", years);
    printf("Weeks = %d\n", weeks);
    printf("Remaining Days = %d", remaining);

    return 0;
}


//20. print your name & age.
#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Name = %s\n", name);
    printf("Age = %d", age);

    return 0;
}

Relational opertors--------------------------------
//21. Program to check whether two numbers are equal.
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    if (a == b){
        printf("Number are equal");
    }
    else{
        printf("Numbers are not equal");
    }

    return 0;
}
// 22.Program to find the greater of two numbers.
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    if (num1>num2){
        printf("%d is greater than %d", num1, num2);
    } else{
        printf("%d is greater than %d", num2, num1);
    }
    return 0;
}
//23.Program to find the smaller of two numbers.
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    if (num1<num2){
        printf("%d is smaller than %d", num1, num2);
    } else{
        printf("%d is smaller than %d", num2, num1);
    }
    return 0;
}
//24. Program to check whether a number is positive or negative.
#include <stdio.h>

int main() {
    int num1;
    printf("Enter first number:");
    scanf("%d", &num1);
    if (num1<0){
        printf("%d is negative number", num1);
    } else{
        printf("%d is positive number", num1);
    }
    return 0;
}
//25. Program to check whether a number is zero or non-zero.
#include <stdio.h>

int main() {
    int num1;
    printf("Enter a number:");
    scanf("%d", &num1);
    if (num1==0){
        printf("%d number is zero", num1);
    } else{
        printf("%d number is non-zero", num1);
    }
    return 0;
}
// 26. Program to find the greatest among three numbers.
#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    printf("Enter third number:");
    scanf("%d", &num3);
    if (num1>num2 && num1>num3){
        printf("%d is greater number\n", num1);
    } else if (num2>num1 && num2>num3){
        printf("%d is greater number\n", num2);
    } else{
        printf("%d is greater number\n", num3);
    }
    return 0;
}
//27. Program to find the smallest among three numbers.
#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    printf("Enter third number:");
    scanf("%d", &num3);
    if (num1<num2 && num1<num3){
        printf("%d is smallest number\n", num1);
    } else if (num2<num1 && num2<num3){
        printf("%d is smallest number\n", num2);
    } else{
        printf("%d is smallest number\n", num3);
    }
    return 0;
}
//28. Program to check whether a number is greater than 100.
#include <stdio.h>

int main() {
    int num1;
    printf("Enter a number:");
    scanf("%d", &num1);
    if (num1<100){
        printf("%d is smaller than 100", num1);
    } else{
        printf("%d is greater than 100", num1);
    }
    return 0;
}
//29. Program to check whether two numbers are different.
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    
    if (num1 == num2){
        printf("%d = %d same number\n", num1, num2);
    } else{
        printf("%d & %d are different number\n", num1, num2);
    }
    return 0;
}
//30. Program to check whether a student has passed based on marks.
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter marks:");
    scanf("%d", &num1);
    if (num1>=90 && num1<=100 ){
        printf(" Passed\n %d , A+ grade", num1);
    } else if(num1>=60 && num1<90){
        printf("Passed \n %d ,B+ grade", num1);
    } else if(num1<60 && num1>=33){
        printf("Passed \n %d ,c+ grade", num1);
    } else if(num1<33 && num1>=0){
        printf("fail \n ");
    } else{
        printf("Invalid number");
    }
        return 0;
}

//Logical operators......................
//31. Program to check whether a number is between 10 and 50.
#include <stdio.h>
int main(){
    int num1;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("%d\n", num1>=10 && num1<=50);
    return 0;
}

//32. Program to check whether a number is positive and even.

#include <stdio.h>
int main(){
    int num1;
    printf("Enter a number:");
    scanf("%d", &num1);
    printf("%d\n", num1>0 && num1%2==0);
    return 0;
}
//33.Program to check whether a person is eligible to vote based on age.
#include <stdio.h>
int main(){
    int num1;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("%d\n", num1>=18);
    return 0;
}
//34. Program to check whether a number is divisible by both 3 and 5.
#include <stdio.h>
int main(){
    int num1;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("%d\n", num1%3==0 && num1%5==0);
    return 0;
}

//35. Program to check whether a number is divisible by 2 or 7.

#include <stdio.h>
int main(){
    int num1;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("%d\n", num1%2==0 || num1%7==0);
    return 0;
}

//36. Program to check whether a character is a vowel using && and ||.
#include <stdio.h>
int main(){
    char console;
    printf("Enter a letter:");
    scanf("%c", &console);
    char vowel= 'a',e,i,o,u;
    printf("%c\n",console==vowel );
    return 0;
}
//37.Program to check whether three numbers are equal.
#include <stdio.h>
int main(){
    int a, b, c;
    
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    printf("Enter third number:");
    scanf("%d", &c);
    printf("Numbers are equal: %d", a==b && b==c);
    return 0;
}
//38. Program to check whether a number is outside the range 1–100.
#include <stdio.h>
int main(){
    int num1;
    printf("Enter a number:");
    scanf("%d", &num1);
    printf("number is out of range 1-100 : %d", num1<1 || num1>100);
    return 0;
}
// 39. Program to check whether a student passes all three subjects.
#include <stdio.h>
int main(){
    int physics, chemistry, maths;
    printf("Number of physics:");
    scanf("%d", &physics);
    printf("Number of chemistry:");
    scanf("%d", &chemistry);
    printf("uber of maths:");
    scanf("%d", &maths);
    printf("Passed: %d", physics>33 && chemistry>33 && maths>33);
    return 0;
}*/
// 40