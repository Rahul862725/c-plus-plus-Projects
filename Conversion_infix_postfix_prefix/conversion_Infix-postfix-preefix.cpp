/*
This project is all about making a calculator of coversion INFIX POSTFIX PREFIX
this calculator convert these combination

                                  1:Convert  infix to postfix
                                  2:Convert  infix to prefix
                                  3:Infix evaluation
                                  4:Convert  postfix to infix
                                  5:Convert  postfix to prefix
                                  6:Postfix evaluation
                                  7:Convert  prefix to infix
                                  8:Convert  prefix to postfix
                                  9: Prefix evaluation

Inside each combination their is facility to possible conversion Ex: Let choose first option,
these are possible conversion combinations of result
  1:Convert postfix to infix
  2:Convert postfix to prefix
  3:Convert postfix evaluation

*/


#include <iostream>
#include <cstring>
#include <stack>
#include <iomanip>
#include <math.h>
#include <windows.h>
#include <unistd.h>
#include <conio.h>
#define max 100//size of array
#define ta cout << "\t\t\t\t"
#define header cout << setw(40) << "********" << "\t\t\t\t" << "********" << endl << setw(40) << "\t\t" << " CALCULATOR " << endl << setw(40) << "********" << "\t\t\t\t" << "********" << endl << setw(116) << "*************************************************************************************" << endl;

using namespace std;

// This class all important function . this class is a parent of all other class
class functione {
    public:
        char st[max], infix[max], postfix[max], val;
    char prefix[max];
    char temp[max];
    int top = -1, i = 0, j = 0;
    int sti[100];
    float va = 0;
    int tup = -1;
    float op4, op3;
    char op2, op1;
    int pup() {
        return sti[tup--];
    }
void posh(int va)
{
    tup++;
    sti[tup] = va;

}
void push(char st[], char val)
{
    if (top == max - 1)
        cout << "\n" << "Stack is overflow";
    else {
        top++;
        st[top] = val;

    }
}
char pop(char st[])
{
    if (top == -1)
        cout << "\n" << "Stack is underflow";
    else {
        val = st[top];
        top--;
    }
    return val;
}
int priority(char op)
{
    if (op == '^')
        return 4;
    else if ((op == '/') || (op == '*') || (op == '%'))
        return 3;
    else if ((op == '-' || op == '+'))
        return 2;
}
void infixtopostfi();

void addpren(char infix[]);//for adding parenthesis in infix expression

stack < string > stt;
string maintains(string op5);//for maintain multiple values to convert postfix to infix
void postfixtoinfi();
void revers();//for reverse a array
int postfixevalu();
void store(char postfixe[])//to store temp to postfix
{
    int i;
    int l = strlen(postfixe);
    for (i = 0; i < l; i++) {
        temp[i] = postfixe[i];
    }
    temp[i] = '\0';
}
void posttopreffi()
{
    postfixtoinfi();
    infixtopreefi();
    infipref(infix);

}
void infipref(char infix[])
{
    int l = strlen(infix);
    for (i = 0; i < l; i++) {
        prefix[i] = infix[i];

    }
    prefix[i] = '\0';

}
void infixtopreefi()
{
    store(infix);
    revers();
    infixtopostfi();
    store(postfix);
    revers();
    infipref(infix);


}
int infixevalua()
{
    infixtopostfi();
    int v = postfixevalu();

    return v;

}
void storein(char infi[])
{
    int i, l;
    l = strlen(infi);
    for (i = 0; i < l; i++) {
        postfix[i] = infi[i];
    }
    postfix[i] = '\0';
}

void prefixtoinfi()
{
    store(prefix);
    revers();
    storein(infix);
    postfixtoinfi();
    store(infix);
    revers();

}
void prefixtopostfi()
{
    prefixtoinfi();
    infixtopostfi();

}
void prefixevalu()
{
    prefixtopostfi();
    int v = postfixevalu();
    ta; cout << "Value of postfix value is: " << v << endl;
    ta; cout << "Press any key to continue...";
    getch();
}

int check(char infi[])
{
    stack < char > st;
    int i = 0;
    while (infi[i] != '\0') {
        if (infi[i] == '(')
            st.push(infi[i]);
        else if (infi[i] == ')')
            st.pop();
        i++;
    }
    if (!st.empty())
        return 1;
    else
        return 0;
}
};
void functione:: infixtopostfi()
{
    int i = 0, j = 0;
    char temp;

    while (infix[i] != '\0') {
        if (infix[i] == '(') {
            push(st, infix[i]);
            i++;
        }
        else if (infix[i] == ')') {
            while (top != -1 && st[top] != '(') {
                postfix[j] = pop(st);
                j++;
            }
            temp = st[top];
            top--;
            i++;
        }
        else if (isdigit(infix[i]) || isalpha(infix[i]) || infix[i] == '_') {
            postfix[j] = infix[i];

            i++;
            j++;
        }
        else if ((infix[i] == '+') || (infix[i] == '-') || (infix[i] == '*') || (infix[i] == '/') || (infix[i] == '%') || (infix[i] == '^')) {
            if (top != -1) {
                while ((st[top] != '(') && (priority(st[top]) >= priority(infix[i]))) {
                    postfix[j] = pop(st);
                    j++;
                }
            }
            push(st, infix[i]);
            i++;
        }

    }
    if (top != -1) {


        while ((top != -1) && (st[top] != '(')) {

            postfix[j] = pop(st);

            j++;
        }
    }
    postfix[j] = '\0';
}
void functione:: addpren(char infix[])//for adding parenthesis in infix expression
{
    int l = strlen(infix);
    int i;
    for (i = l; i > 0; i--) {
        infix[i] = infix[i - 1];
    }
    infix[0] = { '('};
}

void functione:: revers()//for reverse a array
{
    int len = 0, i = 0, j;
    len = strlen(temp);
    j = len - 1;
    while (j >= 0) {
        if (temp[j] == '(') {
            infix[i] = ')';
        }
        else if (temp[j] == ')') {
            infix[i] = '(';

        }
        else {
            infix[i] = temp[j];
        }
        j--;
        i++;

    }
    infix[i] = '\0';


}

void functione:: postfixtoinfi()
{
    int top = -1, j = -1, i = 0;
    while (postfix[i] != '\0') {
        if (isdigit(postfix[i]) || isalpha(postfix[i]) || postfix[i] == '_') {
            string op;
            op = postfix[i];
            stt.push(op);
            i++;
        }
        else if (postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/' || postfix[i] == '^') {

            string p;
            string op7, pt;


            string op5 = stt.top();
            stt.pop();
            if (stt.top() == "_") {
                pt = maintains(op5);
                p = postfix[i];
                i++;
                if (!stt.empty()) {
                    op7 = stt.top();
                    stt.pop();
                    string pt1;
                    pt1 = maintains(op7);
                    stt.push("(" + pt1 + p + pt + ")");
                }
                else {
                    stt.push("(" + p + pt + ")");
                }
            }
            else {
                string op6;
                op6 = stt.top();
                stt.pop();
                if (!stt.empty()) {
                    if (stt.top() == "_") {
                        pt = maintains(op6);
                        p = postfix[i];
                        i++;
                        stt.push("(" + pt + p + op5 + ")");
                    }
                    else {
                        p = postfix[i];
                        i++;
                        stt.push("(" + op6 + p + op5 + ")");
                    }
                }
                else {
                    p = postfix[i];
                    i++;
                    stt.push("(" + op6 + p + op5 + ")");
                }
            }
        }
    }
    string d = stt.top();
    stt.pop();
    int l = d.length();
    for (i = 0; i < l; i++) {
        infix[i] = d[i];
    }
    infix[i] = '\0';
}

string functione:: maintains(string op)//for maintain multiple values to convert postfix to infix
{
    string pt;
    int c = 0;
    if (stt.top() != "_") {
        pt = op;
        return pt;
    }
    while (stt.top() == "_") {

        string d = stt.top();
        stt.pop();
        string op6 = stt.top();
        stt.pop();


        if (c == 0) {
            pt = op6 + d + op;
            if (stt.empty())
                return pt;
        }
        else if (c == 1) {
            pt = op6 + d + pt;

            if (stt.empty())
                return pt;

        }
        c = 1;
    }

    return pt;
}

int functione:: postfixevalu()
{
    int j = -1, i = 0;
    while (postfix[i] != '\0') {
        if (isalpha(postfix[i])) {
            return 0;
            break;
        }
        if (isdigit(postfix[i])) {
            posh(postfix[i] - '0');
            i++;
        }
        else if (postfix[i] == '_' && postfix[i] != '+' && postfix[i] != '-' && postfix[i] != '*' && postfix[i] != '/' && postfix[i] != '^') {
            int d, v;

            int c = pup();
            i++;
            d = postfix[i] - '0';
            v = d + 10 * c;
            posh(v);
            i++;
        }
        else if (postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/' || postfix[i] == '^') {
            op3 = pup();
            op4 = pup();
            switch (postfix[i]) {
                case '+':
                    {
                        va = op4 + op3;
                        posh(va);
                        break;
                    }
                case '-':
                    {
                        va = op4 - op3;
                        posh(va);
                        break;
                    }
                case '*':
                    {
                        va = op4 * op3;
                        posh(va);
                        break;
                    }
                case '/':
                    {
                        va = op4 / op3;
                        posh(va);
                        break;
                    }
                case '%':
                    {
                        va = ((int)op4)% ((int)op3);
                        posh(va);
                        break;
                    }
                case '^':
                    {
                        va = pow(op4, op3);
                        posh(va);
                        break;
                    }
            }

            i++;
        }
    }
    j++;
    infix[j] = '\0';
    int v = pup();
    return v;

}
//Class implemnt method to convert infix to postfix and all result possible combination
class infixtopostfix: public functione
{
    public:

    int get()
    {
        ta; cout << "Enter the infix expression: ";
        ta; cin >> infix;
        int v = check(infix);
        return v;
    }
    void put()
    {
        infixtopostfi();
        ta; cout << "Postfix expression is: " << postfix << endl;
        convert();
    }

    void convert()
    {
        int m = 0, k, i;
        while (m != 1) {
            ta; cout << "Enter 1:Convert postfix to infix" << endl;
            ta; cout << "Enter 2:Convert postfix to prefix" << endl;
            ta; cout << "Enter 3:Convert postfix evaluation" << endl;
            ta; cout << "Enter 4:Exit from here" << endl;
            ta; cout << "Enter your choice: " << endl;
            ta; cin >> k;
            switch (k) {
                case 1:
                    {
                        postfixtoinfi();
                        ta; cout << "Infix expression is: " << infix << endl;
                        break;
                    }
                case 2:
                    {
                        posttopreffi();
                        ta; cout << "Prefix expression is: " << prefix << endl;
                        break;
                    }
                case 3:
                    {
                        int v = postfixevalu();
                        ta; cout << "Evaluate value is: " << v << endl;
                        break;
                    }
                case 4:
                    {
                        m = 1;
                        break;
                    }
            }
        }
    }
};

//Class implemnt method to convert postfix to infix and all result possible combination
class postfixtoinfix:public functione
{

    public:
    void get()
    {
        ta; cout << "Enter the postfix expression: " << endl;
        ta; cin >> postfix;
    }
    void put()
    {
        postfixtoinfi();
        ta; cout << "Infix expression is: " << infix << endl;
        convert();
    }
    void convert()
    {
        int m = 0, k, v;
        while (m != 1) {
            ta; cout << "Enter 1:Convert infix to postfix " << endl;

            ta; cout << "Enter 2:Convert infix to prefix " << endl;
            ta; cout << "Enter 3:Convert infix evaluation " << endl;
            ta; cout << "Enter 4:Exit from here " << endl;
            ta; cout << "Enter 5:Enter your choice: " << endl;
            ta; cin >> k;
            switch (k) {
                case 1:
                    {
                        infixtopostfi();
                        ta; cout << "Postfix expression is: " << postfix << endl;
                        break;
                    }
                case 2:
                    {
                        infixtopreefi();
                        ta; cout << "Prefix expression is: " << prefix << endl;

                        break;
                    }
                case 3:
                    {
                        v = infixevalua();
                        ta; cout << "Infix value after evaluation is: " << v << endl;
                        break;
                    }
                case 4:
                    {
                        m = 1;
                        break;
                    }
            }
        }
    }

};

//Class implemnt method to convert infix to preffix and all result possible combination
class infixtopreefix:public functione
{


    public:
    void get()
    {
        ta; cout << "Enter the infix expression which prefix are find: " << endl;
        ta; cin >> infix;
        int v = check(infix);

        if (v == 1) {
            ta; cout << "Expression is wrong\n";
            ta; cout << "Press any key to continue....\n";
            getch();
        }
        else {
            infixtopreefi();
            ta; cout << "Prefix expression is: " << prefix << endl;
            convert();
        }
    }
    void convert()
    {
        int i, k, m = 0;
        while (m != 1) {
            ta; cout << "Enter 1:Convert prefix to infix " << endl;
            ta; cout << "Enter 2:Convert prefix to postfix " << endl;
            ta; cout << "Enter 3:Convert prefix evaluation " << endl;
            ta; cout << "Enter 4:Exit from here " << endl;
            ta; cout << "Enter 5:Enter your choice: " << endl;
            ta; cin >> k;
            switch (k) {
                case 1:
                    {
                        prefixtoinfi();
                        ta; cout << "Infix expression is: " << infix << endl;
                        break;
                    }
                case 2:
                    {
                        prefixtopostfi();
                        ta; cout << "Postfix expression is: " << postfix << endl;
                        break;
                    }
                case 3:
                    {
                        prefixevalu();

                        break;
                    }
                case 4:
                    {
                        m = 1;
                        break;
                    }
            }
        }
    }

};

//Class implemnt method to convert postfix to preffix and all result possible combination
class postfixtoprefix: public infixtopreefix
{

    public:
    void get()
    {
        ta; cout << "Enter the postfix expression: " << endl;
        ta; cin >> postfix;

        posttopreffi();
        ta; cout << "Prefix expression is: " << prefix << endl;
        convert();

    }
};

//Class implemnt method to convert prefix to infix and all result possible combination
class prefixtoinfix:public postfixtoinfix
{
    public:
    void get()
    {
        ta; cout << "Enter the prefix expression: " << endl;
        ta; cin >> prefix;
    }
    void put()
    {
        prefixtoinfi();
        ta; cout << "Infix expression is: " << infix << endl;
        int m = 0, k, v;
        convert();
    }
};

//Class implemnt method to convert prefix to postfix and all result possible combination
class prefixtopostfix:public infixtopostfix
{
    public:
    void get()
    {

        ta; cout << "Enter the prefix expression: " << endl;
        cin >> prefix;
        prefixtopostfi();
        ta; cout << "Postfix expression is:: " << postfix << endl;
        convert();
    }
};
void design()
{
    system("color 9");
    cout << endl << endl;
    ta; cout << "*************************************************************************************" << endl << endl;
    cout << "\n" << setw(100) << " POSTFIX-INFIX-PREFIX  CONVERSION AND EVALUATION  " << "\n" << endl << endl;
    ta; cout << "*************************************************************************************" << endl;
    sleep(4);
    cout << endl << endl;

    system("color 6");
    header;
    sleep(4);
    cout << endl << endl;

    system("color 2");

    ta; cout << "*************************************************************************************" << endl;
    sleep(4);
    cout << endl << endl;

    ta; cout << "Press any key to continue......" << endl;
    getch();
}


int main()
{
    design();
    int m = 0, l;
    infixtopostfix o1;
    infixtopreefix o2;
    postfixtoinfix o3;
    postfixtoprefix o4;
    prefixtoinfix o5;
    prefixtopostfix o6;
    while (m != 1) {
        system("CLS");
        header;
        cout << endl;
        ta; cout << "\t\tWELCOME" << endl << endl;
        ta; cout << "Enter 1:Convert  infix to postfix" << endl;
        ta; cout << "Enter 2:Convert  infix to prefix" << endl;
        ta; cout << "Enter 3:Infix evaluation" << endl;
        ta; cout << "Enter 4:Convert  postfix to infix" << endl;
        ta; cout << "Enter 5:Convert  postfix to prefix" << endl;
        ta; cout << "Enter 6:Postfix evaluation " << endl;
        ta; cout << "Enter 7:Convert  prefix to infix" << endl;
        ta; cout << "Enter 8:Convert  prefix to postfix " << endl;
        ta; cout << "Enter 9: Prefix evaluation " << endl;
        ta; cout << "Enter 10: Exit from here " << endl;
        ta; cout << "Enter your choice" << endl;
        cin >> l;

        switch (l) {
            case 1:
                {
                    system("CLS");
                    header;
                    int v = o1.get();
                    if (v == 1) {
                        ta; cout << "Expression is wrong \n";
                        ta; cout << "Press any key to continue....\n";
                        getch();
                    }
                    else
                        o1.put();

                    break;
                }
            case 2:
                {
                    system("CLS");
                    header;
                    o2.get();
                    break;
                }
            case 3:
                {
                    system("CLS");
                    header;
                    int a = o1.get();
                    if (a == 1) {
                        ta; cout << "Expression is wrong\n";
                        ta; cout << "Press any key to continue....\n";
                        getch();
                    }
                    else {
                        int v = o1.infixevalua();
                        ta; cout << " Infix evaluation value is: " << v << endl;
                        ta; cout << "Press any key to continue....";
                        getch();
                    }
                    break;
                }
            case 4:
                {
                    system("CLS");
                    header;
                    o3.get();
                    o3.put();

                    break;
                }
            case 5:
                {
                    system("CLS");
                    o4.get();
                    break;
                }
            case 6:
                {
                    system("CLS");
                    header;
                    o3.get();

                    int v = o3.postfixevalu();
                    ta; cout << "Postfix evaluation value is: " << v << endl;
                    ta; cout << "Press any key to continue....";
                    getch();
                    break;
                }
            case 7:
                {
                    system("CLS");
                    header
                    o5.get();
                    o5.put();

                    break;
                }
            case 8:
                {
                    system("CLS");
                    header;
                    o6.get();
                    break;
                }
            case 9:
                {
                    system("CLS");
                    header;
                    o5.get();
                    o5.prefixevalu();
                    break;
                }
            case 10:
                {
                    m = 1;
                    cout << "THANK YOU";
                    break;
                }
        }
    }
}
