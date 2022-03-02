// CPP program to demonstrate working of string
// find to search a string
#include <iostream>
#include <string>

using namespace std;
bool is_oper(char check);
int main()
{
    int found=0;
    int n;
    string str = "(A==B)<=(C>=D)!=E";




    for(int i =0 ; str[i]!=NULL ; i++)
        {
        if(is_oper(str[i]))
            {
            found = i;
            if (found !=0&& found!= str.length()-1)
                {
                if(str[found-1]!= ' '&&!is_oper(str[found-1]) )
                 str.insert(found," ");
                }
            if(found!= str.length()-1)
                {
                if(str[found+1]!=' '&& !is_oper(str[found+1]) )
                str.insert(found+1," ");
                /*else if(str[found+2]!=' '&&str[found+1]=='=')
                str.insert(found+3," ");*/
                }
            }
        }


cout<<str<<endl;
return 0;
}
bool is_oper(char check){
    char four[8] = {'*' , '/' , '+' , '-', '!' , '<' , '>' , '=' };
    for(int i = 0 ; four[i]!=NULL; i++){
        if (check==four[i])return true;
    }
    return false;
}
