

#include <iostream>
using namespace std;

double root2(int n) {    //квадратный корень  

	double m;                         
	double a = 0.00001;
	for (double i = 0; ; i += a){
		if (((i*i) <= n) && (((i + a)*(i + a)) >= n)) {
			m = i;
			break;
		}
	}
	m *= (1 / a);
	long long s = (long long)m;
	int e = (s % 10);
	if (e >= 5){
		s -= e;
		s += 10;
	}
	else {
		s -= e;
	}
	m = (s / 10);
	m *= (a * 10);

	return m;
}

int main (){

int X,Y,Z;
cin >> X >> Y >> Z;
int *k = new int [Y + 1];


for (int i = 0; i <= Y; i++){
  if (i == X){
    *(k + i) = 1;
  } else if (i < X){
    *(k + i) = 0;
  } else if ((i%3 == 0) && (root2(i)%1 == 0)) {
    double j;
    j = i;
    *(k + i) = *(k + i - 5) + *(k + i/3) + *(k + root2(j)) + *(k + (i - 2)/10);
  } else if ((i % 3 == 0) && (root2(i)%1 != 0)){
    *(k + i) = *(k + i - 5) + *(k + i/3) + *(k + (i - 2)/10);
  } else if ((i % 3 != 0) && (root2(i)%1 == 0)){
     double j;
    j = i;
    *(k + i) = *(k + i - 5) + *(k + (i - 2)/10) +  *(k + root2(j));
  } else if ((i % 3 != 0)&&(root2(i)%1 !=0)){
    *(k + i) = *(k + i - 5) + *(k + (i - 2)/10);
  }
}

int s = *(k + Y) - *(k + Z);

if (s > 0) cout << "YES";
if (s < 0) cout << "NO";

return 0;
}
