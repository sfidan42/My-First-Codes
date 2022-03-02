#include <iostream>

using namespace std;
 int voidprint (int i);
    double voidprint(double j);
    char *voidprint (char const *k);
int main()
{
voidprint(5.5);
   return 0;
}
voidprint(int i){
    cout << "Here is integer"<< i << endl;return 0;}


    float voidprint (double j){
    cout << "Here is float "<< j << endl;return 0.0;}


    char const voidprint (char const *k){
    cout << "Here is char*"<< k << endl;return 0x00;}
