//Дан набор из N  целых положительных чисел. Необходимо определить, какая цифра чаще всего встречается в десятичной записи чисел этого 
//набора. Если таких цифр несколько, необходимо вывести их все в порядке убывания.


#include <iostream>
using namespace std;

int main() {
  
int N;
cin >> N;
int* arr = new int [N];
for (int i = 0; i < N; i++){
  cin >> *(arr + i);
}

int* brr = new int [10];
for (int i = 0; i < 10; i++){
  *(brr + i) = 0;
}

for (int i = 0; i < N; i++){
  while (*(arr + i) >= 1){
 *(brr + (*(arr + i)%10)) += 1;
 *(arr + i) = *(arr + i)/10;
 }
}

int m = 0;

for (int i = 9; i >= 1; i--){
  for (int j = 0; j < 10; j++){
if (*(brr + i) >= *(brr + j)) m++;
}
if (m == 10) cout <<endl << i;
m = 0;
}


  return 0;
}
