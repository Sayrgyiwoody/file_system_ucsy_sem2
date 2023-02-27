#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
    double income = 123.45 , express = 678.9;
    int week = 7 , year = 2023;
    FILE *outPtr;
    outPtr = fopen("write.txt","w");
    fprintf(outPtr,"Income = %.2lf\tExpress = %.2lf\n",income,express);
    fprintf(outPtr,"Week = %d\tYear = %d",week,year);
    fclose(outPtr);
    return 0;
    }