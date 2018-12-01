#include <iostream>
#include <string>
#include <vector>

#include "adjectives.h"
#include "phrase.h"

using namespace std;
using namespace adjektive;

int main() {
  vector<Noun> nouns({
                         {Gender::N, "Kind"},
                         {Gender::P, "Kinder"},
                         {Gender::M, "Tisch"},
                         {Gender::P, "Tische"}
                     });

  cout << "Correct this phrase." << endl;
  Phrase p = genPhrase(adjectives, nouns);
  cout << genPhrase(adjectives, nouns).incorrect << endl;
  return 0;
}