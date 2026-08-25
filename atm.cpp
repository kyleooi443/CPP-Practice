
// automated teller machine

#include <iostream>
#include <vector>
#include <string>

class card {
    public:
        std::string cardId, cardidInput;
        std::string cardPin, cardpinInput;
        int balance, deduction, withdraw, deposit;

        void checkValidity() {

            std::cout << "Checking Validity...";
        }
        void checkPin() {
            std::cout << "Checking Pin...";

        }
        void checkBalance() {
            std::cout << "Checking Balance...";

        }

        void printReceipt() {
            
        }


};


int main () {

    std::vector < std::string > cardId;

    std::cout << "========================" << std::endl;
    std::cout << "Automated Teller Machine" << std::endl;
    std::cout << "========================" << std::endl;





    return 0;
}