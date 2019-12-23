//
// Created by rick.liao on 2019/12/23.
//

#include "readwav.h"

int main(argc, argv)
int argc;
char* argv[];
{
    //read the arguments
    char * filename = "../wav/Nellie1.wav";
    FILE * fr = fopen(filename,"r");

    if ( fr == NULL){
        printf("Fail to open file ");
        return 0;
    }
    printf("open succeed.");
    int c;
    while((c = fgetc(fr)) != EOF){
        
    }

    fclose(fr);



}