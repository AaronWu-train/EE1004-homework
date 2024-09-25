// File: debug.h
// Author: Aaron Wu (B13901011)
// Date: 2024-09-25
// Description: include this file and add -DDEBUG flag to compile with debug output
// Usage: debug("hello world", x, y, x + y);
//        OI(vec.begin(), vec.end()); // output iterator

#pragma once
#include <iostream>
#define AI(x) begin(x), end(x)
#ifdef DEBUG 
#define debug(args...) LKJ("\033[1;32m[ "+string(#args)+" ]\033[0m", args)
template<class I> void LKJ(I&&x){ cerr << x << '\n'; }
template<class I, class...T> void LKJ(I&&x, T&&...t){ cerr << x << ", ", LKJ(t...); }
template<class I> void OI(I a, I b){ while(a < b) cerr << *a << " \n"[next(a) == b], ++a; }
#else
#define debug(...) 0
#define OI(...) 0
#endif
