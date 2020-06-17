#include <iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class Book{
private:
    int book_id;
    char book_title[20];
    float book_price;
public:
    Book()
    {
        book_id=0;
        strcpy(book_title,"no title");
        book_price=0;
    }
    void getBookData();
    void showBookData();
    int storeBookData();
    void viewAllBooks();
    void searchBook(char * );
    void deleteBook(char *);
    void updateBook(char *);
          };

void Book::updateBook(char *t)
{
    fstream file;
    file.open("file.dat",ios::in|ios::out|ios::ate|ios::binary);
    file.seekg(0);
    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
        if(!strcmp(t,book_title))
        {
           getBookData();
           file.seekp(file.tellp()-sizeof(*this));
           file.write((char*)this,sizeof(*this));
        }
    file.read((char*)this,sizeof(*this));

    }

}

void Book::deleteBook(char *t)
{
    ofstream fout;
    ifstream fin;
    fin.open("file.dat",ios::in|ios::binary);
     if(!fin)
        cout<<"ERROR:404";
    else{
            fout.open("temp.dat",ios::out|ios::binary);
            fin.read((char*)this,sizeof(*this));
            while(!fin.eof())
            {
                if(strcmp(book_title,t))
                    fout.write((char*)this,sizeof(*this));
            fin.read((char*)this,sizeof(*this));
            }

            fin.close();
            fout.close();
            remove("file.dat");
            rename("temp.dat","file.dat");

        }
}
void Book::searchBook(char *t)
{
    int counter=0;
    ifstream fin;
    fin.open("file.dat",ios::in|ios::binary);
    if(!fin)
        cout<<"ERROR:404";
    else{
           fin.read((char*)this,sizeof(*this));
           while(!fin.eof())
           {
               if(!strcmp(t,book_title))
               {
                   showBookData();
                   counter++;
               }
               fin.read((char*)this,sizeof(*this));
           }
           if(counter==0)
                cout<<"No File exists in that name";
           fin.close();
        }
}

void Book::viewAllBooks()
{
    ifstream fin;
    fin.open("file.dat",ios::in|ios::binary);
    if (!fin)
        cout<<"File not found";
    else{
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
        showBookData();
            fin.read((char*)this,sizeof(*this));
         }
        fin.close();
    }
}

int Book::storeBookData()
{
    if(book_id==0 && book_price==0){
        cout<<"data is not initialized";
        return 0;
    }
    else{
      ofstream fout;
 fout.open("file.dat",ios::app|ios::binary);
 fout.write((char*)this,sizeof(*this));
 fout.close();
 return 1;
    }

}
void Book::getBookData()
{
    cout<<"Enter Book id, title and price:";
    cin>>book_id;
    cin.ignore();
    cin.getline(book_title,19);
    cin>>book_price;
}
void Book::showBookData()
{
    cout<<"\n"<<book_id<<" "<<book_title<<" "<<book_price;
}
int menu()
{
    int choice;
    cout<<"\nBook Management";
    cout<<"\n1. Insert Book records";
        cout<<"\n2. View Book records";
            cout<<"\n3. Search Book records";
                cout<<"\n4. Delete Book records";
                    cout<<"\n5. Update Book records";
                        cout<<"\n6. Exit";
        cout<<"\n\nEnter your choice";
        cin>>choice;
        return(choice);

}
int main()
{
Book b1;
while(1){
        system("cls");
    switch(menu())
    {


        case 1:
                b1.getBookData();
                b1.storeBookData();
                cout<<"record inserted";
                break;
        case 2:
                b1.viewAllBooks();
                break;
        case 3:
            char s_title[20];
                cout<<"\nEnter title to search";
                cin>>s_title;
                b1.searchBook(s_title);
                break;


        case 4:
                char d_title[20];
                cout<<"\nEnter title to delete";
                cin>>d_title;
                b1.deleteBook(d_title);
                break;


        case 5:
                char u_title[20];
                cout<<"Enter title to update";
                cin>>u_title;
                b1.updateBook(u_title);
                break;
        case 6:
            cout<<"BYE";
            getch();
                exit(0);
        default:
            cout<<"\nInvalid choice";
         }
         getch();
}
}
