/**
 * @copyright 2018 Justin Watson
 * @author Justin Watson
 *
 * @file adjectives.h
 * @brief List of adjectives.
 */

#ifndef ADJEKTIVE_ADJECTIVES_H
#define ADJEKTIVE_ADJECTIVES_H

#include<string>
#include<vector>  // Who has the better random selection?

namespace adjektive {

/// A list of German adjectives.
const std::vector<std::string> adjectives({
                                              "alt", "arm", "bequem", "bilig", "bitter", "blond", "böse", "deutsch",
                                              "dunkel", "dünn", "eng", "faul", "fleißig", "frisch", "gesund",
                                              "glücklich", "groß", "gut", "hässlich", "heiß", "hühsch", "intelligent",
                                              "interessant", "jung", "kalt", "klein", "klug", "krank", "kurz", "lang",
                                              "langsam", "leer", "leicht", "nah", "nett", "neu", "reich", "sauber",
                                              "sauer", "scharf", "schmutzig", "schnell", "schwach", "süß", "teuer",
                                              "voll", "weit", "rot", "gelb", "lila", "grün", "weiß", "blau", "orange",
                                              "schwarz", "braun", "rosa", "halb", "grau", "violett"
                                          });

};  // namespace adjektive
#endif // ADJEKTIVE_ADJECTIVES_H
