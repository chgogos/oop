#pragma once

#include <iostream>
#include <iomanip>
#include "model.hpp"
#include "sqlite3.h"

void create_db();
void write_to_db(problem a_problem);
problem read_from_db();