#include <iostream>
#include <string>
#include <cstring>
using namespace std;





struct Students
{

	int ID;
	int Location;
	int Verif_Status;
	int Year;
	char Verif_Date[50];
	char Add_Date[50];

	//complete the members


} std1, std2, std3, std4, std5;

void printStudents(struct Students student)
{
	cout << "ID:  " <<student.ID << endl;
	cout <<"Location: " << student.Location << endl;
	cout << "Status: "<< student.Verif_Status << endl;
	cout <<"Year: " << student.Year << endl;
	cout << "Verification Date: "<< student.Verif_Date << endl;
	cout << "Date Added: "<< student.Add_Date << endl;
	cout << "---------------------" << endl; 

}


int main()
{

	std1.ID = 558920;
	std1.Location = 100;
	std1.Verif_Status = 7;
	std1.Year = 2015;
	strcpy_s(std1.Verif_Date, "5/18/2015");
	strcpy_s(std2.Add_Date, "3/4/2015");

	std2.ID = 8275254;
	std2.Location = 200;
	std2.Verif_Status = 2;
	std2.Year = 2015;
	strcpy_s(std2.Verif_Date, "3/30/2015");
	strcpy_s(std2.Add_Date, "3/30/2015");

	std3.ID = 4509267;
	std3.Location = 100;
	std3.Verif_Status = 2;
	std3.Year = 2015;
	strcpy_s(std3.Verif_Date, "3/4/2015");
	strcpy_s(std3.Add_Date, "3/4/2015");

	std4.ID = 3422289;
	std4.Location = 100;
	std4.Verif_Status = 2;
	std4.Year = 2015;
	strcpy_s(std4.Verif_Date, "4/17/2015");
	strcpy_s(std4.Add_Date, "4/17/2015");

	std5.ID = 7581115;
	std5.Location = 100;
	std5.Verif_Status = 2;
	std5.Year = 2015;
	strcpy_s(std5.Verif_Date, "7/6/2015");
	strcpy_s(std5.Add_Date, "4/21/2015");
	//complete the other assignments



	printStudents(std1);
	printStudents(std2);
	printStudents(std3);
	printStudents(std4);
	printStudents(std5);


	system("pause");
	return 0;
}
