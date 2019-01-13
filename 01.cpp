//Напишите программу, вычисляющую, сколько существует программ, которые число X преобразуют в число Y с помощью команд:
//"прибавь 1", "умножь на 2", "умножь на 3"

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
  } else if ((i % 2 == 0) && (i%3 == 0)){
    *(k + i) = *(k + i - 1) + *(k + i/2) + *(k + i/3);
  } else if ((i % 2 == 0) && (i%3 != 0)){
    *(k + i) = *(k + i - 1) + *(k + i/2);
  } else if ((i % 2 != 0) && (i%3 == 0)){
    *(k + i) = *(k + i - 1) + *(k + i/3);
  } else if ((i % 2 != 0) && (i%3 != 0)){
    *(k + i) = *(k + i - 1);
  }
}

cout << *(k + Y);

return 0;
}
