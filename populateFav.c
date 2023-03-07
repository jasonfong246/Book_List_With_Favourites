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
#include <string.h>
#include "lab3.h"

void populateFav(int *favValue, int bookValue,char **bookTitles,char ***favBooks){
    int i,j,index;
    /*Ask user to input how many favourite books are listed*/
    printf("Of those %d books, how many do you plan to put on your favorites list?:",bookValue);
    scanf("%d",favValue);
    getchar(); 
    /*Builds the malloc according to how many inputs of fav books*/
    *favBooks = (char **)malloc(*favValue * sizeof(char *));
     printf("Enter the number next to each book title you want on your favorites list:\n");
    for(i=0;i<*favValue;i++){
        /*Stores each value of fav books into the memory location of favBooks*/
        *(*favBooks + i) = (char *)malloc((60 )*sizeof( char ));
        scanf("%d", &index);
        /*Copies the book value from bookTitles according to which number of fav books*/
        strcpy(*(*favBooks + i), *(bookTitles + (index -1 )));
    }

    printf("\nThe books on your favorites list are:\n");
    getchar();
    for(j=0;j<*favValue;j++){
        /*Prints out all the book values from the memory location*/
        printf("%d. %s\n",(j+1),*(*favBooks + j));
    }
}
