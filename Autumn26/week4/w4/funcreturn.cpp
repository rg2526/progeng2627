// #include <iostream>

// int f(){
//     std::cout << "this is function f" << std::endl;
//     return 1;
//     std::cout << "printing after the first return statement" << std::endl;
//     return 2;
//     std::cout << "printing after the second return statement" << std::endl;
// }

// int main(){
//     int n = 0;
//     n = f();
//     std::cout << "n is: " << n << std::endl; 
// }

// #include <iostream>

// bool even_or_odd(int n){

//     bool out; 

//     if( (n % 2) == 0){
//         out = true;
//     }
//     else{
//         out = false;
//     }

//     return out;
// }


// bool even_or_odd_two_ret(int n){

//     if( (n % 2) == 0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// bool even_or_odd_two_ret_wrong(int n){

//     if( (n % 2) == 0){
//         return true;
//     }
//     // undefined behaviour if input is odd number
// }

// bool even_or_odd_wrong(int n){

//     bool out;

//     if( (n % 2) == 0){
//         out = true;
//     }
//     else{
//         out = false;
//     }

//     // undefined behaviour
// }

// int main(){

//     std::cout << even_or_odd(2) << std::endl;
//     std::cout << even_or_odd(3) << std::endl;

//     std::cout << even_or_odd_two_ret(2) << std::endl;
//     std::cout << even_or_odd_two_ret(3) << std::endl;

//     std::cout << even_or_odd_two_ret_wrong(2) << std::endl;
//     std::cout << even_or_odd_two_ret_wrong(3) << std::endl;

//     std::cout << even_or_odd_wrong(2) << std::endl;
//     std::cout << even_or_odd_wrong(3) << std::endl;
// }



//smallest factor 
// #include <iostream>

// int smallest_factor(int n){
//     for(int cf = 2; cf < n; cf++){

//         if( (n % cf) == 0){ // n can be divided by cf...

//             return cf;
//             //...it means we have found a factor!
//         }

//     }

// }

// int main() {
//     int test_values[] = {2, 3, 4, 15, 17, 21, 49};

//     for (int n : test_values) {
//         std::cout << n << smallest_factor(n) << '\n';
//     }

//     return 0;
// }


// prime range
// #include <iostream>

// int smallest_factor(int n) {
//     for (int cf = 2; cf < n; cf++) {
//         if (n % cf == 0) {
//             return cf; // Early return when the first factor is found.
//         }
//     }

//     return 0; // No factor found: n is prime.
// }

// int main() {
//     int first, second;
//     std::cin >> first >> second;

//     for (int n = first; n <= second; n++) {
//         if (smallest_factor(n) == 0) {
//             std::cout << n << '\n';
//         }
//     }

//     return 0;
// }