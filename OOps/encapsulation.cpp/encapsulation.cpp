#include <iostream>
#include <string>

using namespace std;

class Company {
private:
    string companyName;
    double averageSalary;

public:
    // Constructor
    Company(const string& name, double avgSalary){

         companyName= name;
         averageSalary = avgSalary ;
    }

    // Getter method to retrieve the company name
    string getCompanyName() const {
        return companyName;
    }

    // Getter method to retrieve the average salary
    double getAverageSalary() const {
        return averageSalary;
    }

    // Setter method to update the average salary
    void setAverageSalary(double salary) {
        // Add validation if necessary
        averageSalary = salary;
    }
};

int main() {
    // Create a Company object
    Company myCompany("ABC Corp", 50000);

    // Display initial company information
    cout << "Company Name: " << myCompany.getCompanyName() << endl;
    cout << "Average Salary: $" << myCompany.getAverageSalary() << endl;

    // Update the average salary using the setter method
    myCompany.setAverageSalary(55000);

    // Display updated company information
    cout << "\nUpdated Average Salary: $" << myCompany.getAverageSalary() << endl;

    return 0;
}
