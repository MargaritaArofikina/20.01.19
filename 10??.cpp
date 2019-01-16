//Напишите программу, позволяющую найти и вывести произведение элементов массива, имеющих нечетное значение и делящихся на 3.

#include <iostream>
using namespace std;


int main (){  //почему-то не работает, не могу найти ошибку

int N;
cin >> N;
int* arr = new int[N];
for (int i = 0; i < N; i++){
  cin >> *(arr + i);
}

int prod = 1;

for (int i = 0; i < N; i++){
  if (*(arr + i)%2 == 0){
   break;
  } 
  if (*(arr + i)%3 == 0){
    prod *= *(arr + i);
  }
}

cout << endl << prod;

return 0;
}
