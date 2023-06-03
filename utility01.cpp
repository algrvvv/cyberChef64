// utility01.cpp: определяет точку входа для приложения.
//

#include "utility01.h"
#include "iostream"
#include <base64.h>
#include "getopt/getopt.h"

using namespace std;

void decode(string str) {
	Base64 decode_str(str, Base64::Decode);
	cout << "\n" << "Расширофанное сообщение: " << "\n";
	cout << decode_str.decode() << "\n";
}

void encode(string str) {
	Base64 encode_str(optarg, Base64::TextEncode);
	cout << "\n" << "Заширофанное сообщение: " << "\n";
	cout << encode_str.encode() << "\n";
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RU");

	for (;;)
	{
		switch (getopt(argc, argv, "de:h")) // note the colon (:) to indicate that 'b' has a parameter and is not a switch
		{
		case 'd':
			printf("\nВыбран режим шифрования\n");
			decode(argv[2]);
			continue;

		case 'e':
			printf("\nВыбран режим дешифрования\n");
			encode(argv[2]);
			continue;

		case '?':
		case 'h':
		default:
			cout << "\n" << "WELCOME TO 'utility01'!\nUsing:\n-d \"your str for decode\"\n-e \"your str for encode\"\n-v - version application" << "\n";
			break;
		case -1:
			cout << "\nИспользуйте -h\n";
			break;
		}
		break;
	}
}


//ЗОНА КОММЕНТАРИЕВ

//cout << "Command: " << argv[0] << "\n";
//cout << "Args: " << loop << ": " << argv[0] << "\n";
//cout << argv[0] << "\n" << argv[1] << "\n" << argv[2] << "\n\n\n";
