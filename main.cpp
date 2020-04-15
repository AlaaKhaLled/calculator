# include <bits/stdc++.h>
using namespace std;
float add (float op1,float op2);
float sub (float op1,float op2);
float mul (float op1,float op2);
float div (float op1,float op2);
float mod (float op1,float op2);

float op1,op2,result,memory=0.0;
char op,choice,to_quit;

int main()
{

    do
    {
      cout<<"Please enter your two numbers and the operation between them .. "<<endl;
      cin>>op1;
      cin>>op;
      cin>>op2;
        switch (op)
        {
        case '+':
            {
               cout<<"your result is : ";
               cout<< add (op1,op2)<<endl;

        break;
            }
        case '-':
            {
               cout<<"your result is : ";
               cout<< sub (op1,op2)<<endl;
         break;
            }

        case '*':
            {
               cout<<"your result is : ";
               cout<< mul (op1,op2)<<endl;
        break;
            }

        case '/':
            {
                if(op2==0)
                   {
                      cout<<"That is invalid operation"<<endl;
                   }
                else
                   {
                       cout<<"your result is : ";
                       cout<< div (op1,op2)<<endl;
                   }
        break;
            }
        case '%':
            {
                cout<<"your result is : ";
                cout<< mod ((int)op1,(int)op2)<<endl;
                break;
            }
        default:
            {
               cout<<"That is invalid operation"<<endl;
        break;
            }
        }
        do{
        cout<<"Please enter your choice if you want to exit please enter (q) and if you want to clear please enter (c) and if you want to print the result please enter (p) and if you want to add to the previous memory please enter (M)\n"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 'M':
            {
                memory=memory+result;
                break;

            }
        case 'C':
            {
                memory=0;
                break;
            }
        case 'P':
            {
                cout <<"your result is : ";
                cout <<memory<<endl;
                break;
            }
        case 'Q':
            {
                break;
            }
        }
            }while(choice !='Q');
        cout<<"if you want to get out from all the program please enter (q) else please enter any thing else\n";
        cin>>to_quit;


    }while(to_quit !='Q');
        cout<<"End of the program"<<endl;
    return 0;
}
float add (float op1,float op2)
{
    result=op1+op2;
    return result;
}

float sub (float op1,float op2)
{
    result=op1-op2;
    return result;
}

float mul (float op1,float op2)
{
    result=op1*op2;
    return result;
}

float div (float op1,float op2)
{
    result=op1/op2;
    return result;
}

float mod (float op1,float op2)
{
    result=(int)op1%(int)op2;
    return result;
}
