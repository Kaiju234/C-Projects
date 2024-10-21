#include <iostream>
#include <fstream>
#include <iomanip>

// Function Prototypes
double Input_Validation(double);
double Charge_Calculations(int, double, double, double); // For Inpatient
double Calculation_Charges(double, double); // Outpatient
void   displayMenu();

int main() 
{
    char patientType;
    double Charges_Total = 0;
    std::ofstream outFile("ShahRajHospAdm.txt");

    // Display The Interface to Get the Type of Patient
    displayMenu();
    std::cin >> patientType; 

    //Validate the Input and Get the Patient Type
    while (patientType != 'I' && patientType != 'i' && patientType != 'O' && patientType != 'o') 
    {
      std::cout << "Invalid Input. Please Enter I for Inpatient or O for Outpatient: ";
      std::cin >> patientType;
    } 

    if (patientType == 'I' || patientType == 'i') {
        // Input for Inpatient 
        int days;
        double Daily_Rate, Services, Medication;

        std::cout << "How Many Days Staying in The Hospital ?: ";
        std::cin >> days;
        days = Input_Validation(days);

        std::cout << "What is the Daily Room Rate: $";
        std::cin >> Daily_Rate;
        Daily_Rate = Input_Validation(Daily_Rate);

        std::cout << "What are Lab Fees and Other Service Charges: $";
        std::cin >> Services;
        Services = Input_Validation(Services);

        std::cout << "What are Medication Charges: $";
        std::cin >> Medication;
        Medication = Input_Validation(Medication);

        // Calculate Total Charges for Inpatient
        Charges_Total = Charge_Calculations(days, Daily_Rate, Services, Medication);

        // Output to The Screen 
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        std::cout << " Tokyo Hospital Bill For The Inpatient\n";
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        std::cout << "Room Charges                    $" << std::fixed << std::setprecision(2) << days * Daily_Rate << std::endl;
        std::cout << "Lab & Services                  $" << Services << std::endl;
        std::cout << "Medication                      $" << Medication << std::endl;
        std::cout << "Total Charges                   $" << Charges_Total << std::endl;
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

        //Write To File
        outFile << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        outFile << " Tokyo Hospital Bill For The Inpatient\n";
        outFile << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        outFile << "Room Charges                    $" << std::fixed << std::setprecision(2) << days * Daily_Rate << std::endl;
        outFile << "Lab & Services                  $" << Services << std::endl;
        outFile << "Medication                      $" << Medication << std::endl;
        outFile << "Total Charges                   $" << Charges_Total << std::endl;
        outFile << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

        } else if (patientType == 'O' || patientType == 'o') {
            // Input for Outpatient
         double Services, Medication;

         std::cout << "What are the Lab Fees and Other Service Charges: $";
         std::cin  >> Services;
         Services = Input_Validation(Services);

         std::cout << "What are Medication Charges: $";
         std::cin  >>  Medication;
         Medication = Input_Validation(Medication);

         // Calculate Total Charges For Outpatient
         Charges_Total = Calculation_Charges(Services, Medication);

         // Display The Output
         std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
         std::cout << " Tokyo Hospital Bill For The Outpatient\n";
         std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
         std::cout << "Labs & Services           $" << Services << std::endl;
         std::cout << "Medication                $" << Medication << std::endl;
         std::cout << "Total Charges             $" << Charges_Total << std::endl;
         std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"; 

        // Write To File
         outFile << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
         outFile << "  Tokyo Hospital Bill For The Outpatient   \n";
         outFile << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
         outFile << "Labs & Services           $" << Services << std::endl;
         outFile << "Medication                $" << Medication << std::endl;
         outFile << "Total Charges             $" << Charges_Total << std::endl;
         outFile << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"; 

        }
        // Close the Output File
        outFile.close();
        
        return 0;
}   

// Funciton to Validate Input Thats Not Less Than Zero
double Input_Validation(double value) {
    while (value < 0) {
        std::cout << "Invalid input. Enter an Amount Greater Than or Equal To Zero : ";
        std::cin  >> value;

    }
    return value;
}

// Overloaded function Number 1 is use to calculate total charges for inpatient
double Charge_Calculations(int days, double Daily_Rate, double Services, double Medication) {
    return (days * Daily_Rate ) + Services + Medication;
}

// Overloaded function Number 2 is use to calculate total charges for outpatient
double Calculation_Charges(double Services, double Medication) {
    return Services + Medication;
}

// Function to display the Tokyo Hospital Billing Menu Interface
void displayMenu() {
    std::cout << "Welcome To Tokyo Hospital Billing System \n";
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    std::cout << "This program will calculate patient hospital charges.\n";
    std::cout << "Enter I for inpatient or O for outpatient: ";
}
