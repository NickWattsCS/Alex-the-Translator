//This is the main for the program
#include <string>
#include "lexer.h"
#include "parser.h"

int main(argc, argv)
{
	std::string word = "";
	std::vector<std::string> wordbank;
	alex::lexer lang_lex = lexer();

	/*
	Placeholder control scheme until I have the energy to program the getopt schema.
	First if block runs for command line testing, second if block runs for filestream
	testing.
	*/
	if(strcmp(argv[0], "com") == 0)
	{
		while(std::cin >> word)
		{
			if(word == "com")
				continue;
			else
				wordbank.push_back(word);
		}
		lang_lex.tokenize(wordbank);
	}
	else
	{

	}

	return 0;
}