#pragma once

#pragma once
#ifndef __UTILITY_H__
#define __UTILITY_H__

#include <algorithm>
#include <cmath>
#include <ctype.h>
#include <cctype>
/* For rand and srand */
#include <cstdlib>
#include <cstring>
/* For the time function */
#include <ctime>
/* For file processing */
#include <fstream>
#include <iomanip>
/* For file processing*/
#include <iostream>
#include <locale>
/* For reading/writing of files */
#include <fstream>
#include <iostream>
/* For using unique_ptr */
#include <memory>
#include <string>
#include <stdlib.h>
#include <vector>

using std::cin;
using std::flush;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::setw;
using std::showpoint;
using std::left;
using std::right;
using std::to_string;
using std::unique_ptr;
using std::string;
using std::setfill;

using std::fstream;
using std::ifstream;
using std::ios;
using std::ofstream;

using std::vector;

void pauseSystem()
{
	cin.get();
	cin.ignore();
}

#endif __UTILITY_H__