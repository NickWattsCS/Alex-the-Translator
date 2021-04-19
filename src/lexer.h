/*
	This file contains functions to break down input
	into semantic tokens in the specified input lenguage.
	Ex: The boy's dog ran. -> "The" "boy" "'s" "dog" 
	"ran" "."

	NOTE: Consider looking into yacc or another established
	lexer to speed up production.
*/


//C++ Libraries
#include <fstream>
#include <cstring>
#include <vector>
#include "grammar.h"

//Local Files


namespace alex {

class token 
{
	int id;
	char* word = NULL;
};

class lexer
{
	public:
	//Constructors and Destructors
		lexer() : token_list{nullptr};
		~lexer();
	
	//Member functions
		void tokenize(const std::vector<std::string>&);

	private:
	//Member data
		std::vector<token> token_list;
};

}