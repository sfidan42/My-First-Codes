#include <iostream>

using namespace std;
// bu program girilen 3 sayıyı toplar.
int main()
{

    int x;
    int y;
    int z;
    int t;

    cout << "x'i giriniz:" << endl;
    cin >> x;
    cout << "y'yi giriniz:" << endl;
    cin >> y;
    cout << " z' i giriniz" << endl;
    cin >> z;
    t = x+y+z;
    cout<<"toplam\t"<<t<<endl;

    cout<<"ters siralanmis sayilar" <<endl;
    cout<<z<<endl;
    cout<<y<<endl;
    cout<<x<<endl;

    return 0;
}
