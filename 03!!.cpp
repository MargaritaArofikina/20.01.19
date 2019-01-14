//Напишите программу, проверяющую, можно ли последовательностью команд получить из числа X число Y.
//Команды: "прибавь 9", "возведи в квадрат", "умножь на 7", "припиши 1 в конец".

#include <iostream>
using namespace std;


#include <iostream>
using namespace std;

int main (){

int X,Y;
cin >> X >> Y;
int *k = new int [Y + 1];


for (int i = 0; i <= Y; i++){

bool sqrt;  //проверка, является ли число полным квадратом
int j;
for (j = 1; j <= i; j++){
  if (j*j == i) {sqrt = 1;
  break;
  }
}
if (j > i) sqrt = 0;

  if (i == X){
    *(k + i) = 1;
  } else if (i < X){
    *(k + i) = 0;

  } else if ((i%7 == 0) && (sqrt == 1)) {
    *(k + i) = *(k + i - 9) + *(k + i/7) + *(k + j) + *(k + (i - 1)/10);
  } else if ((i % 7 == 0) && (sqrt == 0)){
    *(k + i) = *(k + i - 9) + *(k + i/7) + *(k + (i - 1)/10);
  } else if ((i % 7 != 0) && (sqrt == 1)){
    *(k + i) = *(k + i - 9) + *(k + (i - 1)/10) +  *(k + j);
  } else if ((i % 7 != 0)&&(sqrt == 0)){
    *(k + i) = *(k + i - 9) + *(k + (i - 1)/10);
  }
}

int s = *(k + Y);

if (s > 0) cout << "YES";
if (s <= 0) cout << "NO";

return 0;
}
