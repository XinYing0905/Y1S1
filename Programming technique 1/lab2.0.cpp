
// NAME : TAY XIN YING
// MATRICS NO : A24CS0200

#include <iostream>
#include <string>
using namespace std;

int main() {
int num, rmd;
char choice;

do{
int sum = 0;
cout << "Enter an integer number: " ;
cin >> num ;

int dig = num;

while (dig > 0){
    rmd = dig % 10;
    sum = sum + rmd;
    cout << rmd;
    dig = dig / 10;
    if (dig > 0) {
        cout << " + ";
    }
}

cout << " = " << sum << endl;


if ((sum % 2 == 0) && (sum % 5 == 0 ) && (sum % 4 == 0) && (sum % 3 == 0)) {
    cout << sum << " is even number & multiple of 5, 4 and 3. " << endl;
}

else if ((sum % 2 == 0) && (sum % 5 == 0 ) && (sum % 4 == 0)) {
    cout << sum << " is even number & multiple of 5 and 4. " << endl;
}

else if ((sum % 2 == 0) && (sum % 5 == 0 ) && (sum % 3 == 0)) {
    cout << sum << " is even number & multiple of 5 and 3. " << endl;
}

else if ((sum % 2 == 0) && (sum % 5 == 0 ) ) {
    cout << sum << " is even number & multiple of 5. " << endl;
}

else if ((sum % 2 == 0) && (sum % 4 == 0) && (sum % 3 == 0)) {
    cout << sum << " is even number & multiple of 4 and 3. " << endl;
}

else if ((sum % 2 == 0) && (sum % 4 == 0)) {
    cout << sum << " is even number & multiple of 4. " << endl;
}

else if ((sum % 2 == 0) && (sum % 3 == 0)) {
    cout << sum << " is even number & multiple of 3. " << endl;
}

else if ((sum % 2 != 0) && (sum % 5 == 0 ) && (sum % 4 == 0) && (sum % 3 == 0)) {
    cout << sum << " is odd number & multiple of 5, 4 and 3. " << endl;
}

else if ((sum % 2 != 0) && (sum % 5 == 0 ) && (sum % 4 == 0) && (sum % 3 == 0)) {
    cout << sum << " is odd number & multiple of 5, 4 and 3. " << endl;
}

else if ((sum % 2 != 0) && (sum % 5 == 0 ) && (sum % 4 == 0)) {
    cout << sum << " is odd number & multiple of 5 and 4. " << endl;
}

else if ((sum % 2 != 0) && (sum % 5 == 0 ) && (sum % 3 == 0)) {
    cout << sum << " is odd number & multiple of 5 and 3. " << endl;
}

else if ((sum % 2 != 0) && (sum % 5 == 0 ) ) {
    cout << sum << " is odd number & multiple of 5. " << endl;
}

else if ((sum % 2 != 0) && (sum % 4 == 0) && (sum % 3 == 0)) {
    cout << sum << " is odd number & multiple of 4 and 3. " << endl;
}

else if ((sum % 2 != 0) && (sum % 4 == 0)) {
    cout << sum << " is odd number & multiple of 4. " << endl;
}

else if ((sum % 2 != 0) && (sum % 3 == 0)) {
    cout << sum << " is odd number & multiple of 3. " << endl;
}

else if (sum % 2 == 0){
    
    cout << sum << " is even number." << endl;
}

else {
    cout << sum << " is odd number" << endl;
}






cout << "\nWould you like to perform another calculation? (y/n): " ;
            cin >> choice ;
            cout << endl ;
      
        
}
while (choice == 'y' || choice == 'Y');

cout << "Thank you for using the calculator. Goodbye!" << endl;

system ("pause");

return 0;
}