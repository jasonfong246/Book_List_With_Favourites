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

int main()
{
    int bookValue,favValue,ans;
    char **bookTitles='\0';
    char **favBooks='\0';
    int j=0;

    /*Stores each book input into the double pointer bookTitles*/
    populateTitles(&bookValue,&bookTitles);
    /*Stores each book input into the double pointer favBooks*/
    populateFav(&favValue,bookValue,bookTitles,&favBooks);
    /*Ask user if their files needs to be printed in a text file*/
    printf("Do you want to save them (1=yes, 2=no):");
    scanf("%d",&ans);
    if(ans==1){
        saveFile(favValue,bookValue,bookTitles,favBooks);
    }
    /*Frees the memory location for both malloc values*/
    free(bookTitles);
    free(favBooks);
    
    return 0;
}

