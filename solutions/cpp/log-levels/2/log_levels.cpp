#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int pos = line.find(":")+2;
    std::string message = line.substr(pos);
    return message;
}

std::string log_level(std::string line) {
    // return the log level
    int pos = line.find("]")-1;
    std::string level = line.substr(1, pos);
    return level;
}

std::string reformat(std::string line) {
    // return the reformatted message
    int pos_semicolon = line.find(":")+2;
    int pos_bracket = line.find("]")-1;
    std::string message = line.substr(pos_semicolon);
    std::string level = line.substr(1, pos_bracket);
    std::string reformatted = message + " (" + level + ")";
    return reformatted;
}
}  // namespace log_line
