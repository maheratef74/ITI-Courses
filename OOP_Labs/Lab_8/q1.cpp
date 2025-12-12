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

public:

    Fraction(){
        this->Dem = 1;
        this->Num = 0;
    }
    
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

    void simplify() {
        int common_divisor = gcd(abs(Num), Dem);
        Num /= common_divisor;
        Dem /= common_divisor;
    }

    void setNum(int n) {
        Num = n;
        simplify();
    }

    int getNum() const {
        return Num;
    }

    void setDem(int d) {
        if (d != 0) {
            Dem = d;
            simplify();
        } 
        else {
            cout << "Denominator cannot be 0." << endl;
        }
    }

    int getDem() const {
        return Dem;
    }

    void Display() const {
        cout << Num << "/" << Dem;
    }

    Fraction operator+(const Fraction other) const{
        int new_dem = Dem * other.Dem;
        
        int new_num = (Num * other.Dem) + (other.Num * Dem);
        
        return Fraction(new_num, new_dem);
    }

    Fraction operator-(const Fraction& other) const {
        int new_dem = Dem * other.Dem;
        
        int new_num = (Num * other.Dem) - (other.Num * Dem);
        
        return Fraction(new_num, new_dem);
    }

    Fraction operator*(const Fraction& other) const {
        int new_dem = Dem * other.Dem;
        
        int new_num = Num * other.Num;
        
        return Fraction(new_num, new_dem);
    }

    Fraction operator/(const Fraction& other) const {
        int new_num = Num * other.Dem;

        int new_dem = Dem * other.Num;
        
        return Fraction(new_num, new_dem);
    }
    // ++f
    Fraction& operator++(){
       this->Num += this->Dem ;

       return *this;
    }
    // f++
    Fraction operator++(int){
       Fraction old_f = *this;

       this->Num += this->Dem;

       return old_f;
    }
};

int main() {
    Fraction f1(5,10);
    Fraction f2(2,4);

    cout << '\n';
    cout << "------------------------------------------\n";

    cout << "Add Member Function\n";
    Fraction f3 = f1 + f2;
    cout << "f3 = f1 + f2 = ";
    f3.Display(); 

    cout << '\n';
    cout << "------------------------------------------\n";

    cout << "Subtract Member Function\n";
    f3 = f1 - f2;
    cout << "f3 = f1 - f2 = ";
    f3.Display(); 
    cout << '\n';
    cout << "------------------------------------------\n";

    cout << "Product Member Function\n";
    f3 = f1 * f2;
    cout << "f3 = f1 * f2 = ";
    f3.Display(); 
    cout << '\n';
    cout << "------------------------------------------\n";

    cout << "Divsion Member Function\n";
    f3 = f1 / f2;
    cout << "f3 = f1 / f2 = ";
    f3.Display(); 
    cout << '\n';
    cout << "------------------------------------------\n";

    cout << "prifix sum Member Function\n";
    cout << "++f3 \n";
    Fraction prifix_result = ++f3;  
    cout << "the resulte of the prifix: ";
    prifix_result.Display(); // the result will change

    cout << "\nf3 will change: ";
    f3.Display();  // this will change 

    cout << '\n';
    cout << "------------------------------------------\n";

    cout << "postfix sum Member Function\n";
    cout << "f3++ \n";
    Fraction postfix_result = f3++;
    
    cout << "resulte of the postfix will not change: ";
    postfix_result.Display(); // this will not change 
    
    cout << "\nf3 will change: ";
    f3.Display();  // this will change
    
    cout << '\n';
    cout << "------------------------------------------\n";
    return 0;
}