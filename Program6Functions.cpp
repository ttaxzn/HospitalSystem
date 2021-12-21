#include <iostream>
#include <deque>
#include "Program6.h"
using namespace std;


Queue::Queue()
{
deque <Patient> Queue1;
}

void Queue::AddPatient(deque <Patient> &queue1) // THIS IS DONE
{
string first;
string last;
string social;
char choice;
Patient patient1;
cout << "Enter first name:" << endl;
cin >> first;
cout << "Enter last name:" << endl;
cin >> last;
cout << "Enter social security number:" << endl;
cin >> social;
if(social.empty())
{
    cout << "Social security number must be entered to add new patient. Operation cancelled" << endl;
}
else
{
    patient1.firstname=first;
    patient1.lastname=last;
    patient1.socialsecurity=social;
    cout << endl;
    cout << "Confirm patient information (Y/N)" << endl;
    cout << "First name: " << patient1.firstname << endl;
    cout << "Last name: " << patient1.lastname << endl;
    cout << "Social security number: " << patient1.socialsecurity << endl;
    cin >> choice;
    if(choice=='Y' || choice=='y')
    {
    queue1.push_back(patient1);
    cout << "Patient successfully added!" << endl;
    }
    else
    {
        cout << "Cancelled patient add." << endl;
    }
}

}
void Queue::DisplayPatients(deque <Patient> &queue1) // THIS IS DONE
{
cout << "Queue of patients:" << endl;
cout << endl;
while(!queue1.empty())
{
    cout << queue1.front().firstname << " " << queue1.front().lastname << " " << queue1.front().socialsecurity << endl;
    cout << endl;
    queue1.pop_front();
}
if(queue1.empty())
{
    cout << "No patients waiting in the queue." << endl;
}

}

void Queue::CancelPatient(deque <Patient> &queue1)
{
string first;
string last;
string social;
cout << "Enter first name:" << endl;
cin >> first;
cout << "Enter last name:" << endl;
cin >> last;
cout << "Enter social security:" << endl;
cin >> social;
int i;
if(queue1.front().socialsecurity==social)
{
    queue1.pop_front();
}
if(queue1.back().socialsecurity==social)
{
    queue1.pop_back();
}
if(queue1.empty())
{
    cout << "No patients waiting in the queue." << endl;
}
}

void Queue::Operation(deque <Patient> &queue1)
{
string first;
string last;
string social;
cout << "Patient information for operation" << endl;
cout << "Enter first name:" << endl;
cin >> first;
cout << "Enter last name:" << endl;
cin >> last;
cout << "Enter social security:" << endl;
cin >> social;
int i;
if(queue1.front().socialsecurity==social)
{
    queue1.pop_front();
}
if(queue1.back().socialsecurity==social)
{
    queue1.pop_back();
}
if(queue1.empty())
{
    cout << "No patients waiting in the queue." << endl;
}
}

void Queue::AddPatientAtBeginning(deque <Patient> &queue1) // THIS IS DONE
{
string first;
string last;
string social;
char choice;
Patient patient1;
cout << "Enter first name:" << endl;
cin >> first;
cout << "Enter last name:" << endl;
cin >> last;
cout << "Enter social security number:" << endl;
cin >> social;
if(social.empty())
{
    cout << "Social security number must be entered to add new patient. Operation cancelled" << endl;
}
else
{
    patient1.firstname=first;
    patient1.lastname=last;
    patient1.socialsecurity=social;
    cout << endl;
    cout << "Confirm patient information (Y/N)" << endl;
    cout << "First name: " << patient1.firstname << endl;
    cout << "Last name: " << patient1.lastname << endl;
    cout << "Social security number: " << patient1.socialsecurity << endl;
    cin >> choice;
    if(choice=='Y' || choice=='y')
    {
    queue1.push_front(patient1);
    cout << "Patient successfully added!" << endl;
    }
    else
    {
        cout << "Cancelled patient add." << endl;
    }
}
}



void ExitDepartment()
{
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << endl;
MainMenu();

}



void MainMenu()
{

    cout << "Welcome to 201 Hospital" << endl;
    cout << "1: Heart Clinic (H)" << endl;
    cout << "2: Lung Clinic (L)" << endl;
    cout << "3: Plastic Surgery (P)" << endl;
    cout << "4: Exit (E)" << endl;
    cout << "Please enter your choice:" << endl; 
}

void HeartMenu()
{
    cout << "Welcome to department: Heart Clinic" << endl;
    cout << "Please enter your choice:" << endl;
    cout << "1. Add patient (P)" << endl;
    cout << "2. Add critically ill patient (CI)" << endl;
    cout << "3. Take out patient for operation (O)" << endl;
    cout << "4. Cancel patient (C)" << endl;
    cout << "5. List the queue of patients (Q)" << endl;
    cout << "6. Change department or exit (E)" << endl;
}

void LungMenu()
{
    cout << "Welcome to department: Lung Clinic" << endl;
    cout << "Please enter your choice:" << endl;
    cout << "1. Add patient (P)" << endl;
    cout << "2. Add critically ill patient (CI)" << endl;
    cout << "3. Take out patient for operation (O)" << endl;
    cout << "4. Cancel patient (C)" << endl;
    cout << "5. List the queue of patients (Q)" << endl;
    cout << "6. Change department or exit (E)" << endl;
}

void PlasticMenu()
{
    cout << "Welcome to department: Plastic Surgery Clinic" << endl;
    cout << "Please enter your choice:" << endl;
    cout << "1. Add patient (P)" << endl;
    cout << "2. Add critically ill patient (CI)" << endl;
    cout << "3. Take out patient for operation (O)" << endl;
    cout << "4. Cancel patient (C)" << endl;
    cout << "5. List the queue of patients (Q)" << endl;
    cout << "6. Change department or exit (E)" << endl;
}