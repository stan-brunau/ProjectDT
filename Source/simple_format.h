//
// Created by Stan Brunau on 09/04/2020.
//
// Deze file is aangemaakt puur omdat ik op de moment de formatting niet in de tree.cpp kon laten werken
// Er kan dus een betere manier zijn
// Er zijn momenteel twee versies van format: één met json::iterator en één met gewone json
// De json::iterator-variant is momenteel NIET IN GEBRUIK
// Tijdelijk bewaart om mogelijk de herschrijven

#include <string>
#include "lib/json.hpp"
using json = nlohmann::json;

#ifndef PROJECTDT_SIMPLE_FORMAT_H
#define PROJECTDT_SIMPLE_FORMAT_H

std::string format(json::iterator j, std::string key);
std::string format(json j, std::string key);

#endif //PROJECTDT_SIMPLE_FORMAT_H
