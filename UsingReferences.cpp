#include <iostream>
#include <vector>

using namespace std;

// prints all stored accounts
void print_account_balances(vector<int>& account_balances);

//does nothing
void normal_balance_check_transaction(vector<int>& account_balances);

// swaps account balances
void balance_check_hacked_trasaction(vector<int>& account_balances);

int main()
{
    // stores the account balances
    vector<int> accountBalances{ 10, 534 };

    cout << "account balances" << endl;
    print_account_balances(accountBalances);

    // uses normal balance check
    normal_balance_check_transaction(accountBalances);
    cout << "After using normal balance check trasation, the accounts are " << endl;
    print_account_balances(accountBalances);

    // uses check hacked transaction
    balance_check_hacked_trasaction(accountBalances);
    cout << "After using balance check hacked transaction, the accounts are " << endl;
    print_account_balances(accountBalances);


    return 0;
}

void print_account_balances(vector<int>& account_balances) {
    for (vector<int>::iterator i = account_balances.begin(); i < account_balances.end(); i++) {
        cout << *i << endl;
    }
    return;
}

void normal_balance_check_transaction(vector<int>& account_balances) {
    return;
}

void balance_check_hacked_trasaction(vector<int>& account_balances) {
    int tempory_storage = account_balances[0];
    account_balances[0] = account_balances[1];
    account_balances[1] = tempory_storage;
    return;
}