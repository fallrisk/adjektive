/**
 * @copyright 2018 Justin Watson
 * @author Justin Watson
 *
 * @file filename.h(.cpp|.hpp)
 * @brief What is in this file?
 */
#include <algorithm>
#include <random>

#include "phrase.h"

using namespace adjektive;
using namespace std;

enum PhraseType {
  DER_WORD,
  EIN_WORD,
  ADJECTIVE_ONLY
};

//Phrase genDerPhrase(vector<string> &adjectives, vector<Noun> &nouns) {
//  default_random_engine e;
//  uniform_int_distribution<unsigned long> da(0, 3);
//
//  int phrase_num_adj = da(e);
//}

Phrase genPhrase(const std::vector<std::string> &adjectives, const std::vector<Noun> &nouns) {
  default_random_engine e;

  uniform_int_distribution<unsigned long> da(0, adjectives.size());
  uniform_int_distribution<unsigned long> dn(0, nouns.size());
  uniform_int_distribution<int> dt(0, 2);
  uniform_int_distribution<int> dpa(0, 3);  // Number of adjectives to be used in the phrase.

  auto pt = static_cast<PhraseType>(dt(e));
  int phrase_num_adj = dpa(e);

  Noun noun = nouns[dn(e)];

  vector<string> phrase_adjectives;
  for (int a = 0; a < phrase_num_adj; ++a) {
    phrase_adjectives.emplace_back(adjectives[da(e)]);
  }

  string incorrect_phrase;

  // If der-word phrase.
  if (noun.gender == Gender::M)
    incorrect_phrase = "der ";
  else if (noun.gender == Gender::F)
    incorrect_phrase = "die ";
  else if (noun.gender == Gender::N)
    incorrect_phrase = "das ";
  else
    incorrect_phrase = "die ";

  for (auto& adj : phrase_adjectives) {
    incorrect_phrase += adj + " ";
  }

  incorrect_phrase += "noun";

  return Phrase{incorrect_phrase, incorrect_phrase};
}
