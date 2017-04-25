#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
using namespace std;




int main()
{
	char name[] = "Hi";
	char name1[] = "Kyle";
	cout << "//strcpy//" << endl;
	cout << "used to copy second string  to the first" << endl;
	cout << name << endl;
	strcpy_s(name1, name);
	cout << name << endl << endl;

	cout << "//strncpy//" << endl;
	cout << "Copies most n characters of string2 to string1 " << endl;
	char str1[] = "My name is Daniel and I like to travel.";
	char str2[40];
	char str3[40];
	strncpy_s(str2, str1, sizeof(str2));


	strncpy_s(str3, str2, 5);
	str3[20] = '\0';


	puts(str1);
	puts(str2);
	puts(str3);


	cout << "//strcat//" << endl;
	cout << "The first string is altered, the second string is left unchanged." << endl;

	char str[80];
	strcpy_s(str, "these ");
	strcat_s(str, "are ");
	strcat_s(str, "cool ");
	strcat_s(str, "strings");
	puts(str);

	cout << "//strncat//" << endl;
	cout << "adds characters from the string" << endl;
	char sr1[20];
	char sr2[20];
	strcpy_s(sr1, "HI im");
	strcpy_s(sr2, "Daniel salas");
	strncat_s(sr1, sr2, 6);
	puts(sr1);


	/*cout << "strcmp" << endl;
	cout << "Compares the two strings" << endl;
	char key[] = "stick";
	char buffer[80];
	do {
	printf("Guess my favorite thing ");
	fflush(stdout);
	scanf_s("%79s", buffer);
	} while (strcmp(key, buffer) != 0);
	puts("yup");*/

	/*cout << "strcoll" << endl;
	cout << "compares strings using locales" << endl;

	if (strcoll(str5, str6))*/

	/*char str[][8] = { "Daniel" , "John" , "Nico" };
	int n;
	puts("which one is daniel?");
	for (n = 0; n<3; n++)
	if (strncmp(str[n], "Dan", 2) == 0)
	{
	printf("found %s\n", str[n]);
	}*/


	cout << "strxfrm" << endl;
	cout << "changes string using locale " << endl;
	char dest[20];
	char src[20];
	int len;

	strcmpi("a", "A");

	strcpy_s(src, "Daniel");
	len = strxfrm(dest, src, 20);

	printf("Length of string %s is: %d    ", dest, len);

	cout << "strcmpi" << endl;
	cout << "I dunno " << endl;

	/*cout << "strchr" << endl;
	cout << "Locates first occurence of character in string " << endl;
	char str[] = "This is a sample string";
	char * pch;
	printf("Looking for the 's' character in \"%s\"...\n", str);
	pch = strchr(str, 's');
	while (pch != NULL)
	{
	printf("found at %d\n", pch - str + 1);
	pch = strchr(pch + 1, 's');*/

	/*char str[] = "normal";
	char keys[] = "1234567890";
	int i;
	i = strcspn(str, keys);
	printf("The first number in str is at position %d.\n", i + 1); */


	/*cout << "strpbrk" << endl;
	cout << "locates charactes in string " << endl;
	char str[] = "here is a string";
	char key[] = "hello there";
	char * pch;
	printf("Vowels in '%s': ", str);
	pch = strpbrk(str, key);
	while (pch != NULL)
	{
	printf("%c ", *pch);
	pch = strpbrk(pch + 1, key);*/
	cout << "strspn" << endl;
	cout << " get the  length of character set in string " << endl;

	int i;
	char strtext[] = "345th";
	char cset[] = "1234567890";

	i = strspn(strtext, cset);
	printf("The initial number has %d digits.\n", i);



	system("pause");

	return 0;

}