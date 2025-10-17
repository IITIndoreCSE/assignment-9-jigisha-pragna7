#include <iostream>
using namespace std;
 struct item{
int id;
float cost;
};
int main(){
  item items[6] ={ {12121 , 120.21},{13231 , 13},{103 , 40},{10401 , 101.4},};
 cout << "Items that costs greater than 50.00:\n";
for (int i=0; i<6; i++){
  if (items[i].cost>50.00){
cout<< "Item ID: "<< items[i].id<<endl<<"Cost: "<<items[i].cost<<endl;
     }
     }
return 0;
}
