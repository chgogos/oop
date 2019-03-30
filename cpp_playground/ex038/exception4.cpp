#include <iostream>

// proper definition of custom exceptions
class MyBaseException : public std::exception
{
protected:
  std::string error_message;

public:
  MyBaseException() = delete;
  explicit MyBaseException(const std::string s)
  {
    error_message = "MY BASE EXCEPTION: ";
    error_message += s;
  }
  virtual const char *what() const noexcept override
  {
    // error_message = "IS IT POSSIBLE"; // error: η συνάρτηση έχει δηλωθεί ως const
    // throw 1; // warning: 'what' has a non-throwing exception specification but can still throw [-Wexceptions]
    return error_message.c_str();
  }
};

int main()
{
  // MyBaseException ex; // error: call to deleted constructor of 'MyBaseException'
  MyBaseException ex("something bad happened");
  try
  {
    throw ex;
  }
  catch (const MyBaseException &ex)
  {
    std::cerr << ex.what() << std::endl;
  }
}
