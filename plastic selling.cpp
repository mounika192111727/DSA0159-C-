#include <iostream>
class Plastic {
private:
    int costPrice;
    int sellingPrice;
public:
    Plastic() {
        costPrice = 10;  
        sellingPrice = 12;  
    }
    int calculateProfit() {
        return sellingPrice - costPrice;
    }
};
int main() {
    Plastic plastic;
    int profit = plastic.calculateProfit();
    std::cout << "Kiran earned ?" << profit << " by selling 1 kg of plastic." << std::endl;
    return 0;
}
