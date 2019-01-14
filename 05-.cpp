

#include <iostream>
using namespace std;


int main (){

int X,Y;
cin >> X >> Y;
int *k = new int [Y + 1];


for (int i = 0; i <= Y; i++){
  if (i == X){
    *(k + i) = 1;
  } else if (i < X){
    *(k + i) = 0;
  } else if (i%2 == 0) {
    *(k + i) = *(k + i - 5) + *(k + i - 4) + *(k + i - 1) + *(k + i/2);
  } else if (i % 2 != 0){
    *(k + i) = *(k + i - 5) + *(k + i - 4) + *(k + i - 1);
  }
}


return 0;
}
