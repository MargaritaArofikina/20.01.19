//Напишите программу, получающую список клеток, которые конь может достичь не более чем 3 хода из данной клетки.

#include <iostream>
using namespace std;


int main (){

int x,y,N;
cin >> x >> y >> N;

if ((x-1 > 0) && (y+2 <= N)) cout << endl << x - 1 << "," << y + 2;
if ((x-1 > 0) && (y+3 <= N)) cout << endl << x - 1 << "," << y + 3;
if ((x+1 <= N) && (y+2 <= N)) cout << endl << x + 1 << "," << y + 2;
if ((x+1 <= N) && (y+3 <= N)) cout << endl << x + 1 << "," << y + 3;
if ((x-2 > 0) && (y+1 <= N)) cout << endl << x - 2 << "," << y + 1;
if ((x-3 > 0) && (y+1 <= N)) cout << endl << x - 3 << "," << y + 1;
if ((x-2 > 0) && (y-1 > 0)) cout << endl << x - 2 << "," << y - 1;
if ((x-3 > 0) && (y-1 > 0)) cout << endl << x - 3 << "," << y - 1;

int s = x;
x = y;
y = s;

if ((x-1 > 0) && (y+2 <= N)) cout << endl << y + 2  << "," << x - 1;
if ((x-1 > 0) && (y+3 <= N)) cout << endl  << y + 3 << "," << x - 1;
if ((x+1 <= N) && (y+2 <= N)) cout << endl  << y + 2 << "," << x + 1;
if ((x+1 <= N) && (y+3 <= N)) cout << endl  << y + 3 << "," << x + 1;
if ((x-2 > 0) && (y+1 <= N)) cout << endl  << y + 1 << "," << x - 2;
if ((x-3 > 0) && (y+1 <= N)) cout << endl  << y + 1 << "," << x - 3;
if ((x-2 > 0) && (y-1 > 0)) cout << endl  << y - 1 << "," << x - 2;
if ((x-3 > 0) && (y-1 > 0)) cout << endl  << y - 1 << "," << x - 3;

return 0;
}
