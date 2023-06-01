// utility01.cpp: определяет точку входа для приложения.
//

#include "utility01.h"
#include "iostream"
#include <base64.h>
#include "getopt/getopt.h"

using namespace std;

void print_help() {
	setlocale(LC_ALL, "RU");
	cout << "\n" << "WELCOME TO 'utility01'!\nUsing:\n-d / --decode \"your str for decode\"\n-e / --encode \"your str for encode\"\n-v / --version  - version application" << "\n";
}

void print_version() {
	setlocale(LC_ALL, "RU");
	cout << "\n" << "VERSION 0.4.25" << "\n";
}

void solution(string param, string str) {
	setlocale(LC_ALL, "RU");
	if (param == "-?" || param == "-h" || param == "--help")
	{
		print_help();
	}
	else if (param == "-v" || param == "--version")
	{
		print_version();
	}
	else if (param == "-e" || param == "--encode") 
	{
		Base64 test(str, Base64::TextEncode);
		cout << "\n" << "Заширофанное сообщение: " << "\n";
		cout << test.encode() << "\n";
	}
	else if (param == "-d" || param == "--decode") 
	{
		Base64 testik(str, Base64::Decode);
		cout << "\n" << "Расширофанное сообщение: " << "\n";
		cout << testik.decode() << "\n";
	}
	else {
		cout << "\n" << "Попробуйте воспользоваться командой '-h' для ознакомления с функионалом" << "\n";
	}
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RU");

	int c;
    int option_index = 0;

	for (;;)
	{
		switch (getopt(argc, argv, "de:h")) {
		case 'a':
			printf("switch 'a' specified\n");
			break;
		case 'b':
			printf("parameter 'b' specified with the value %s\n", optarg);
			break;

		case '?':
		case 'h':
		default:
			printf("Help/Usage Example\n");
			break;

		case -1:
			break;
		}
	}

	string param;
	string str;

	if (argc == 1)
	{
		cout << "Используйте '-h'";
	}
	else if (argc == 2) 
	{
		for (int loop = 1; loop < argc; loop++)
		{
			param = argv[1];
		}

		if (param == "-h" || param == "--help" || param == "?")
		{
			print_help();
		}
		else if(param == "-v" || param == "--version")
		{
			print_version();
		}
		else {
			cout << "Используйте '-h'";
		}
	}
	else 
	{
		for (int loop = 1; loop < argc; loop++)
		{
			param = argv[1];
			str = argv[2];
		}
		//cout << param << "\n" << str;
		solution(param, str);
	}	
}


//ЗОНА КОММЕНТАРИЕВ

//cout << "Command: " << argv[0] << "\n";
//cout << "Args: " << loop << ": " << argv[0] << "\n";
//cout << argv[0] << "\n" << argv[1] << "\n" << argv[2] << "\n\n\n";
