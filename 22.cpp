//Дан набор из N целых положительных чисел. Необходимо выбрать из набора произвольное количество чисел так, чтобы их сумма была как 
//можно больше и при этом не делилась на 6. В ответе нужно указать количество выбранных чисел и и их сумму.

#include <iostream>
using namespace std;

int main() {
  
int N,sum;
cin >> N;
int* arr = new int [N];
for (int i = 0; i < N; i++){
  cin >> *(arr + i);
}

for (int i = 1; i < N; i++){  //сортировка
  if (*(arr + i) < *(arr + i - 1)){
    int s = *(arr + i);
    *(arr + i) = *(arr + i - 1);
    *(arr + i - 1) = s;
  }
}

sum = 0;
int p = N;

for (int i = 0; i < N; i++){
 sum += *(arr + i);
}

for (int j = 0; j < N; j++){
if (sum % 6 != 0) {
  cout << endl << p << endl << sum;
  break;
}
else {
  p = N - 1;
sum -= *(arr + j);
}
}



  return 0;
}
