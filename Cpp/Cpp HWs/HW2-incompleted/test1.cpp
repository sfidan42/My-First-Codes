#include <iostream>
#include <fstream>
#include <array>
#include <string>
using namespace std;

struct words {
    string type="" ;
    string name="" ;
    double value_double=0.0;
    int value_int=0 ;
    struct words* next_ptr=NULL; 
    struct words* perv_ptr=NULL;
};
typedef struct words wordd;
typedef words* word_ptr;
bool is_keyword(string word_to_check);
bool is_operation(string word_to_check);
bool is_symbol(string word_to_check);
void parse(string to_parse, string parsed[]);
int compile(string[]);
void insert(word_ptr* sptr, string str);
bool is_double(string str);


int main()
{
    word_ptr sptr = NULL;
    string line_strings[25] = { "" };
    int i = 0;
    array<string, 50> input;
    ifstream file(".inp");
    string str;
    while (getline(file, str))
    {
        input[i] = str;
       parse(str, line_strings);
       for (int i = 0; i < 25; i++) {
          if (line_strings[i]!="") insert(&sptr,line_strings[i] );
       }
        i++;
    }
   // for (string i : input)cout << i<<endl;
    return 0;
}
bool is_keyword(string word_to_check) {
    string keyword[7] = { "OUT","IN","IF","THEN","ELSE","LOOP","TIMES" };

    for (int i = 0; i < 7; i++) {
        if (keyword[i] == word_to_check) {
            return true;
        }
        return false;

    }
}
bool is_operation(string word_to_check) {
    string operations[12] = { "*","/","+","-","<",">","==","<=",">=","!","!=","=" };
    for (int i = 0; i < 12; i++) {
        if (operations[i] == word_to_check)return true;
    }
    return false;
}
bool is_symbol(string word_to_check) {
    string symbols[2] = { "(",")" };

    for (int i = 0; i < 2; i++) {
        if (symbols[i] == word_to_check)return true;
    }
    return false;
}
void parse(string to_parse, string parsed[]) {
    int i = 0;
    for (char ch : to_parse) {
        if (ch == ' ') {
            i++;
            continue;
        }
        else parsed[i].push_back(ch);
    }
    for (int i = 0; i < 25; i++) if (parsed[i] != "")cout << parsed[i] << endl;

}
int compile(string to_compile[]) {
     
    return 0;
}
void insert(word_ptr* sptr, string str) {
    word_ptr new_word =(word_ptr) malloc(sizeof(words));
    if (new_word != NULL) {
        if (*sptr == NULL)*sptr = new_word;
        else {
            word_ptr current_ptr = *sptr;
            for (; current_ptr->next_ptr != NULL;)current_ptr = current_ptr->next_ptr;
            current_ptr->next_ptr = new_word;
            
        }
        if (is_keyword(str)) {
            new_word->type = "key";
            new_word->name = str;
        }
        else if (is_operation(str)) {
            new_word->type = "oper";
            new_word->name = str;
        }
        else if (is_symbol(str)) {
            new_word->type = "sym";
            new_word->name = str;
        }
        else if (str[0] >= 48 && str[0] <= 57) {
            new_word->type = "value";
            new_word->name = str;
            if (is_double(str)) new_word->value_double = stod(str);
            else new_word->value_int = stoi(str);
        }
        else {
            new_word->name = str;
            new_word->type = "var";
        }

        

    }
}

bool is_double(string str) {
    for (char ch : str)if (ch == '.') return true;
        return false;
}


