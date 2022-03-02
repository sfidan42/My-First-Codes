#include<iostream>
using namespace std;
int main()
{
int x1, x2, x3, small , mid, big, greate_dif,scale;
cin >> x1 >> x2 >> x3;
if (x1 <= x2 && x1 <= x3) small = x1;
else if (x2 <= x1 && x2 <= x3) small = x2;
else small = x3;
if (x1 >= x2 && x1 >= x3) big = x1;
else if (x2 >= x1 && x2 >= x3) big = x2;
else big = x3;
if( (x2 <= x1 && x1 <= x3) || (x3 <= x1 && x1 <= x2)) { mid = x1; }
if( (x1 <= x2 && x2 <= x3) || (x3 <= x2 && x2 <= x3)) { mid = x2; }
if ((x1 <= x3 && x3 <= x2) || (x2 <= x3 && x3 <= x1)) { mid = x3; }
greate_dif = mid - small;
if (big - mid > greate_dif) greate_dif = big - mid;
scale = greate_dif / 40 + 1;
for (int i = 0; i < 80; i++)
{
if ((mid-small) / scale > i || 40 <= i) cout << ".";
else cout<< "X";
}
cout << endl;
for (int i = 0; i < 80; i++)
{
if (40 >= i || (big-mid) / scale < (i-40)) cout << ".";
else cout << "X";
}
}
