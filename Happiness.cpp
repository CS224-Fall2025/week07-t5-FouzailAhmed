
#include <iostream>
using namespace std;


int sumofsquares(int n) { 

    int sum = 0;

    while (n > 0) {

        int digit = n % 10;
        sum += digit * digit;
        n /= 10;

    }

    return sum;
}


bool SeenBefore(int seen[], int size, int number) {   //cheaking array of seen numbers

    for (int i = 0; i < size; ++i) {

        if (seen[i] == number) {
            return true;

        }

    }

    return false;

}


void FindHappiness(int n) {
    int seen[1000]; //seen numbers
    int count = 0;

    while (n != 1 && !SeenBefore(seen, count, n)) {
        seen[count++] = n;     //current number
        n = sumofsquares(n);
    }


    if (n == 1){
            cout << "Happy Number!" << endl;

    }else{
            cout << "Sad Number!" << endl;
            
    }

}



int main() {

    int n;


        cout << "Enter a positive number: ";
        cin >> n;

        if (n < 1) {
            cout << "Invalid input! Try again!" << endl;

        } else {
            FindHappiness(n); 

        }




    return 0;
}










