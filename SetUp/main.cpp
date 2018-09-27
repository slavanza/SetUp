#include "stdafx.h"
#include "cDictionary.h"

int main(int argc, char** argv)
{
	cDictionary<char, int> dictionary;
	dictionary.Set('1', 1);
	dictionary.IsSet('1');
	dictionary.Get('1');
	dictionary.Get('2');
	return 0;
}