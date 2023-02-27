#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    double x;
    int i,k;

    FILE *inptr;

    inptr = fopen("fileExample.txt","r");
    fscanf(inptr,"%d",&i);
    fscanf(inptr,"%d %.2lf" , &k , &x);

    fclose(inptr);

    cout << i << "\t" << k << endl << x ;

    return 0;
}