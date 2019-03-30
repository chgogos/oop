#pragma once

#include "owner.hpp"

class Account
{
  private:
    Owner *owner;

  public:
    void set_owner(Owner *owner)
    {
        this->owner = owner;
    }
};
