#include <iostream>

using namespace std;

const int maximum = 50;
struct stack
{
    
    int top = -1;
    char isi[maximum];
};

stack penampung;
bool isEmpty();
bool isFull();
void push(char data);
char pop(char data);
char massage[] = "H**AL***O**AP***AK*A**B*****A*R****";
int top = sizeof(massage)-2;
void membenahikata();
void print();

int main()
{

    membenahikata();
    print();    
    cout << endl ;

    return 0;
}

bool isEmpty()
{

    return penampung.top==-1;
}

bool isFull()
{

    return penampung.top==maximum-1;

}


char pop(char data)
{
    char sp = data;
    
    if (top>-1)
    {
        
        massage[top] = '\0';
        --top;
    }
    else
    {
        penampung.isi[penampung.top] = '\0';
        --penampung.top;
    }

    return sp;
}

void push(char data)
{

    if (data!='*')
    {
        ++penampung.top;
        penampung.isi[penampung.top] = data; 
    }

}

void membenahikata()
{
    for (int i = sizeof(massage)-2 ; i >= 0 ; --i)
    {
        if (isEmpty() || isFull()==false)
        {
            push(pop(massage[i]));
        }
        
    }
}

void print()
{
    void membenahikata();
    for (int i = penampung.top ; i >= 0 ; --i)
    {
        cout << pop(penampung.isi[i]);
    }
}