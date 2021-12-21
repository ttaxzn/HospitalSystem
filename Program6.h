#include <iostream>
using namespace std;

struct Patient
{
string firstname;
string lastname;
string socialsecurity;
};


class Queue {

    public:
    Queue();
    void AddPatient(deque <Patient> &queue1);
    void AddPatientAtBeginning(deque <Patient> &queue1);
    void CancelPatient(deque <Patient> &queue1);
    void DisplayPatients(deque <Patient> &queue1);
    void Operation(deque <Patient> &queue1);

    private:

    int queuesize;



};

void MainMenu();

void HeartMenu();

void LungMenu();

void PlasticMenu();

void ExitMenu();

