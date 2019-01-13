// Дан массив, содержащий N неотрицатеольных целых чисел. Напишите программу, находящую в этом массиве количество элементов, 
// значение которых менее чем в два раза превосходит значение предшествующего элемента.

#include <iostream>
using namespace std;

int main (){

int N;
cin >> N;
int* arr = new int [N];
for (int i = 0; i < N; i++){
  cin >> *(arr + i);
}

int m = 0;

for (int i = 1; i < N; i++){
  if (*(arr + i - 1) == 0) {
    break; 
  }
  if ((*(arr + i) / *(arr + i - 1)) < 2) m++;
}

cout << endl << m;

return 0;
}
