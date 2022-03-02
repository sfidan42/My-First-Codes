#include <stdio.h>
#include<fstream>
#include<conio.h>
#include<iostream>
using namespace std;

class inp_challenges
{
private:
    int A;
    int B;
public:
    void add_info()
    {
        fstream fs; //creating object of fstream class
        fs.open("C.inp",ios::app); //opening file not in append mode ios::app
        if(!fs)
            cout<<"File creation failed...........";
        else
            {
            //cout<<" New file created..........";
            cout<<"\n Enter the value of A : ";
            cin>>A;
            fs<<"A "; //write letter to the file
            fs<<A<<"\n";//write value to the file
            cout<<"\n Enter the value of B : ";
            cin>>B;
            fs<<"B "; //write letter to the file
            fs<<B<<"\n";//write value to the file
            fs.close(); //closing the file
            }
    }

void display_info()
{
    fstream fs; //making object of fstream class
    fs.open("C.inp",ios::in); //opening file in input mode
    if(!fs) //checking whether the file exist.
        cout<<"No such file............";
    else
    {
        while(!fs.eof()) //read till end of the file
        {
            fs>>A;fs>>B; //reading value from the file
            if(!fs.eof()) //Checking whether reached e.o.f.
            {
                cout<<"A "<<A;
                cout<<"B "<<B;
                cout<<endl; //Message has been read from the file
            }
        }
        fs.close();//closing file
    }
}
};

class out_challenges
{
private:
    int A,B;
    int sum;
    float dsum;
    int div;
    int ddiv;
    int OP;
    int OPP;
    int IfTE;
    int Cif;
    int loop;
public:
    void int_adder()
    {
        fstream fs; //creating object of fstream class
        fs.open("C1.out",ios::app); //opening file
        if(!fs)
            cout<<"File creation failed...........";
        else
            {
            int sum=A+B;
            //write the summition to the C1.out file
            fs<<"A = "<<A<<endl;
            fs<<"B = "<<B<<endl;
            fs<<"C = A+B"<<endl;
            fs<<"OUT "<<sum<<endl;
            fs.close(); //closing the file
            }
    }
    void doub_adder()
    {
        fstream fs; //creating object of fstream class
        fs.open("C2.out",ios::app); //opening file
        if(!fs)
            cout<<"File creation failed...........";
        else
            {
            float dsum=A+B;
            //write the double summition to the C2.out file
            fs<<"A = "<<A<<endl;
            fs<<"B = "<<B<<endl;
            fs<<"C = A + B"<<endl;
            fs<<"OUT "<<dsum<<endl;
            fs.close(); //closing the file
            }
    }
    void int_div()
    {
        fstream fs; //creating object of fstream class
        fs.open("C3.out",ios::app); //opening file
        if(!fs)
            cout<<"File creation failed...........";
        else
             {
            int div=B/A;
            //write the integer division to the C3.out file
            fs<<"A = "<<A<<endl;
            fs<<"B = "<<B<<endl;
            fs<<"C = B / A"<<endl;
            fs<<"OUT "<<div<<endl;
            fs.close(); //closing the file
            }
    }
    void doub_div()
    {
        fstream fs; //creating object of fstream class
        fs.open("C4.out",ios::app); //opening file
        if(!fs)
            cout<<"File creation failed...........";
        else
            {
            float ddiv=B/A;
            //write the double division to the C4.out file
            fs<<"A = "<<A<<endl;
            fs<<"B = "<<B<<endl;
            fs<<"C = B / A"<<endl;
            fs<<"OUT "<<ddiv<<endl;
            fs.close(); //closing the file
            }
    }
    void Op_Prec()
    {
        fstream fs; //creating object of fstream class
        fs.open("C5.out",ios::app); //opening file
        if(!fs)
            cout<<"File creation failed...........";
        else
            {
            int OP=B*A+B*(A+B);
            //write the double division to the C5.out file
            fs<<"A = "<<A<<endl;
            fs<<"B = "<<B<<endl;
            fs<<"C = A + B"<<endl;
            fs<<"D = B * A + B * C"<<endl;
            fs<<"OUT "<<OP<<endl;
            fs.close(); //closing the file
            }

    }
    void Op_Prec_Par()
    {
        fstream fs; //creating object of fstream class
        fs.open("C6.out",ios::app); //opening file
        if(!fs)
            cout<<"File creation failed...........";
        else
            {
            int OPP=(A+B)*(A+B)+B;
            //write the operator predence to the C6.out file
            fs<<"A = "<<A<<endl;
            fs<<"B = "<<B<<endl;
            fs<<"C = A + B"<<endl;
            fs<<"D = (A + B ) * C + B"<<endl;
            fs<<"OUT "<<OPP<<endl;
            fs.close(); //closing the file
            }
    }
    void If_then_else()
    {
        fstream fs; //creating object of fstream class
        fs.open("C7.out",ios::app); //opening file
        if(!fs)
            cout<<"File creation failed...........";
        else{
            if(A > B)
                {
                IfTE=A;
                }
            else
                IfTE=B;
            //write the if then else's out to the C7.out file
            fs<<"A = "<<A<<endl;
            fs<<"B = "<<B<<endl;
            fs<<"A2 = IF A1 > B1 THEN A1 ELSE B1"<<endl;
            fs<<"OUT "<<IfTE<<endl;
            fs.close(); //closing the file
            }
    }
    void com_if()
    {
        fstream fs; //creating object of fstream class
        fs.open("C8.out",ios::app); //opening file
        if(!fs)
            cout<<"File creation failed...........";
        else
        {
            if(A+B<=3)
            {
                Cif=A;
            }
            else
                Cif=B;
            //write the combine if clause's output to the C8.out file
            fs<<"A = "<<A<<endl;
            fs<<"B = "<<B<<endl;
            fs<<"C = IF ( A + B ) <= 3 THEN A ELSE B"<<endl;
            fs<<"OUT "<<Cif<<endl;
            fs.close(); //closing the file
        }
    }
    void loop_st()
    {
        fstream fs; //creating object of fstream class
        fs.open("C9.out",ios::app); //opening file
        if(!fs)
            cout<<"File creation failed...........";
        else
            for(int i=1;i<=5;i++)
            {
                loop+=(A*B);
            }
            //write the loop statement's output to the C9.out file
            fs<<"A = "<<A<<endl;
            fs<<"B = "<<B<<endl;
            fs<<"LOOP C = C + A * B TIMES 5"<<endl;
            fs<<"OUT "<<loop<<endl;
            fs.close(); //closing the file
    }
};

int main ()
{
  int ch=1;
  int ch2=1;
  inp_challenges i;
  out_challenges o;
  fstream fs; //creating object of ftream class

      cout<<"\n * * * To make .inp file * * *";
      cout<<"\n 1. Add information ";
      cout<<"\n 2. Display information ";
      cout<<"\n 0. quit ";
      cout<<"\n Enter Choice: ";
      cin>>ch;
      switch(ch)
      {
      case 1:
          i.add_info();
          break;
      case 2:
          i.display_info();
          break;
      }

      cout<<"\n * * * To obtain .out file * * *"<<endl;
      cout<<"for nth Challenge, enter n: "<<endl;
      cout<<"If you want to exit just enter 0"<<endl;
      cout<<"Enter Choice: "<<endl;
      cout<<"If you dont know what to choose , please enter 0: ";
      cin>>ch2;
      switch(ch2)
        {
        case 1:
            o.int_adder();
            break;
        case 2:
            o.doub_adder();
            break;
        case 3:
            o.int_div();
            break;
        case 4:
            o.doub_div();
            break;
        case 5:
            o.Op_Prec();
            break;
        case 6:
            o.Op_Prec_Par();
            break;
        case 7:
            o.If_then_else();
            break;
        case 8:
            o.com_if();
            break;
        case 9:
            o.loop_st();
            break;
        case 0:
            cout<<"1: Integer Constants one-character variable names\n";
            cout<<"2: Double Constants one-character variable names\n";
            cout<<"3: Integer Division\n";
            cout<<"4: Double Division\n";
            cout<<"5: Operator Precedence\n";
            cout<<"6: Operator Precedence with Parentheses\n";
            cout<<"7: using IF THEN ELSE statement\n";
            cout<<"8: Combine IF clause with operations\n";
            cout<<"9: Loop Statement\n";
        }
  return 0;
}
