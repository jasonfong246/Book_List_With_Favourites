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
void saveFile(int favValue, int bookValue, char **bookTitles, char **favBooks){
    int i;
    FILE *out;
    char file[256];
    /*Ask user to input what file name to be written*/
    printf("What file name do you want to use?");
    scanf("%s",file);
    out = fopen(file,"w");
	fprintf(out, "Books I've Read:\n");
	for(i=0; i < bookValue; i++){
        /*Prints the output line by line from each bookTitles memory location*/
        fprintf(out, "%s\n", bookTitles[i]); 
    }
	fprintf(out, "\nMy Favorites are:\n");
    for(i=0; i < favValue ; i++){
        /*Prints the output line by line from each favBooks memory location*/
        fprintf(out, "%s\n", favBooks[i]); 
    }
	fclose(out);
	printf("Your booklist and favorites have been saved to the file %s.\n",file);
}
