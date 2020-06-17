#include <iostream>
#include<string.h>
using namespace std;

class STUDENT{
private:
    int student_id;
    char student_name[20];

    class student_address{
                            private:     //address class er pvt variable k shudhu address class er public e access korte parbe, not student class er public
                                    int House_number;
                                    char street[50];
                                    char thana[50];
                                    char district[50];
                                    int zip_code;
                            public:
                                void set_student_address(int H, char *s, char *t, char *d, int z)
                                {
                                    House_number=H;
                                    strcpy(street,s);
                                    strcpy(thana,t);
                                    strcpy(district,d);
                                    zip_code=z;
                                }
                                void show_student_address()
                                {
                                    cout<<"House Number"<<House_number<<endl;
                                    cout<<"Street Name"<<street <<" "<<endl;
                                    cout<<"Thana"<<thana<<" " <<endl;
                                    cout<<"District"<<district<<" " <<endl;
                                    cout<<"Zip Code"<<zip_code<< " "<<endl;
                                }

                         };
student_address add;
public:
    void set_student_id(int sid)
    {
        student_id=sid;
    }
    void set_student_name(char *name)
    {
        strcpy(student_name,name);
    }
     void set_student_address(int H, char *s, char *t, char *d, int z)
     {
         add.set_student_address(H,s,t,d,z);
     }

                 void show_student_database()
                                {
                                    cout<<"Student id "<<student_id<<endl;
                                    cout<<"Name "<<student_name<<endl;
                                //    cout<<"Student ID: "<<student_id<<" " <<endl;
                                  //  cout<<"Student Name"<<student_address<<" " <<endl;
                                    add.show_student_address();
                                }
             };

int main()
{
    STUDENT s1;
    s1.set_student_id(404);
    s1.set_student_name("Golam");
    s1.set_student_address(531,"West Tejtury Bazar","Tejgaon","Dhaka",1215);
    s1.show_student_database();
    return 0;
}
