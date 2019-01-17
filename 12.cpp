//Напишите переборную прорамму, находящую для заданной последовательности длины N неотрицательных целых чиселминимальную сумму двух ее
//элементов, номера которых различаются не менее чем на 5.

#include <iostream>
using namespace std;


int main (){

int N, min1, min2, sum;
cin >> N;
int* arr = new int [N];
for (int i = 0; i < N; i++){
  cin >> *(arr + i);
}

 min1 = *(arr + 0);
int i;

for (i = 1; i < N; i++){
  if (*(arr + i) < *(arr + i - 1)) min1 = *(arr + i);
}

min2 = *(arr + 0);
int j;

for (j = 1; j < N; j++){
  if ((*(arr + j) < *(arr + j - 1)) && ((i - j >= 5) || (j - i >= 5))) min2 = *(arr + j);
}

sum = min1 + min2;

cout << endl << sum;

return 0;
}
