#include <iostream>
using namespace std;
struct color{
int red, green, blue;
};
int main(){
  color colors[5] = {
  {123, 231, 12},
  {254, 251, 252},
  {143, 43, 201},
  {77, 13, 14},
  {14, 07, 2007},
  };
for (int i=0; i<3; i++) {  
    colors[i].red = 255-colors[i].red;
    colors[i].green = 255 - colors[i].green;
    colors[i].blue =255 - colors[i].blue;
    }
for (int i=0; i<5; i++) {
   cout <<"The Values of RGB after inversion:\n"<< "R: " <<colors[i].red<< endl<< "G: " <<colors[i].green<<endl<< "B: "<<colors[i].blue<< endl;
}
return 0;
}


