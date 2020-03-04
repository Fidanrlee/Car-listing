#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "carfunction.h"


void Create (){

      FILE *CL; //Creat Car Listing file


        struct Car C;
        CL = fopen("Cardata.txt","a");

            if (CL == NULL){
       printf("Error! opening file");   exit(1);}  // Program exits if the file pointer returns NULL.

        printf("    Enter Model name:   ");
        scanf("%s",C.Model_name);

        printf("    Enter Colour:       ");
        scanf("%s",C.Colour);

        printf("    Enter Engine size:  ");
        scanf("%d",&C.Engine_size);

        printf("    Enter Year:         ");
        scanf("%d",&C.Year);

        printf("    Enter Price:        ");
        scanf("%d",&C.Price);


        fprintf(CL,"%s ",C.Model_name);
        fprintf(CL,"%s ",C.Colour);
        fprintf(CL,"%d ",C.Engine_size);
        fprintf(CL,"%d ",C.Year);
        fprintf(CL,"%d\n",C.Price);

        fclose(CL);
}

//Edit ()

struct Car Search(char *str) {
	FILE *fp;

	int find_result = 0;
	char temp[512];
    struct Car C;

	if((fp = fopen("Cardata.txt", "r")) == NULL) {
		exit(1);
	}

	while(fgets(temp, 512, fp) != NULL) {
		if((strstr(temp, str)) != NULL) {

			printf("\n%s\n", temp);
			find_result++;
		}
	}

	if(find_result == 0) {  printf("\nSorry, couldn't find a data.\n");}

    fclose(fp);
   	return C;
}

void Sort () {}

void Delete (char *str) {}


int countlines()
{
  // count the number of lines in the file called filename
  FILE *fp = fopen("Cardata","r");
  int ch=0;
  int lines=0;

 if((fp = fopen("Cardata.txt", "r")) == NULL) {
		exit(1);
	}

  while ((ch = fgetc(fp)) != EOF)
    {
      if (ch == '\n')
    lines++;
    }
  fclose(fp);
  return lines;
}
