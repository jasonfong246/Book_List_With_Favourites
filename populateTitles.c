/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE WORK 
TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS FILE MYSELF WITH 
NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR OR GRADERS OF THIS COURSE) 
AND I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC 
INTEGRITY POLICY.

Name: Jason Fong Shen Yik
*/
#include <stdio.h>
#include <stdlib.h>
#include "lab3.h"

void populateTitles(int *bookValue,char ***bookTitles)
{
    /*Ask user for how many inputs of book titles*/
    int i,j = 0;
    printf("How many library book titles do you plan to enter?:");
    scanf("%i",bookValue);
    getchar();
    /*Builds memory allocation according to how many books that needs to be stored*/
    *bookTitles = (char **)malloc(*bookValue * sizeof(char *));
    printf("Enter the %i book titles one to a line:\n",*bookValue);
    /*Inputs each book title*/
   for(i=0;i<*bookValue;i++){
        /*Enters book title with a maximum of 60 characters*/
        *(*bookTitles + i)= (char *)malloc((60 )*sizeof( char ));
        /*Scans each line of book title that includes spaces*/
        scanf("%[^\n]", *(*bookTitles + i));
        /*Clears the next line*/
        getchar();
    }
    printf("\nYou’ve entered:\n");
    for(j=0;j<*bookValue;j++){
        /*Prints out all the book title from the memory allocated*/
        printf("%d. %s\n",(j+1),*(*bookTitles + j));
    }
}


