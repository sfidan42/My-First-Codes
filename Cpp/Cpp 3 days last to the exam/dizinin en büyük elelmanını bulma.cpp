#include <iostream>

using namespace std;
int a;
float c(float dizi[], int N_eleman);
int main()
{
    //
    //    cout << " dizinin kac elemanli olacagini giriniz: " << endl;
    //    cin >> a;
    //    cout << endl;
    //    float dizi[10000];
    //    for (int i = 0; i < a; i++)
    //    {
    //        cout << "dizinin " << i + 1 << ". elemanini giriniz: ";
    //        cin >> dizi[i];
    //    }
    //    float y;
    //    y = c(dizi, a);
    //    cout << endl;
    //    cout << "dizinin en buyuk elamani: " << y;
    //}
    //
    //float c(float dizi[], int N_eleman)
    //{
    //    float max_eleman = dizi[0];
    //    for (int i = 1; i <= a; i++)
    //    {
    //        if (dizi[i] > max_eleman)
    //        {
    //            max_eleman = dizi[i];
    //        }
    //    }
    //
    //    return max_eleman;
    //
    //}


    int eb = a[0];
    for (int i = 0; i < 5; i++) {
        if (a[i] > eb)
            eb = a[i];
    }
    return 0;
}