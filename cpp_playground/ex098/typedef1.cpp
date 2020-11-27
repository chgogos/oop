// https://www.nextptr.com/tutorial/ta1193988140/how-cplusplus-using-or-aliasdeclaration-is-better-than-typedef

// χωρίς typedef

#include <map>
#include <vector>

class CheckingAccount;
class SavingsAccount;

// Map of UserId -> List of CheckingAccount
std::map<int, std::vector<CheckingAccount>> UserCheckingAccounts;
// Map of UserId -> List of SavingsAccount
std::map<int, std::vector<SavingsAccount>> UserSavingsAccounts;

void process(std::map<int, std::vector<SavingsAccount>>& userAccountsMap);
