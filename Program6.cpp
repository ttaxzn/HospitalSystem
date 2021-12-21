#include <iostream>
#include <queue>
#include <deque>
#include "Program6Functions.cpp"
using namespace std;



int main()
{

    MainMenu();
    Queue heart;
    deque <Patient> heart1;
    deque <Patient> lung1;
    deque <Patient> plastic1;
    Queue lung;
    Queue plastic;
    string choice;
    cin >> choice;
    string heartchoice;
    string lungchoice;
    string plasticchoice;
    while (choice!="E" || choice=="e")
    {
        if(choice=="H" || choice=="h")
        {
            HeartMenu();
            cin >> heartchoice;
                if(heartchoice=="P" || heartchoice=="p")
                {
                    heart.AddPatient(heart1);
                    continue;
                }
                if(heartchoice=="CI" || heartchoice == "ci")
                {
                    heart.AddPatientAtBeginning(heart1);
                    continue;
                }
                if(heartchoice=="O" || heartchoice == "o")
                {
                    heart.Operation(heart1);
                    continue;
                }
                if(heartchoice=="C" || heartchoice == "c")
                {
                    heart.CancelPatient(heart1);
                    continue;
                }
                if(heartchoice=="Q" || heartchoice =="q")
                {
                    heart.DisplayPatients(heart1);
                    continue;
                }
                if(heartchoice=="E" || heartchoice == "e")
                {
                    ExitDepartment();
                }
        }
        if(choice=="L" || choice == "l")
        {
            LungMenu();
            cin >> lungchoice;
                if(lungchoice=="P" || lungchoice=="p")
                {
                    lung.AddPatient(lung1);
                    continue;
                }
                if(lungchoice=="CI" || lungchoice == "ci")
                {
                    lung.AddPatientAtBeginning(lung1);
                    continue;
                }
                if(lungchoice=="O" || lungchoice=="o")
                {
                    lung.Operation(lung1);
                    continue;
                }
                if(lungchoice=="C" || lungchoice=="c")
                {
                    lung.CancelPatient(lung1);
                    continue;
                }
                if(lungchoice=="Q" || lungchoice=="q")
                {
                    lung.DisplayPatients(lung1);
                    continue;
                }
                if(lungchoice=="E" || lungchoice=="e")
                {
                    ExitDepartment();
                }

        }
        if(choice=="P" || choice=="p")
        {
            PlasticMenu();
            cin >> plasticchoice;
                if(plasticchoice=="P" || plasticchoice=="p")
                {
                    plastic.AddPatient(plastic1);
                    continue;
                }
                if(plasticchoice=="CI" || plasticchoice=="ci")
                {
                    plastic.AddPatientAtBeginning(plastic1);
                    continue;
                }
                if(plasticchoice=="O" || plasticchoice=="o")
                {
                    plastic.Operation(plastic1);
                    continue;
                }
                if(plasticchoice=="C" || plasticchoice=="c")
                {
                    plastic.CancelPatient(plastic1);
                    continue;
                }
                if(plasticchoice=="Q" || plasticchoice=="q")
                {
                    plastic.DisplayPatients(plastic1);
                    continue;
                }
                if(plasticchoice=="E" || plasticchoice=="e")
                {
                    ExitDepartment();
                }
        }

        cin >> choice;
    }
    return 0;


}

