#include <iostream>
#include <string>

using namespace std;

unsigned short height;
//declaration of height- positive only

unsigned short ReadPersonAge() {
	//declaration of age- positive only
	//returns age

	std::cout << "Age: ";
	unsigned short age;
	std::cin >> age;
	 return age;
}

std::string ReadPersonName() {
	//declaration of name
	//returns name

	std::cout << "Name: ";
	std::string name = "";
	std::cin >> name;
	return name;
}

void ReadPersonHeigth(){
	//writes the height to the variable

	std::cout << "Height: ";
	std::cin >> height;
}

void ReadPersonWeigth(unsigned short& weight) {
	//writes the weight to the variable, input is positive only 

	std::cout << "Weight: ";
	std::cin >> weight;
}

void ReadPersonSalary(double* salary) {
	//writes salary(type: double) to thi salary link

	std::cout << "Salary: ";
	std::cin >> *salary;
}

void ReadPersonData(std::string& name, unsigned short& age,double& salary) {
	//reads personal data, input is name- string, age- positive only and salary of double type

	std::cout << "Enter your data: \n";
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);

}

void ReadPersonData(std::string& name, unsigned short& age, unsigned short& height, unsigned short& weight) {
	//overloaded personal data reader, input is name- string, age- positive only, height- positive only, weight- positive only

	std::cout << "Enter your data: \n";
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonHeigth();
	height = ::height;
	ReadPersonWeigth(weight);

}

void WritePersonData(unsigned short age, const std::string& name, const std::string&  height = "", const std::string& weight = "", const std::string& salary = "") {
	//writes personal data, input is name- string, age- positive only, height- positive only, weight- positive only and salary of double type 

	std::cout << "Age: " << age << "\n";
	std::cout << "Name: " << name << "\n";
	std::cout << "Heignt: " << height << "\n";
	std::cout << "Weight: " << weight << "\n";
	std::cout << "Salary: " << salary << "\n\n";
}

int main() {
	std::string name;
	unsigned short weight;
	unsigned short age;
	double salary;
	string h;
	ReadPersonData(name, age,salary);
	WritePersonData(age, name, "", "", std::to_string(salary));


	ReadPersonData(name, age, height,weight);
	WritePersonData(age, name, std::to_string(height), std::to_string(weight), "");
	return 0;
}



