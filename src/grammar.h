/*
	This file contains formulas to determine the
	grammatical purpose for each word, and
	sends and error if there is a grammatical
	mistake
*/

#ifndef ALEX_GRAMMAR_H
#define ALEX_GRAMMAR_H

#include <iostream>

namespace alex 
{
	class grammar
	{
		class node
		{
			private:
				char* subtree;
				char* word;
				node** next_subtree;

			public:
				node(): subtree{nullptr}, word{nullptr}, next_subtree{nullptr} {};
				~node() {};
		};

		public:
			grammar() : root{} {};
			~grammar() {};
			bool does_word_exist(const char*) { return false; };

		private:
			node* root;
	};
		/*
		class Words 
		{
			class Semantic_Words
			{
				class Nouns 
				{

				};
				class Verbs 
				{

				};
				class Adjectives 
				{

				};
			};
			class Grammatical_Words
			{
				class Prepositions 
				{
				//Turns multiphrase preps into one-word

					const char* IN = "in";
					const char* OUT = "out";
					const char* FOR = "for";
					const char* WITH = "with";
					const char* WITHOUT = "without";
					const char* TO = "to";
					const char* FROM = "from";
					const char* UNDER = "under";
					const char* INSIDE = "inside";
					const char* OUTSIDE = "outside";
					const char* BESIDE = "beside";
					const char* BEFORE = "before";
					const char* BEHIND = "behind";
					const char* ON = "on";
				};
				class Articles 
				{
					const char* A = "a";
					const char* SOME = "some";
					const char* THE = "the";
				};
				class Contractions 
				{

				};
			};
		};

		class Symbols 
		{

		};

		*/

}

#endif