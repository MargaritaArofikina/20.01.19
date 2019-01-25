

#include <iostream>
#include <limits.h>
using namespace std;


int main (){

int X,N,a,b,c;
cin >> X >> N;

int s = 1;
if (X%2 == 0) {
  for (int n = 0; n < N; n++){
s *= 3;
int*arr = new int [s];
a = X*8;
b = X/2;
c = X*4;
}
} else {
  s = 2;
  for (int n = 0; n < N - 1; n++){
s *= 3;
int*arr = new int [s];
a = X*8;
c = X*4;
}
}


for (int n = 0; n < N; n++){
  for (int i = 0; i < s; i++){
X = a;
int p = 1;
  if (X%2 == 0) {
  for (int n = 0; n < N; n++){
p *= 3;
a = X*8;
b = X/2;
c = X*4;
}
} else {
  s = p;
  for (int n = 0; n < N - 1; n++){
p *= 3;
a = X*8;
c = X*4;
}
}


}
}

return 0;
}
