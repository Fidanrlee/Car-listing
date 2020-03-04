#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "carmodel.h"
#include "carfunction.h"


int main(int argc, char *argv[])
{
      //Error1(argv[1]);// Check the user enter any command
    if(argv[1]==NULL){printf("Erorr number 1: Please enter any command such as Create,Search,Size "); return 0;}

    if(!strcmp(argv[1], CKW[0]))  {Create();} //Create command

//    else if(!strcmp(argv[1], CKW[2]))  {Edit();} //Edit command

    else if(!strcmp(argv[1], CKW[2]))  {Search(argv[2]);} //Search command

// else if(!strcmp(argv[1], CKW[3]))  {Delete(argv[2]);} //Delete command

//   else if(!strcmp(argv[1], CKW[2]))  { Sort();} //Create command

    else if(!strcmp(argv[1], CKW[5]))  {printf("Number of Cars : %d",countlines());} //Numbers of items


   return 0;
}
