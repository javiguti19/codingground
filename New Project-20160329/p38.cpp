#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(void)  {
    
int x = 0, y = 0, w = 0, z = 0, MAX = 50;
//inicializamos numeros aleatorios...
srand(time(NULL));
    
cout<<"          ---------1---------2---------3---------4---------5---------6"<<endl;
cout<<"CAMELLO 1 "<<endl;    
cout<<"CAMELLO 2 "<<endl;

while (w <= MAX && z <= MAX) {

    system("clear");
	cout<<"          ---------1---------2---------3---------4---------5---------6"<<endl;
	cout<<"CAMELLO 1 ";
	for (w = (w + (1+(rand()%5))), x = 0; x < w ; x++)
	    cout<<"*";
	
	cout<<endl<<"CAMELLO 2 ";
	for (z = (z + (1+(rand()%5))), y = 0; y < z; y++)
	    cout<<"*";
    cout<<endl;
    
    cin.get();
}
if (w == z) {
    cout<<"CAMELLO 1 IGUAL A CAMELLO 2, TABLAS!!!!"<<endl;   
} else {
    if (w > z) {
    cout<<"Ha ganado el CAMELLO 1"<<endl;
} else {
    cout<<"Ha ganado el CAMELLO 2"<<endl;
}
}
return 0;

}
