
#include <iostream>
using namespace std;


class Numpy {

private:
    int arr[10];

public:

    // Overload for input
    friend istream& operator>>(istream& in, Numpy& np) {

        for (int i = 0; i < 10; ++i) {

            in >> np.arr[i];

        }

        return in;

    }

    // Overload for output
    friend ostream& operator<<(ostream& out, const Numpy& np) {

        out << "[";

        for (int i = 0; i < 10; ++i) {

            out << np.arr[i];
            if (i != 9) out << " , ";

        }

        out << "]";
        return out;
    }

    // Overload + for Numpy + Numpy 
    Numpy operator+(const Numpy& other) const {

        Numpy result;

        for (int i = 0; i < 10; ++i) {

            result.arr[i] = this->arr[i] + other.arr[i];

        }

        return result;


    }

    // Overload + for Numpy + int
    Numpy operator+(int value) const {

        Numpy result;

        for (int i = 0; i < 10; ++i) {

            result.arr[i] = this->arr[i] + value;

        }

        return result;


    }


};

int main() {

    Numpy n1, n2;


    int value;
    cin >> value; // always 10?
    cin >> n1;
    cin >> n2;

    int scalar;
    cin >> scalar;

  
    cout << "n1 + n2 = " << (n1 + n2) << endl;
    cout << "n1 + " << scalar << " = " << (n1 + scalar) << endl;


    return 0;



}





