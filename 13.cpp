//Напишите переборную прорамму, находящую для заданной последовательности длины N неотрицательных целых чисел максимальное 
//произведение двух ее элементов, номера которых различаются не менее чем на 5.

#include <iostream>
using namespace std;


int main (){

int N, max1, max2, prod;
cin >> N;
int* arr = new int [N];
for (int i = 0; i < N; i++){
  cin >> *(arr + i);
}

 max1 = *(arr + 0);
int i;

for (i = 1; i < N; i++){
  if (*(arr + i) > max1 ) max1 = *(arr + i);
}

int p = 0;

while (*(arr + p) < max1){
  p++;
}
i = p;

max2 = *(arr + 0);
int j;

for (j = 1; j < N; j++){
  if ((*(arr + j) > max2) && ((i - j >= 5) || (j - i >= 5))) max2 = *(arr + j);
}

prod = max1 * max2;

cout << endl << prod;

return 0;
}
