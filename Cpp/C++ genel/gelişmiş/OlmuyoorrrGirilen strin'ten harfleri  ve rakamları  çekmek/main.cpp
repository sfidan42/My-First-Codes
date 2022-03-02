#include <iostream>


using namespace std;

int main()
{
    string input="";
    cout<< "please input something including just characters and numbers :"<< " ";
    cin>> input;
    string input_string="";
    string input_number = "";

    for(int i = 0 ; input[i]!= '\0'; i++)
    {
        if((input[i]>= 'A'&&input[i]<='Z')||(input[i]>= 'a'&&input[i]<='z')) input_string.push_back(input[i]);
        if((input[i]>= '0'&&input[i]<='9')|| (input[i]=='.')) input_number.push_back(input[i]);
    }
    cout<< "The alphabets u entered:"<< input_string<< endl;
    cout<< "The numbers u entered:"<< input_number<< endl;



  return 0;

}
