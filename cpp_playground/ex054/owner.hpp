#pragma once

#include <string>

class Owner
{
  public:
    virtual ~Owner() {}
    virtual std::string get_name() const = 0;
};

