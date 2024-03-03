#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

const int MaxStudent = 100;

class Students {

  private:
  string N[MaxStudent];
  string FN[MaxStudent];
  int R[MaxStudent], TF[MaxStudent], p[MaxStudent], bal[MaxStudent];
  float avg[MaxStudent], ObtMarks[MaxStudent], TotalMarks[MaxStudent];

  public:
  void EnterData(int totalstudent)
  {
  	
  	cout << "Enter Record of " << totalstudent << " students" << endl;
  	
    for (int i = 0; i < totalstudent; i++) {
      cout << "Student " << i + 1 << ":" << endl;
      cout << "Name: ";
      getline(cin, N[i]);// We can enter name with spaces

      cout << "Father's Name: ";
      getline(cin, FN[i]);

      int rollNo;
      int found = 0;

      do {
        cout << "Roll no: ";
        cin >> rollNo;
        cin.ignore();

        // Check if the entered roll number already exists
        for (int j = 0; j < i; j++) {
          if (rollNo == R[j]) {
            found = 1;
            cout << "Roll number already exists. Please enter a different roll "
                    "number."
                 << endl;
            break; // Exit the loop as soon as a duplicate is found
          } else {
            found = 0;
          }
        }

      } while (found == 1); // Repeat until a unique roll number is entered

      R[i] = rollNo;

      cout << "Obtain Marks: ";
      cin >> ObtMarks[i];
      cin.ignore();

      cout << "Total Marks: ";
      cin >> TotalMarks[i];
      cin.ignore();

      avg[i] = (ObtMarks[i] / TotalMarks[i]) * 100;

      cout << "Average: " << avg[i] << endl;

      cout << "Total Fee: ";
      cin >> TF[i];
      cin.ignore();

      cout << "Fee Paid: ";
      cin >> p[i];
      cin.ignore();
      bal[i] = TF[i] - p[i];

      cout << endl << endl;
      cout << "\t\tStudent " << i + 1 << " Data: " << endl << endl;
      cout << "Name: " << N[i] << endl;
      cout << "Father's Name: " << FN[i] << endl;
      cout << "Roll no: " << R[i] << endl;
      cout << "Obtain Marks: " << ObtMarks[i] << endl;
      cout << "Total Marks: " << TotalMarks[i] << endl;
      cout << "Average: " << avg[i] << endl;
      cout << "Total Fee: " << TF[i] << endl;
      cout << "Fee Paid: " << p[i] << endl;
      cout << "Balance: " << bal[i] << endl;

      system("pause"); // it pause program until any key is pressed
      system("cls"); // for clearing screen
    }
  }

  void ShowAllData(int totalstudent)
  {
    cout << "All Result: \n\n";
    for (int i = 0; i < totalstudent; i++) {
      cout << "Student: " << i + 1 << endl;
      cout << "Name: " << N[i] << endl;
      cout << "Father's Name: " << FN[i] << endl;
      cout << "Roll no: " << R[i] << endl;
      cout << "Obtain Marks: " << ObtMarks[i] << endl;
      cout << "Total Marks: " << TotalMarks[i] << endl;
      cout << "Average: " << avg[i] << endl;
      cout << "Total Fee: " << TF[i] << endl;
      cout << "Fee Paid: " << p[i] << endl;
      cout << "Balance: " << bal[i] << endl << endl;
    }

    system("pause");
    system("cls");
  }

  void PassStudentsData(int totalstudent)
  {
    int No = 1;
    cout << "Pass Students \n";

    for (int i = 0; i < totalstudent; i++) {

      if (avg[i] >= 50) {

        cout << "Student: " << No << endl;
        cout << "Name: " << N[i] << endl;
        cout << "Father's Name: " << FN[i] << endl;
        cout << "Roll no: " << R[i] << endl;
        cout << "Obtain Marks: " << ObtMarks[i] << endl;
        cout << "Total Marks: " << TotalMarks[i] << endl;
        cout << "Average: " << avg[i] << endl;
        cout << "Total Fee: " << TF[i] << endl;
        cout << "Fee Paid: " << p[i] << endl;
        cout << "Balance: " << bal[i] << endl << endl;
        No++;
      }
    }
  }

  void FailStudentsData(int totalstudent)
  {
    int No = 1;
    cout << "Fail Students \n";

    for (int i = 0; i < totalstudent; i++) {

      if (avg[i] < 50) {

        cout << "Student: " << No << endl;
        cout << "Name: " << N[i] << endl;
        cout << "Father's Name: " << FN[i] << endl;
        cout << "Roll no: " << R[i] << endl;
        cout << "Obtain Marks: " << ObtMarks[i] << endl;
        cout << "Total Marks: " << TotalMarks[i] << endl;
        cout << "Average: " << avg[i] << endl;
        cout << "Total Fee: " << TF[i] << endl;
        cout << "Fee Paid: " << p[i] << endl;
        cout << "Balance: " << bal[i] << endl << endl;
        No++;
      }
    }
  }
};

int main()
{
  Students RecordManager;

  int totalstudent;
  cout << "How many Records you want to enter: ";
  cin >> totalstudent;
  while (totalstudent > MaxStudent) {
    cout << "Can't Enter record greater than " << MaxStudent << " .\nEnter again: ";
    cin >> totalstudent;
  }
  system("pause");
  system("cls");

  cin.ignore();

  RecordManager.EnterData(totalstudent);
  RecordManager.ShowAllData(totalstudent);
  RecordManager.PassStudentsData(totalstudent);
  RecordManager.FailStudentsData(totalstudent);

  return 0;
}
