#include<iostream>
#include<stdio.h>
using namespace std;

int main() {

    FILE *alePtr;
    alePtr = fopen("ale.txt","w");
    for (int i =1;i<=16;i++) {
        for (int j=1;j<=12;j++) {
            // cout << i << " * " << j <<" = " << i*j<< endl;
            fprintf(alePtr,"%d * %d = %d\n",i,j,i*j);
        }
    }
    fclose(alePtr);
    return 0;
}
