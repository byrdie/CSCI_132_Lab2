/* 
 * File:   lab_02_source.c
 * Author: Roy Smart
 * CSCI 112 Programming with C I
 *
 * Created on May 15, 2014, 10:47 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
/*function prototype declaration*/
int atm_balance(int, int);
void user_input();
int int_product(int, int);

int main(int argc, char** argv) {

    /*Lab 02 part 1*/
    int my_savings = 500; //cents
    int my_checking = 500; //cents
    atm_balance(my_savings, my_checking);
    
    /*lab 02 part 3*/
    user_input();
    
    return (EXIT_SUCCESS);
}

/*Takes the users balance in both accounts and finds the total balance*/
/*also converts cents back into dollars*/
int atm_balance(int savings_bal, int checking_bal){
    int total_bal = savings_bal + checking_bal;
    
    /*Lab 02 part 3*/
    printf("Balance in checking is %d cents\nBalance in savings is %d cents\nTotal balance is %d cents\n\n", checking_bal, savings_bal, total_bal);
    
    /*lab 02 extra credit*/
    printf("Your checking balance is %d dollars and %d cents\n", checking_bal/100, checking_bal%100);
    printf("Your savings balance is %d dollars and %d cents\n", savings_bal/100, savings_bal%100);
    printf("Your total balance is %d dollars and %d cents\n", total_bal/100, total_bal%100);
    return total_bal;
}

/*accepts two numbers from the user*/
void user_input(){
    int user_int1, user_int2;
    
    /*retrieve input*/
    puts("\nThis program finds the product of two integers\nPlease enter the first integer");
    int rc = scanf("%d", &user_int1);
    puts("please enter the second integer");
    rc = scanf("%d", &user_int2);
    
    /*print output*/
    int user_result = int_product(user_int1, user_int2);
    printf("The product of the two numbers is %d", user_result);
    return;
}

/*finds the product of two numbers*/
int int_product(int num1, int num2){
    return num1 * num2;
}
