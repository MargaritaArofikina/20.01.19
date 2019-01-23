//Дан набор из N целых положительных чисел. Из этих чисел формируются все возможные пары, в каждой паре вычисляется сумма элементов. 
//Необходимо определить количество пар, для которых полученная сумма делится на 9.

#include <iostream>
using namespace std;

int main() {
  
int N,s = 0;
cin >> N;
int* arr = new int [N];
for (int i = 0; i < N; i++){
  cin >> *(arr + i);
}

int j = 0;
for (j; j < N; j++){
for (int i = 0; i < N; i++){
if (((*(arr + i) + *(arr + j))%9 == 0) && (i != j)) s++;
}
j++;
}

cout << endl << s;
  return 0;
}
