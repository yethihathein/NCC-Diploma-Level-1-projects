//C++14
#include "stdio.h"

int main() {

    int index=0;
    int fdata[100];
    FILE *fptr;
    fptr = fopen("YeThihaThein.txt","w" );

    if(fptr==NULL){


        printf("[-]File cannot open!!!");
    }
    else{
        for(int i=1; i<=100; i++){

            fprintf(fptr, "%d%c", i, '\n');
            fdata[index] = i;
            printf("Data inside array index %d |--> %d\n", index, fdata[index]);
            index++;
        }
    }
}
