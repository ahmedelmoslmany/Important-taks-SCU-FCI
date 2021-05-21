#include <iostream>
using namespace std;
int numOfstudent = 0, numOfoperation, i = 0, foundOrnot, EditId, j = 0, avrMath1 = 0, avrMath2 = 0, avrIS = 0, avrCS = 0, avrPL = 0;

class Score{
public:
    int Score[5];

};

class Date{
public:
    int D;
    int M;
    int Y;
};

class Student : public Score , public Date{
private:
    int ID;
    string FirstName;
    string LastName;
    char Gender;
public:
    void setId(int id)
    {
        ID = id;
    }
    void setFirst(string f_name)
    {
        FirstName = f_name;
    }
    void setLast(string l_name)
    {
        LastName = l_name;
    }
    void setGender(char gender)
    {
        Gender = gender;
    }
    void setDay(int day)
    {
        D = day;
    }
    void setMonth(int month)
    {
        M = month;
    }
    void setYear(int year)
    {
        Y = year;
    }
    void setScore0(int score0)
    {
        Score[0] = score0;
    }
    void setScore1(int score1)
    {
        Score[1] = score1;
    }
    void setScore2(int score2)
    {
        Score[2] = score2;
    }
    void setScore3(int score3)
    {
        Score[3] = score3;
    }
    void setScore4(int score4)
    {
        Score[4] = score4;
    }


    //Getters
    int getId(){
        return ID;
    }
    string getFirst(){
        return FirstName;
    }
    string getLast(){
        return LastName;
    }
    char getGender(){
        return Gender;
    }
    int getDay(){
        return D;
    }
    int getMonth(){
        return M;
    }
    int getYear(){
        return Y;
    }
    int getScore0(){
        return Score[0];
    }
    int getScore1(){
        return Score[1];
    }
    int getScore2(){
        return Score[2];
    }
    int getScore3(){
        return Score[3];
    }
    int getScore4(){
        return Score[4];
    }
    void Add();
    void Search();
    void Print();
    void AvrScore();
};
Student st[100];
main()

{

    do
    {
        printf("1-Add Student to DB\n");
        printf("2-Search for Student\n");
        printf("3-Print\n");
        printf("4-Statistics\n");
        printf("5-Edit\n");
        printf("0-Exit\n");

        printf("Enter Your choice: ");

        cin >> numOfoperation;

        if (numOfoperation == 1) // Add
        {
            st->Add();
        }
        else if (numOfoperation == 2) //search
        {
            st->Search();
        }
        else if (numOfoperation == 3) // Print
        {
            st->Print();
        }
        else if (numOfoperation == 4) //AvrScore
        {
            st->AvrScore();
        }

        else if (numOfoperation == 0)
        {
            printf("End the programe...Thanks to use our program, Sir\n Writted by Ahmed Sami Elmoslmany");
            break;
        }
        else if (numOfoperation != 0 || numOfoperation != 1 || numOfoperation != 2 || numOfoperation != 3 || numOfoperation != 4)
        {
            printf("Wrong choice...\n");
            printf("Choice again...\n\n");
            continue;
        }

    } while (1);

    return 0;
}

void Student::Add()
{
    int id, d, m, y, score0, score1, score2, score3, score4;
    string firstname, lastname;
    char gender;
    numOfstudent++;
    for (; i < numOfstudent; i++)
    {
        cout << "Enter Student ID: ";
        cin >> id;
        st[i].setId(id);

        cout << "Enter Student First name: ";
        cin >> firstname;
        st[i].setFirst(firstname);

        cout << "Enter Student Last name: ";
        cin >> lastname;
        st[i].setLast(lastname);

        cout << "Enter Student Date of birth (Day, Month, Year): ";
        cin >> d >> m >> y;
        st[i].setDay(d);
        st[i].setMonth(m);
        st[i].setYear(y);

        cout << "Enter Student gender (M/F): ";
        cin >> gender;
        st[i].setGender(gender);

        cout << "Enter Student Score in Math1: ";
        cin >> score0;
        st[i].setScore0(score0);

        cout << "Enter Student Score in Math2: ";
        cin >> score1;
        st[i].setScore1(score1);

        cout << "Enter Student Score in Intro to CS: ";
        cin >> score2;
        st[i].setScore2(score2);

        cout << "Enter Student Score in Intro to IS: ";
        cin >> score3;
        st[i].setScore3(score3);

        cout << "Enter Student Score in Intro to PL: ";
        cin >> score4;
        st[i].setScore4(score4);
    }
}

//Search
void Student::Search()
{
   

    cout<<"Enter Student ID to search: ";
    cin>>foundOrnot;
     for(i=0; i<numOfstudent; i++){
        if (foundOrnot == st[i].getId())
        {
            cout << "ID: " << st[i].getId() << endl;
            cout << "Student Name: " << st[i].getFirst() << " " << st[i].getLast() << endl;
            cout << "Student Birth : " << 2020 - st[i].getYear() << endl;
            cout<<"Student Gender: "<< st[i].getGender()<<endl;
            cout<<"Score in Math1: "<< st[i].getScore0()<<endl;
            cout<<"Score in Math2: "<< st[i].getScore1()<<endl;
            cout << "Score in Intro to CS: " << st[i].getScore2() << endl;
            cout<<"Score in Intro to IS: "<< st[i].getScore3()<<endl;
            cout << "Score in Intro to PL: " << st[i].getScore4() << endl;
             cout << endl
                 << endl;
            break;
        }
     }

     if (foundOrnot != st[i].getId())
     {
         cout<<"not found"<<endl<<endl;
     }
}

// Add
void Student::Print()
{

    for (i = 0; i < numOfstudent; i++)
    {
        cout << "ID: " << st[i].getId() << endl;
        cout << "Student Name: " << st[i].getFirst() << " " << st[i].getLast() << endl;
        cout << "Student Birth : " << 2020 - st[i].getYear() << endl;
        cout<<"Student Gender: "<< st[i].getGender()<<endl;
        cout<<"Score in Math1: "<< st[i].getScore0()<<endl;
        cout<<"Score in Math2: "<< st[i].getScore1()<<endl;
        cout << "Score in Intro to CS: " << st[i].getScore2() << endl;
        cout<<"Score in Intro to IS: "<< st[i].getScore3()<<endl;
        cout << "Score in Intro to PL: " << st[i].getScore4() << endl;
        cout << endl
             << endl;
    }
}

//Avrage of Scores
void Student::AvrScore(){
    
        
            cout<<"Total number of student in DataBase: "<< numOfstudent<<endl;
            
            for(i=0; i<numOfstudent; i++){
                avrMath1 += st[i].getScore0();
                avrMath2 += st[i].getScore1();
                avrCS += st[i].getScore2();
                avrIS += st[i].getScore3();
                avrPL += st[i].getScore4();
            }
            cout<<"Average students score in Math1: "<< avrMath1 / numOfstudent<<endl;
            cout << "Average students score in Math2: " << avrMath2 / numOfstudent << endl;
            cout <<"Average students score in Intro to CS: "<< avrCS / numOfstudent<< endl;
            cout <<"Average students score in Intro to IS: "<< avrIS / numOfstudent<< endl;
            cout << "Average students score in Intro to PL: " << avrPL / numOfstudent << endl;

            avrPL = 0;
            avrMath2 = 0;
            avrMath1 = 0;
            avrIS = 0;
            avrCS = 0;
            cout << endl
                 << endl;
}