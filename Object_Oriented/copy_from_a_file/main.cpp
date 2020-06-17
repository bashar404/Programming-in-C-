#include <iostream>
#include<fstream>
using namespace std;

void copy_from_file(char* f1, char* f2)
{
    ifstream fin;
    ofstream fout;
    char ch;
    fin.open(f1);
    fout.open(f2);
    ch=fin.get();
    while(!fin.eof())
    {
        fout<<ch;
        ch=fin.get();
    }
    fin.close();
    fout.close();

}

int main()
{
    copy_from_file("abc.txt","aaa.txt");
    return 0;
}
