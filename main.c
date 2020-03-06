#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "carmodel.h"
#include "carfunction.h"


int main(int argc, char *argv[])
{
      // Check the user enter any command
    if(argv[1]==NULL){printf("Erorr number 1: Please enter any command such as Create,Search,Size,List,Delete, "); return 0;}

    if(!strcmp(argv[1], CKW[0]))  {Create();} //Create command

    else if(!strcmp(argv[1], CKW[1]))  {Search(argv[2]);} //Search command

    else if(!strcmp(argv[1], CKW[2]))  {List();} //List command

    else if(!strcmp(argv[1], CKW[3]))  {Delete(argv[2]);} //Delete command

    else if(!strcmp(argv[1], CKW[4]))  {countlines();} //Numbers of items


   return 0;
}
