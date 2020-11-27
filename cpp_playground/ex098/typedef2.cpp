// https://www.nextptr.com/tutorial/ta1193988140/how-cplusplus-using-or-aliasdeclaration-is-better-than-typedef

#include <map>
#include <vector>

class CheckingAccount;
class SavingsAccount;

// user identifier type alias
typedef int UserId;

// Define collection type aliases
typedef std::map<UserId, std::vector<CheckingAccount>> UserCheckingAccounts_t;
typedef std::map<UserId, std::vector<SavingsAccount>> UserSavingsAccounts_t;

// define maps
UserCheckingAccounts_t UserCheckingAccounts;
UserSavingsAccounts_t UserSavingsAccounts;

// type alias as function parameter
void process(UserSavingsAccounts_t &userAccountsMap);