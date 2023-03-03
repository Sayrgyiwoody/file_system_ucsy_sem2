#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int mark,totalMark=0;
    float avgMark;
    FILE *inptr;
    inptr = fopen("mark.txt","r");
    for (int i=0;i<4;i++) {
    fscanf(inptr,"%d",&mark);
    totalMark += mark;
    cout << "mark = " << mark << endl;
    }
    avgMark = (float) totalMark/4;
    cout << "Average mark = " << avgMark;
    fclose(inptr);
    return 0;
}
