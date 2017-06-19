/**********************************************************************
 This program will allow the user to select whether the patient was
 an inpatient or outpatient admit to the hospital. The program will
 verify if the patient was admitted as an inpatient or an outpatient.
 Based on the inpatient choice, the program will utilize functions for
 number of days in the hospital in conjunction with the global constant
 daily rate, service charges, and medication charges to calculate and
 display the total inpatient hospital bill. If the user selects the
 option for outpatient then the program will ask only for the service
 and medication fees before calculating and displaying the total
 outpatient hospital bill. In total, this program contains and uses 5
 different functions with 2 being overloaded functions to calculate the
 total hospital bills for both inpatients and outpatients.
 **********************************************************************/

#include<iostream>
#include<iomanip>

//Namespaces
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::showpoint;
using std::setprecision;
using std::setw;

//Function prototypes
int getInpatientDays();
double getServiceCharges();
double getMedicationCosts();
void getInpatientHospitalBill(int daysInHospital, double serviceCharges, double medicationCharges);
void getOutpatientHospitalBill(double serviceCharges, double medicationCharges);

//Global constant for inpatient daily rate
double HOSPITAL_INPATIENT_DAILY_RATE = 50.00;


int main()
{
    int daysInHospital = 0;                     //Number of days in hospital
    int choice = 0;                             //Choice for inpatient or outpatient admittance
    double serviceCharges = 0.0,                //Service fees for lab tests, screenings, equipment use, etc.
           medicationCharges = 0.0;             //Medication fees for patient

    //Input validation for patient type
    do
    {
        //Get info for inpatient or outpatient
        cout << "Please select patient status: (1 or 2)" << endl;
        cout << "1.Inpatient \n2.Outpatient" << endl;
        cin >> choice;

        //Conditions for inpatient selection
        switch(choice)
        {
                //Condition for inpatient
            case 1:
            {
                //Get inpatient days using function
                daysInHospital = getInpatientDays();

                //Get service fees using function
                serviceCharges = getServiceCharges();

                //Get hospital medication costs using function
                medicationCharges = getMedicationCosts();

                //Calculate total cost of hospital bill passing arguments into overloaded inpatient function
                getInpatientHospitalBill(daysInHospital, serviceCharges, medicationCharges);

                //Terminate
                break;
            }
                //Condition for outpatient
            case 2:
            {
                //Get servide fees using function
                serviceCharges = getServiceCharges();

                //Get hospital medication costs using function
                medicationCharges = getMedicationCosts();

                //Get total cost of hospital bill passing arguments into overloaded outpatient function
                getOutpatientHospitalBill(serviceCharges, medicationCharges);

                //Terminate
                break;
            }
        }
    }
    while(choice != 1 && choice != 2);

    return 0;
}

/********************* getInpatientDays function **********************
This function will ask for and return the total number of days that the
patient stayed as an inpatient in the hospital.
***********************************************************************/
int getInpatientDays()
{
    int daysInHospital = 0;         //Number of days in hospital

    //Get number of days in hospital
    cout << "How many days did the patient stay in the hospital?" << endl;
    cin >> daysInHospital;

    //Input validation for days
    while(daysInHospital <= 0)
    {
        cout << "Please enter a valid number of days greater than 0." << endl;
        cin >> daysInHospital;
    }

    return daysInHospital;
}

/******************** getServiceCharges function ************************
This function will compute and return all of the service fee chargers for
the inpatient and return this value back to main.
*************************************************************************/
double getServiceCharges()
{
    int choice = 0;                     //Choice from menu
    double labTests = 0.0,              //Lab fees
           drugScreen = 0.0,            //Drug screen fees
           equipmentUse = 0.0,          //Equipment use fees
           utilityService = 0.0;        //Utility service fees
    double totalCostOfServices = 0.0;   //Total cost of hospital services

    //Show list of available services to select
    do
    {
        cout << "Select from the list which service fees to apply. (Enter 0 to quit)" << endl;
        cout << "1. Lab Tests\n2. Drug Screening \n3. Equipment use\n4. Utility services" << endl;

        //Get choice from user
        cin >> choice;

        //Condition for each selected choice
        switch(choice)
        {
            case 1:         //Choice == 1
            {
                //Get total cost of lab services
                cout << "Please enter the total cost of the lab tests." << endl;
                cin >> labTests;

                //Input validation
                while(labTests < 0)
                {
                    //Get valid value
                    cout << "Please enter a valid number greater than or equal to $0." << endl;
                    cin >> labTests;
                }
                break;
            }
            case 2:         //Choice == 2
            {
                //Get total cost of drug screens
                cout << "Please enter the total cost of the drug screening(s)." << endl;
                cin >> drugScreen;

                //Input validation
                while(drugScreen < 0)
                {
                    //Get valid value
                    cout << "Please enter a valid number greater than or equal to $0." << endl;
                    cin >> drugScreen;
                }
                break;
            }
            case 3:         //Choice == 3
            {
                //Get total cost of equipment use
                cout << "Please enter the total costs of equipment usage." << endl;
                cin >> equipmentUse;

                //Input validation
                while(equipmentUse < 0)
                {
                    //Get valid value
                    cout << "Please enter a valid number greater than or equal to $0." << endl;
                    cin >> equipmentUse;
                }
                break;
            }
            case 4:         //Choice == 4
            {
                //Get total cost of utility services
                cout << "Please enter the total costs of utilities services." << endl;
                cin >> utilityService;

                //Input validation
                while(utilityService < 0)
                {
                    //Get valid value
                    cout << "Please enter a valid number greater than or equal to $0." << endl;
                    cin >> utilityService;
                }
                break;
            }
            //Terminate by entering "0"
            case 0:
                break;
        }
    }
    while(choice != 0);

    //Return the total cost of all hospital services back to main function
    return totalCostOfServices = (labTests + drugScreen + equipmentUse + utilityService);
}

/*************************** getMedicationCosts function ***************************
This function will compute and return the total costs of all medications used by the
patient while in the hospital.
************************************************************************************/
double getMedicationCosts()
{
    double medicineFees;        //Cost of medicine

    //Get total cost of medicine
    cout << "Please enter the total cost of the medication used by the patient." << endl;
    cin >> medicineFees;

    //Input validation for medicine fees
    while(medicineFees < 0)
    {
        //Get valid medicine fees greater than or equal to 0
        cout << "Please enter a valid number greater than or equal to $0." << endl;
        cin >> medicineFees;
    }

    return medicineFees;
}

/******************** getInpatientHospitalBill function ****************************
This is an overloaded function that will accept the following arguments in order to
calculate the total cost of the hospital bill: the number of days the patient is in
the hospital, the total cost of service charges, and the total costs of medication.
The function will display all of the fees and add them together to determine total
cost of the inpatient hospital bill.
************************************************************************************/
void getInpatientHospitalBill(int daysInHospital, double serviceCharges, double medicationCharges)
{
    double inpatientHospitalBill = 0.0;           //Total cost of inpatient hospital bill

    //Format dollar output to 2 decimal places
    cout << fixed << showpoint << setprecision(2);

    //Show days in hospital for inpatient
    cout << "Days in hospital: " << setw(4) << daysInHospital << endl;

    //Show service charges for inpatient
    cout << "Service fees:" << setw(9) << "$" << serviceCharges << endl;

    //Show medication costs for inpatient
    cout << "Medication fees:" << setw(6) << "$" << medicationCharges << endl;

    //Calculate total inpatient hospital bill
    inpatientHospitalBill = (static_cast<double>(daysInHospital) * HOSPITAL_INPATIENT_DAILY_RATE) + serviceCharges + medicationCharges;

    //Show total inpatient hospital bill
    cout << "Total hospital bill: $" << setw(2) << inpatientHospitalBill << endl;
}

/************************* getOutpatientHospitalBill function ***************************
This function will accept the following arguments in orde to calculate the total cost of
the outpatient hospital bill: Total cost of service fees and the total cost of medication.
The function will display the cost of these charges, calculate the total cost of the
outpatient bill, and display this total to the user.
*****************************************************************************************/
void getOutpatientHospitalBill(double serviceCharges, double medicationCharges)
{
    double outpatientHospitalBill = 0.0;            //Total cost of outpatient hospital bill

    //Show service charges for outpatient
    cout << "Service fees:" << setw(9) << "$" << serviceCharges << endl;

    //Show medication costs for outpatient
    cout << "Medication fees:" << setw(6) << "$" << medicationCharges << endl;

    //Calculate total outpatient hospital bill
    outpatientHospitalBill = serviceCharges + medicationCharges;

    //Show total outpatient hospital bill
    cout << "Total hospital bill: $" << outpatientHospitalBill << endl;
}
