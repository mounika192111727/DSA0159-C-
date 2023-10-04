class Bus {
private:
    int capacity;
public:
    Bus(int capacity) {
        this->capacity = capacity;
    }
    int calculateTotalChildren(int numberOfBuses) {
        return capacity * numberOfBuses;
    }
};
int main() {
    Bus bus(48);
    int numberOfBuses = 3;
    int totalChildren = bus.calculateTotalChildren(numberOfBuses);
    cout << "Three buses can carry a total of " << totalChildren <<"children"<<endl;
    return 0;
}


