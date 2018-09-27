#include "stdafx.h"
#include "cDictionary.h"
#include "cNotFoundException.h"
using namespace std;

int main(int argc, char** argv)
{
	cDictionary<char, int> dictionary;
	dictionary.Set('1', 1);
	cout << dictionary.IsSet('1') << endl;
	cout << dictionary.Get('1') << endl;
	try{
		cout << dictionary.Get('2') << endl;
	}
	catch (cNotFoundException<char> e)
	{
		cout << e.GetKey() << endl;
	}
	return 0;
}