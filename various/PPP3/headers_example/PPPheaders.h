// PPPheaders.h

#include<iostream>
#include <sstream>
#include<string>
#include<vector>
#include<span>
#include<stdexcept>
#include<random>

#include<stdint.h>
#include<list>
#include <map>
#include<unordered_map>
#include <set>
#include<memory>
#include <algorithm>

#define PPP_EXPORT
#include "PPP_support.h"

using namespace std;
using namespace PPP;


// disgusting macro hack to get a range checking:
#define vector Checked_vector
#define string Checked_string
#define span Checked_span

