#include<iostream>
#include<fstream>
using namespace std;

int main() {
    fstream wfptr;
    wfptr.open("fstream.txt",ios::out);
    wfptr<<"Hello oppa koko yay$\nta ny kon palit loh htl hay$\nbr yal kyouk myr palit htr$";
    wfptr.close();

    fstream rfptr;
    rfptr.open("fstream.txt",ios::in);
    if(!rfptr) {
        cout << "Fils not found\n";
    }else {
        while (!rfptr.eof()) {
            char ch;
            rfptr>>ch;
            if(ch=='$') {
                cout << endl;
            }else{
                cout << ch;
            }
        }
    }
    rfptr.close();
    return 0;
}