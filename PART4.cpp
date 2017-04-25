#include <iostream>
#include <cstring>
using namespace std;







struct Students
{

	int ID;
	char Sec_Name[50];
	char Term[50];
	int credit;
	int active_credit;
	int location;
	char sec_Start_Date[50];
	char csm_start_Date[50];
	//complete the members


} std1, std2, std3, std4, std5, std6;

void printStudents(struct Students *student)
{
	cout << "ID: "<<student->ID << endl;
	cout <<"Section Name: " <<student->Sec_Name << endl;
	cout <<"TERM: " <<student->Term << endl;
	cout <<"CREDIT:  " << student->credit << endl;
	cout << "ACTIVE CREDIT: "<< student->active_credit << endl;
	cout << "LOCATION: " << student->location << endl;
	cout <<"SECTION START DATE: " << student->sec_Start_Date << endl;
	cout <<"START DATE: " << student->csm_start_Date << endl;
	cout << "-------------------" << endl;
}

int main()
{

	std1.ID = 558920;
	strcpy_s(std1.Sec_Name, "DMTH-0100-20ZA");
	strcpy_s(std1.Term, "17/SP");
	std1.credit = 3;
	std1.active_credit = 15;
	std1.location = 200;
	strcpy_s(std1.sec_Start_Date, "1/9/2017");
	strcpy_s(std1.csm_start_Date, "1/9/2017");

	std2.ID = 8275254;
	strcpy_s(std2.Sec_Name, "ITDF-1300-30C1");
	strcpy_s(std2.Term, "17/SP");
	std2.credit = 3;
	std2.active_credit = 15;
	std2.location = 300;
	strcpy_s(std2.sec_Start_Date, "1/9/2017");
	strcpy_s(std2.csm_start_Date, "1/9/2017");

	std3.ID = 4509267;
	strcpy_s(std3.Sec_Name, "ITNW-1345-30C1");
	strcpy_s(std3.Term, "17/SP");
	std3.credit = 3;
	std3.active_credit = 15;
	std3.location = 200;
	strcpy_s(std3.sec_Start_Date, "1/9/2017");
	strcpy_s(std3.csm_start_Date, "1/9/2017");

	std4.ID = 3422289;
	strcpy_s(std4.Sec_Name, "ITSY-2343-30C1");
	strcpy_s(std4.Term, "17/SP");
	std4.credit = 3;
	std4.active_credit = 15;
	std4.location = 200;
	strcpy_s(std4.sec_Start_Date, "1/9/2017");
	strcpy_s(std4.csm_start_Date, "1/9/2017");

	std5.ID = 7581115;
	strcpy_s(std5.Sec_Name, "DEMR-1410-30C1");
	strcpy_s(std5.Term, "17/SP");
	std5.credit = 4;
	std5.active_credit = 7;
	std5.location = 200;
	strcpy_s(std5.sec_Start_Date, "1/9/2017");
	strcpy_s(std5.csm_start_Date, "1/9/2017");

	std6.ID = 1626729;
	strcpy_s(std6.Sec_Name, "DEMR-1323-30C3");
	strcpy_s(std6.Term, "17/SP");
	std6.credit = 3;
	std6.active_credit = 15;
	std6.location = 200;
	strcpy_s(std6.sec_Start_Date, "1/9/2017");
	strcpy_s(std6.csm_start_Date, "1/9/2017");
	//complete the other assignments



	printStudents(&std1);
	printStudents(&std2);
	printStudents(&std3);
	printStudents(&std4);
	printStudents(&std5);
	printStudents(&std6);


	system("pause");
	return 0;
}