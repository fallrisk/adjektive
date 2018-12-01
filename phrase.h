/**
 * @copyright 2018 Justin Watson
 * @author Justin Watson
 *
 * @file filename.h(.cpp|.hpp)
 * @brief What is in this file?
 */

#ifndef ADJEKTIVE_PHRASE_H
#define ADJEKTIVE_PHRASE_H

#include <string>
#include <vector>

namespace adjektive {

enum Gender {
  M = 0,  // Masculine
  F,  // Feminine
  N,  // Neutral
  P  // Plural
};

struct Noun {
  Gender gender;
  std::string word;
};

struct Phrase {
  std::string correct;
  std::string incorrect;
};

///
/// Der words, Ein words, Adjective only
/// ein word + adjective + adjective n + noun
/// der word + adjective + adjective n + noun
/// adjective n + noun
/// @param adjectives  A list of adjectives to choose from.
/// @param nouns  A list of nouns to choose from.
/// @return
Phrase genPhrase(const std::vector<std::string> &adjectives, const std::vector<Noun> &nouns);

};  // namespace adjektive
#endif // ADJEKTIVE_PHRASE_H
