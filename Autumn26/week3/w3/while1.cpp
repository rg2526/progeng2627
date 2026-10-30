// #include <iostream>

// int main(){
//     int n, counter = 0;

//     std::cin >> n;

//     while(counter < n){

//         std::cout << "hello" << std::endl;

//         counter = counter + 1;
//     }
// }

// #include <iostream> 

// int main(){
//     int n=4, counter=0;

//     while(counter<n){
//         std::cout<<counter<<std::endl;
//         counter = counter + 1;
//     }
// }

// #include <iostream> 

// int main(){
//     double x, acc = 1;
//     int n, counter = 0;

//     std::cin>> x>> n;

//     while(counter<n){
//         acc = acc * x;
//         counter = counter + 1;

//     }

//     std::cout<<x<<"^"<<n<<"="<<acc<<std::endl;
// }


//EXCERCISE mulltiplication as repeated sum
// #include <iostream>

// int main(){
//     double x, acc=1;
//     int n, counter =0;

//     std::cin>>x>>n;

//     while(counter<n){
//         acc = acc + x;
//         counter = counter + 1;
//     }

//     std::cout<<x<<"*"<<n<<"="<<acc<<std::endl;
// }
// wrong, get one more than needed 



// #include <iostream>

// int main(){
//     double x, acc=0;
//     int n, counter =0;

//     std::cin>>x>>n;

//     while(counter<n){
//         acc = acc + x;
//         counter = counter + 1;
//     }

//     std::cout<<x<<"*"<<n<<"="<<acc<<std::endl;
// }

// #include <iostream>

// int main(){
//     int n = 1;

//     while(n != 0){ // != means different or not equal
//         std::cin >> n;
//         std::cout << n << std::endl;
//     }
// }




//CHAT EXCERCISE ANSWERS!!!!!

//echo w text 
// #include <iostream>
// #include <string>

// int main() {
//     std::string text;

//     std::cin >> text;

//     while (text != "STOP") {
//         std::cout << text << '\n';
//         std::cin >> text;
//     }

//     return 0;
// }

//sum so far
// #include <iostream>

// int main() {
//     int n;
//     int sum = 0;

//     std::cout << "enter a number:\n";
//     std::cin >> n;

//     while (n != 0) {
//         sum = sum + n;

//         std::cout << "the sum so far is:\n";
//         std::cout << sum << '\n';

//         std::cout << "enter a number:\n";
//         std::cin >> n;
//     }

//     return 0;
// }

//avg so far
// #include <iostream>

// int main() {
//     int n;
//     int sum = 0;
//     int count = 0;
//     double average;

//     std::cout << "enter a number:\n";
//     std::cin >> n;

//     while (n != 0) {
//         sum = sum + n;
//         count = count + 1;

//         average = static_cast<double>(sum) / count;

//         std::cout << "the average so far is:\n";
//         std::cout << average << '\n';

//         std::cout << "enter a number:\n";
//         std::cin >> n;
//     }

//     return 0;
// }


//div as repeated sub 
// #include <iostream>

// int main() {
//     int a, b;
//     int quotient = 0;
//     int remainder;

//     std::cout << "enter a and b:\n";
//     std::cin >> a >> b;

//     if (a < 0 || b <= 0) {
//         std::cout << "Please enter a >= 0 and b > 0.\n";
//         return 1;
//     }

//     remainder = a;

//     while (remainder >= b) {
//         remainder = remainder - b;
//         quotient = quotient + 1;
//     }

//     std::cout << "quotient = " << quotient << '\n';
//     std::cout << "remainder = " << remainder << '\n';

//     return 0;
// }

