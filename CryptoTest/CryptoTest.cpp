// CryptTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Crypto.h"
using namespace std;

int main()
{	
	string tmp = "Hi alice";
	char* message = (char*)malloc(tmp.length()+2); //+2 for \0 and one additional byte due to right shift needing an additional byte
	strcpy(message, tmp.c_str());
	int msg_len = tmp.length() + 1; //+1 for \0

	cout << "Plaintext msg: " << message << endl << endl;
	try
	{		
		crypt(message, msg_len);
	}
	catch (char* c)
	{
		cout << c << endl;
		goto exit;
	}
	cout << "Encrypted msg: " << message << endl << endl;
	try
	{
		crypt(message, msg_len, true);
	}
	catch (char* c)
	{
		cout << c << endl;
		goto exit;
	}
	cout << "Plaintext msg: " << message << endl;

	exit:
	delete[] message;
	system("pause");
    return 0;
}

