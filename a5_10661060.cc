#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
struct Student
{
    int IdNumber[5];
    string name[5];
    int age[5];
    string gender[5];
    double score[5];
    string grade[5];

};

int main()
{
    double totalScores = 0;
    int totalAge = 0;
    int maleCount = 0;
    int femaleCount = 0;
    double averageScore = 0;
    double averageAge = 0;
    int numStudents;
    double myscore;
    Student faisal;

    for (int i = 0; i<numStudents;i++)
    {
        cout<< "Enter your ID: ";
        cin>>faisal.IdNumber[i];
        cout << "Enter your Name: ";
        cin>> faisal.name[i];
        cout<< "Enter your Age: " ;
        cin>> faisal.age[i];
        cout <<"Enter your Gender: ";
        cin >>faisal.gender[i];
        cout << "Enter Score: ";
        cin >> faisal.score[i];

        if(faisal.score[i]>80 && faisal.score[i]<=100)
        {
            faisal.grade[i]="A";

        } else if(faisal.score[i]>=70 && faisal.score[i]<80)
        {
            faisal.grade[i] = "B";
        } else if(faisal.score[i]>=60 && faisal.score[i]<70)
        {
            faisal.grade[i] = "C" ;
        } else if(faisal.score[i]>=50 && faisal.score[i]<60) {
        faisal.grade[i]= "D";
        }   else if(faisal.score[i]>=40 && faisal.score[i]<=50)
        {
            faisal.grade[i] = "E";
        }    else  {faisal.grade[i]= "F";
        }
        cout <<endl;
        if (faisal.grade[i]=="male")
        {
            maleCount++;
        }
else if(faisal.gender[i]=="female")  {
    femaleCount++;
}
       cout << "*************************************************************************************************" <<endl;
cout << " ID" << "      " << "Name " << "       " << "Age" << "             " << "Gender " << "         " << "Score" << "        " << "Grade " << endl;

cout << "************************************************************************************************" << endl;
    for (int i=0;i <numStudents; i++)
    {

        totalScores=totalScores+faisal.score[i];

           totalAge= totalAge+faisal.age[i];

          averageScore= totalScores/numStudents;

           averageAge= totalAge/numStudents;

            cout << faisal.IdNumber[i] << "/t" << faisal.name[i] << "/t" << faisal.age[i] << "/t" << faisal.gender[i];
        cout << "/t" << faisal.score[i] << "/t" << faisal.grade[i] ;

       cout << endl;
    }



    cout << "The average age is:  " << averageAge << endl;

    cout << "The average score is: " << averageScore << endl;

    cout << "The number of females are: " << femaleCount << endl;

    cout << "The number of males are: " << maleCount << endl;

    ofstream A_student;
    A_student.open("Mystudents.txt", ios:: app);

    A_student<< "*************************************************************************************************" <<endl;

    A_student << " ID" << "  " << "Name " << "     " << "Age" << "      " << "Gender " << "     " << "Score" << "       " << "Grade " << endl;

    A_student <<  "************************************************************************************************" << endl;

     for (int i=0;i <numStudents; i++)
    {

          totalScores=totalScores+faisal.score[i];

           totalAge= totalAge+faisal.age[i];

          averageScore= totalScores/numStudents;

           averageAge=totalAge/numStudents;

            A_student << faisal.IdNumber[i] << "\t" << faisal.name[i] << "\t" << faisal.age[i] << "\t" << faisal.gender[i];
        A_student << "\t" << faisal.score[i] << "\t" << faisal.grade[i] ;

       A_student << endl;
    }

     A_student << "The average age is:  " << averageAge << endl;

    A_student << "The average score is: " << averageScore << endl;

   A_student << "The number of females are: " << femaleCount << endl;

    A_student << "The number of males are: " << maleCount << endl;

    A_student.close();

    }
    return 0;
}
