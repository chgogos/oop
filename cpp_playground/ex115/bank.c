// Δίνεται ο ακόλουθος κώδικας που υλοποιεί έναν απλοποιημένο λογαριασμό
// τράπεζας (κατάθεση, ανάληψη, εκτύπωση) με διαδικασιακό
// προγραμματισμό. Γράψτε ισοδύναμο αντικειμενοστραφή κώδικα σε C++ που να
// ορίζει την κλάση BankAccount και να δημιουργεί στη main ένα αντικείμενο της
// κλάσης με όνομα acc στο οποίο θα γίνεται η κλήση των αντίστοιχων συναρτήσεων
// μελών έτσι ώστε να έχει την ίδια συμπεριφορά με τον υπάρχοντα κώδικα.

#include <stdio.h>

struct BankAccount {
  int accountNumber;
  double balance;
};

void deposit(struct BankAccount *acc, double amount) {
  acc->balance += amount;
  printf("Deposited %.2f, the balance becomes %.2f\n", amount, acc->balance);
}

void withdraw(struct BankAccount *acc, double amount) {
  if (amount > acc->balance) {
    printf("Insufficient funds.\n");
  } else {
    acc->balance -= amount;
    printf("Withdrew %.2f, the balance becomes %.2f\n", amount, acc->balance);
  }
}

void displayAccount(struct BankAccount *acc) {
  printf("Account number = %d, balance = %.2f\n", acc->accountNumber,
         acc->balance);
}

int main(void) {
  struct BankAccount acc;
  acc.accountNumber = 123456;
  acc.balance = 1000.0;
  displayAccount(&acc);
  deposit(&acc, 500.0);
  withdraw(&acc, 200.0);
  displayAccount(&acc);
  return 0;
}
