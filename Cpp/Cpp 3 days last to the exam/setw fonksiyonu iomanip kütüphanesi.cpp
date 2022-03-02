
#include <iostream>
#include <iomanip>
using namespace std;
using std::setw;

int main()
{
    int N = 0;
    int n[1000];
    cout << "Dizi boyutunu en fazla 1000 olacak sekilde giriniz: " << endl;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << "please input " << i << ". element: " << endl;
        cin >> n[i];
        cout << i << ". element is: " << n[i] << endl;

    }
    cout << "element" << setw(13) << "value" << endl;
    for (int j = 0; j < N; j++)
    {
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }
    return 0;
}
