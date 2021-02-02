#include <algorithm>
#include <iostream>
#include <bitset>
#include <cstdint>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <utility>
#include <fstream>
#include <queue>
#include <deque>
#include <stack>

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE

#define _space " "

#define _min3(a,b,c) std::min(std::min(a,b),c)
#define _max3(a,b,c) std::max(std::max(a,b),c)

#define _stringify(a) std::string(#a)

typedef unsigned long long ull;
typedef unsigned long int uli;

typedef unsigned short ust;
typedef unsigned char ucr;

typedef long long ll;
typedef long int li;

typedef short st;
typedef char cr;
typedef bool bl;

typedef float fl;
typedef double dl;

typedef std::string str;

typedef std::vector<ull> vull;
typedef std::vector<uli> vuli;
typedef std::vector<ll> vll;
typedef std::vector<li> vli;

typedef std::vector<bl> vbl;
typedef std::vector<str> vstr;

enum Result
{
	SUCCESS = 0,
	ERROR_OPENING_FILE = -1,
	ERROR_PARSING_FILE = -2,
	ERROR_READING_FILE = -3,
};

int main()
{
	#ifdef _DEBUG 
		freopen("Logs/InputLog.log", "r", stdin);
		freopen("Logs/OutputLog.log", "w", stdout);
	#endif

	return SUCCESS;
}