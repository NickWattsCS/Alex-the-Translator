//This is the main for the program
#include <string>
#include <getopt.h>
#include "lexer.h"
#include "parser.h"

int main(int argc, char** argv)
{
	static int file_flag;
	static int print_to_file_flag;
	static int verbose_flag;
	int curflag = 0;
	opterr = 0;

	while(1)
	{
		static struct options long_options[] =
		{
			{"open",     required_argument,   &open_flag,          1},
			{"write",    required_argument,   &write_flag, 1},
			{"verbose",  no_argument,         &verbose_flag,       1},
			{"file_in",  required_argument,   0,                   'f'},
			{"more",     no_argument,         0,                   'v'},
			{0,          0,                   0,                   0}
		};
		int option_index = 0;

		curflag = getopt_long(argc, argv, "vf:", long_options, &option_index);

		if(curflag == -1)
			break;


	}
	std::string word = "";
	std::vector<std::string> wordbank;
	alex::lexer lang_lex;

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
		//This will be code to parse a text file
	}

	return 0;
}
