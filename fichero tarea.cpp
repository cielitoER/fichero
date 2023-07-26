 #include <iostream>
#include <fstream>
using namespace std;
int main (){
string a;
ofstream fich ("cielo.txt");
char str[500];
cout<<"ingrese una palbra";
getline(cin,a);
fich<< a;
}
