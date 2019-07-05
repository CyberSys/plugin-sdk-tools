#pragma once
#include <string>
#include "..\shared\json\json.hpp"
#include "Paths.h"

using namespace std;
using json = nlohmann::json;

class JsonIO {
public:
    static int readJsonNumber(json const &node, string const &key);
    static string readJsonString(json const &node, string const &key);
    static bool readJsonBool(json const &node, string const &key);
    static json parse(path const &filepath);
};
