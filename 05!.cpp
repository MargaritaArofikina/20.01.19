



#include <iostream>
#include <limits.h>
using namespace std;


int minimum4 (int a, int b, int c, int d){
  if (a <= b && a <= c && a <= d){
    return a;
  } else if (b <= a && b <= c && b <= d){
    return b;
  } else if (c <= a && c <= b && c <= d){
return c;
  }else {
    return d;
  }
  
}


int minimum3 (int a, int b, int c){
  if (a <= b && a <= c){
    return a;
  } else if (b <= c){
    return b;
  } else {
    return c;
  }
}

int minimum2 (int a, int b){
  if (a <= b) {
    return a;
  } else {
    return b;
  }
}

int orders (int*arr, int *step, int k, int i){
  if (*(arr + k - 1) + 1 == *(arr + k)){
    *(step + i) = 1;
    return k - 1;
  } else if (*(arr + k - 4) + 1 == *(arr + k)){
    *(step + i) = 2;
    return k - 4;
  } else if (*(arr + k - 5) + 1 == *(arr + k)){
    *(step + i) = 3;
    return k - 5;
  } else if (*(arr + k/2) + 1 == *(arr + k)){
    *(step + i) = 4;
    return k/2;
  }
}

int main (){

int X,Y;
cin >> X >> Y;
int* arr = new int[Y + 1];

for (int i = 0; i <= Y; i++){
 if (i == X){
    *(arr + i) = 1;
  } else if (i < X){
    *(arr + i) = INT_MAX;
  } else if ((i % 2 == 0) && (i >= 5)){
    *(arr + i) = minimum4 (*(arr + i - 1), *(arr + i - 4),*(arr + i - 5), *(arr + i/2)+1);
  } else if (i == 4){
    *(arr + i) = minimum3(*(arr + i - 1), *(arr + i - 4), *(arr + i/2)+1);
  } else if (i == 2){
    *(arr + i) = minimum2(*(arr + i - 1), *(arr + i/2)+1);
  } else if ((i % 2 != 0) && (i >= 5)){
    *(arr + i) = minimum3(*(arr + i - 1), *(arr + i - 4), *(arr + i - 5) + 1);

  } else if ((i % 2 != 0) && (i < 4) && (i >= 1)){
    *(arr + i) = *(arr + i - 1) + 1;
  }
}

int N = *(arr + Y);
int *step = new int [N];
int k = Y;
for (int i = N - 1; i>=0; i--){
  k = orders(arr,step,k,i);
}
for (int i = 0; i <= N; i++){
 if (*(step + i) == 1) {
   cout << endl <<"прибавить 1";
 }
 if (*(step + i) == 2) {
   cout << endl <<"прибавить 4";
 }
 if (*(step + i) == 3) {
   cout << endl <<"прибавить 5";
 }
 if (*(step + i) == 4) {
   cout << endl <<"умножить на 2";
 }
}

return 0;
}
