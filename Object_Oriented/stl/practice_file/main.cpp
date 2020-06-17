#include <iostream>
#include<string.h>
#include<fstream>
using namespace std;

class Book{
private:
    int book_id;
    char title[20];
    float price;
public:
    Book()
    {
        book_id=0;
        strcpy(title,"no title");
        price=0;
    }
void getBookData();
void showBookData();
int storeBookData();
void viewAllBooks();
void searchBook(char *);
void deleteBook(char *);
void updateBook(char *);
          };
void Book::updateBook(char *t)
{
    fstream file;
    file.open("f1.txt",ios::in|ios::out|ios::ate|ios::binary);
    file.seekg(0);
    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
        if(!strcmp(t,title))
        {
         getBookData();
         file.seekp(file.tellp()-sizeof(*this));
         file.write((char*)this,sizeof(*this));
        }
    file.read((char*)this,sizeof(*this));

    }
      file.close();
}

void Book::deleteBook(char *t)
{
    ifstream fin;
    ofstream fout;
    fin.open("f1.txt",ios::in|ios::binary);


    fout.open("temp.txt",ios::app|ios::binary);
    fin.read((char *)this,sizeof(* this));
    //fout.write((char *)this, sizeof(*this));

    while(!fin.eof())  //!0=1   //!1=0
    {
         if(strcmp(t,title))
        {
        fout.write((char *)this, sizeof(*this));
        }
        fin.read((char *)this,sizeof(* this));
    }
    fin.close();
    fout.close();

    remove("f1.txt");
    rename("temp.txt","f1.txt");

}

void Book::searchBook(char *t)
{
    ifstream fin;
    fin.open("f1.txt",ios::in|ios::binary);
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {
        if( !strcmp(t,title) )
            showBookData();
    fin.read((char*)this,sizeof(*this));
    }
    fin.close();

}

void Book::viewAllBooks()
{
    ifstream fin;
    fin.open("f1.txt",ios::in|ios::binary);
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {
        showBookData();
        fin.read((char*)this,sizeof(*this));
    }

    fin.close();
}

int Book::storeBookData()
{
    ofstream fout;
    fout.open("f1.txt",ios::app|ios::binary);
    fout.write((char*)this,sizeof(*this));
    fout.close();
    return 1;

}

void Book::showBookData()
{
    cout<<"\n"<<book_id<<" "<<title<<" "<<price;
}

void Book::getBookData()
{
cout<<"Enter Book id, title and price";
cin>>book_id;
cin.ignore();
cin.getline(title,19);
cin>>price;
}
int menu()
{
    cout<<"\nchoose your option:";
    cout<<"\n1. Insert";
    cout<<"\n2. View";
    cout<<"\n3. Delete";
    cout<<"\n4. Update";
    cout<<"\n5. Search";
    cout<<"\n6. exit";

}

int main()
{
    Book b1;
    while(1)
    {
            menu();
            int choice;
            cin>>choice;
            switch(choice)
            {
                     case 1:
                    b1.getBookData();
                    b1.storeBookData();
                    cout<<"Inserted new book data";
                    cout<<"\nThe updated list is:\n";
                    b1.viewAllBooks();
                    break;
                case 2:
                    b1.viewAllBooks();
                    break;
                case 3:
                    char delete_title[20];
                    cout<<"\nEnter the title you want to delete: ";
                    cin>>delete_title;
                    b1.deleteBook(delete_title);
                    cout<<"\nafter deletation:\n";
                    b1.viewAllBooks();
                    break;
                case 4:
                    char update_title[20];
                    cout<<"\nEnter the title you want to update: ";
                    cin>>update_title;
                    b1.updateBook(update_title);
                    cout<<"\nafter update:\n";
                    b1.viewAllBooks();
                    break;

                case 5:
                    char search_title[20];
                    cout<<"\nEnter the title you want to search: ";
                    cin>>search_title;
                    b1.searchBook(search_title);
                    cout<<"\nafter update:\n";
                    b1.viewAllBooks();
                    break;

                case 6:
                    exit(0);
                    break;
            }



    }


    return 0;
}
