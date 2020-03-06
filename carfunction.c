#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "carfunction.h"


void Print(struct Car C){

        printf("                  Model name:    %s/n",C.Model_name);
        printf("                  Color:         %s/n",C.Color);
        printf("                  Engine Size:   %s/n",C.Engine_size);
        printf("                  Year:          %s/n",C.Year);
        printf("                  Price:         %s/n",C.Price);

}

void ADD(struct Car C){

      FILE *CL; //Add

        CL = fopen("Cardata.txt","a");

        if (CL == NULL){exit(1);}  // Program exits if the file pointer returns NULL.

        fprintf(CL,"%s ",C.Model_name);
        fprintf(CL,"%s ",C.Color);
        fprintf(CL,"%s ",C.Engine_size);
        fprintf(CL,"%s ",C.Year);
        fprintf(CL,"%s\n",C.Price);

        fclose(CL);
}


void Create (){

        struct Car C;

        printf("            Please,enter the car model and features          \n");
        printf("                     Enter Model name:    ");
        scanf("%s",C.Model_name);
        printf("                     Enter Color:        ");
        scanf("%s",C.Color);
        printf("                     Enter Engine size:   ");
        scanf("%s",&C.Engine_size);
        printf("                     Enter Year:          ");
        scanf("%s",&C.Year);
        printf("                     Enter Price:         ");
        scanf("%s",&C.Price);

        ADD(C);
        printf("            New data was created!         ");

}

void Search(char *str) {
	FILE *fp;

	int find_result = 0;
	char temp[512];

	if((fp = fopen("Cardata.txt", "r")) == NULL) {printf("Problem occured \n");exit(1);}

	while(fgets(temp, 512, fp) != NULL) {
		if((strstr(temp, str)) != NULL) {

                printf("%s ",temp);
                find_result++;
			break;
		}
	}
        fclose(fp);

        if(find_result==0) printf("\nSorry, couldn't find any data.\n");

}


void Delete (char *str) {
    FILE *fp,*fp_copy;

	int find_result = 0;
	char temp[512];
    struct Car C;

	if((fp = fopen("Cardata.txt", "r")) == NULL) {exit(1);}
    fp_copy=fopen("copy.txt","w");

	while(fgets(temp, 512, fp) != NULL) {
		if((strstr(temp, str)) == NULL) {

			fputs(temp,fp_copy);
			find_result++;
		}
	}
	fclose(fp);
	fclose(fp_copy);
	remove("Cardata.txt");
	rename("copy.txt","Cardata.txt");

}

void List(){

    FILE *fp;
    char temp[512];

	if((fp = fopen("Cardata.txt", "r")) == NULL) {
		exit(1);}
    while(fgets(temp, 512, fp) != NULL) {
             printf("%s\n",temp);
	}

    fclose(fp);
}

void countlines()
{
  // count the number of lines in the file
    FILE *fp;
    char temp[512];
int lines =0;
	if((fp = fopen("Cardata.txt", "r")) == NULL) {
		exit(1);}
    while(fgets(temp, 512, fp) != NULL) {
             lines++;
	}

    fclose(fp);
	printf("   Number of lines: %d\n",lines);

}
