#ifndef utilities_h
#define utilities_h

#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <experimental/filesystem>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <locale>
#include <vector>
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <array>
#include <iomanip>
#include <ctime>
#include <set>

namespace utils
{
    void splash_screen();
    void silent_shell(const char* cmd);
    std::string GetSysResponse(const char* cmd);
    bool CheckProgAvailable(const char* program);
    void write_to_file(std::string inputfilename, std::string buffer);
    void append_to_file(std::string inputfilename, std::string buffer);
    bool IsFlag(char* bigstring);
    void ReadArgs(int argc, char** argv, std::vector<std::vector<std::string>>& flags);
    int FindFlag(std::vector<std::vector<std::string>>& flags, char* target);
    bool CheckFileExists(std::string filename);
    std::string GetTimeAndDate();
    int is_empty(const char *s);
    std::string LastLineOfFile(std::string filename);
    void mdout_to_csv(std::string filename,std::string csv_file);
    int count_lines_in_file(std::string filename);
}


#endif