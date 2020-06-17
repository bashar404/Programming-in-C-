#include <iostream>
#include<fstream>
using namespace std;
void copy_file(char* f1, char* f2)
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

}
int main()
{
copy_file("abc.txt","abb.txt");
}
