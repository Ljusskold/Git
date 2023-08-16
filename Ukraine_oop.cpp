#include <iostream>
#include <string>

class Ukraine {
public:
    Ukraine(std::string name, std::string capital, int population) :
        name_(name), capital_(capital), population_(population) {}

    std::string getName() const { return name_; }
    std::string getCapital() const { return capital_; }
    int getPopulation() const { return population_; }

    void setName(std::string name) { name_ = name; }
    void setCapital(std::string capital) { capital_ = capital; }
    void setPopulation(int population) { population_ = population; }

private:
    std::string name_;
    std::string capital_;
    int population_;
};

int main() {
    Ukraine ukraine("Ukraine", "Kyiv", 42000000);

    std::cout << "Country: " << ukraine.getName() << std::endl;
    std::cout << "Capital: " << ukraine.getCapital() << std::endl;
    std::cout << "Population: " << ukraine.getPopulation() << std::endl;

    return 0;
}

