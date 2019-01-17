

#include <iostream>
using namespace std;


int main (){

int N, min1, min2, prod;
cin >> N;
int* arr = new int [N];
for (int i = 0; i < N; i++){
  cin >> *(arr + i);
}

 min1 = *(arr + 0);
int i;

for (i = 1; i < N; i++){
  if (*(arr + i) < min1 ) min1 = *(arr + i);
}

int p = 0;

while (*(arr + p) < min1){
  p++;
}
i = p;

int j;

for (j = 1; j < N; j++){
  if ((i - j >= 5) || (j - i >= 5)){
    min2 = *(arr + j);
    if (*(arr + j + 1) < min2) min2 = *(arr + j + 1);
  }
}

prod = min1 * min2;

cout << endl << prod;

return 0;
}
