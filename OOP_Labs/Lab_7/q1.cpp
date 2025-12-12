#include <iostream>
#include <numeric> 

using namespace std;

int gcd(int a, int b) {
    return std::gcd(a, b);
}

class Fraction {
private:
    
    int Num; 
    int Dem; 

  void simplify() {
        int common_divisor = gcd(abs(Num), Dem);
        Num /= common_divisor;
        Dem /= common_divisor;
    }

public:
    Fraction() : Num(0), Dem(1) {}
    
    Fraction(int n, int d) {
        if (d == 0) {
            cout << "Denominator cannot be 0." << endl;
            Num = 0;
            Dem = 1;
        } 
        else {
            Num = n;
            Dem = d;
            simplify();
        }
    }


    // Num Setter
    void SetNum(int n) {
        Num = n;
        simplify();
    }

    // Num Getter
    int GetNum() const {
        return Num;
    }

    // Dem Setter 
    void SetDem(int d) {
        if (d != 0) {
            Dem = d;
            simplify();
        } 
        else {
            cout << "Denominator cannot be 0." << endl;
        }
    }

    // Dem Getter
    int GetDem() const {
        return Dem;
    }

    // Display 
    void Display() const {
        cout << Num << "/" << Dem;
    }

    Fraction Add(const Fraction& other) const {
        int new_dem = Dem * other.Dem;
        
        int new_num = (Num * other.Dem) + (other.Num * Dem);
        
        return Fraction(new_num, new_dem);
    }

    Fraction Subtract(const Fraction& other) const {
        int new_dem = Dem * other.Dem;
        
        int new_num = (Num * other.Dem) - (other.Num * Dem);
        
        return Fraction(new_num, new_dem);
    }
};

int main() {
    cout << "Testing Display ---\n";
    Fraction f2(2, 4); 
    cout << "f2 (2/4) = ";
    f2.Display();
    cout << '\n';

    Fraction f3(1, 3);
    cout << "f3 (1/3) = ";
    f3.Display();
    cout << '\n';

    Fraction f1;
    cout << "f1 (default) = ";
    f1.Display();
    cout << '\n';
    cout << "------------------------------------------\n";

    cout << "Add Member Function\n";
    f1 = f2.Add(f3);
    cout << "f1 = f2.Add(f3) -> 1/2 + 1/3 = ";
    f1.Display(); 
    cout << '\n';
    cout << "------------------------------------------\n";

    cout << "Subtract Member Function\n";
    // f1 = f2.Subtract(f3) => 1/2 - 1/3 = 3/6 - 2/6 = 1/6
    f1 = f2.Subtract(f3);
    cout << "f1 = f2.Subtract(f3) -> 1/2 - 1/3 = ";
    f1.Display();
    cout << '\n';
    cout << "------------------------------------------\n";
    
    cout << "Setter/Getter ---\n";
    f1.SetNum(10); 
    f1.SetDem(5); 
    cout << "f1 after setting = ";
    f1.Display();
    cout << '\n';
    
    cout << "f1 Num = " << f1.GetNum() << '\n'; // Output: 2
    cout << "f1 Den= " << f1.GetDem() << '\n'; // Output: 1

    return 0;
}