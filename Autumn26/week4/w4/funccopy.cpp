// #include <iostream>
// #include <cmath>

// int main(){
//     double n;

//     std::cout<<"please enter a number"<<std::endl;
//     std::cin>>n;
//     std::cout<<"|"<<n<<"| = "<<std::abs(n)<<std::endl;
// }


// #include <iostream> 

// // we define a new function called myabs
// // in the first line we specify that
// // the function has an input parameter 
// // of type double (double in)
// // (in is not a special name)
// // and returns a value of type double
// // (hence *double* myabs etc)

// double myabs(double in){

//     double abs; // not a special name, just a name

//     if(in < 0){ // if the number is negative...

//         // ...then the result is the number
//         // with a switched sign
//         abs = -in;
//     }
//     else{ // otherwise...

//         // ...the result is the same number
//         abs = in;
//     }

//     // the function returns the result
//     return abs;

// }

// // the main is almost the same

// int main(){
//     double n;
//     std::cout << "please enter a number" << std::endl;
//     std::cin >> n;
//     std::cout << "|" << n << "| = " << myabs(n) << std::endl;
//     //                                ^ except here we call myabs (not std::abs)
// }


// #include <iostream>

// // function *declaration*
// double myabs(double in);

// int main(){
//     double n;
//     std::cout << "please enter a number" << std::endl;
//     std::cin >> n;
//     std::cout << "|" << n << "| = " << myabs(n) << std::endl;
//     // function myabs is called here                        
// }

// // function *definition*
// double myabs(double in){
//     double abs;

//     if(in < 0){ 
//         abs = -in;
//     }
//     else{
//         abs = in;
//     }

//     return abs;
// }


//std::pows
// #include <iostream>
// #include <cmath>

// int main(){
//     std::cout << "2^3: " << std::pow(2, 3) << std::endl;
//     std::cout << "0.5^2: " << std::pow(0.5, 2) << std::endl;
//     std::cout << "1^0: " << std::pow(1, 0) << std::endl;
//     std::cout << "4^0.5: " << std::pow(4, 0.5) << std::endl;
//     std::cout << "4^(-0.5): " << std::pow(4, -0.5) << std::endl; 
// }


// #include <iostream>
// #include <cmath>

// int main(){
//     int x,n;

//     std::cin>>x>>n;

//     double sum = 0.0;

//     for(int i=1; i <= n;++i){
//         sum += std::pow(x,i);
//     }

//     std::cout<<sum<<'\n';

//     return 0;

// }


// #include <iostream>

// double mypow(double base, int exp){
//     double result; 
//     // we declare a variable for the result
//     // (should it be initialised? to what value?)

//     result = 0.0

//     for(int i=0;i<=n; ++i){
//         result = base * exp 
//     }

//     // TODO: use a for loop to implement the repeated multiplication algorithm 
//     // so that at the end of the loop variable result contains base^exp

//     return result;
//     // at the end we return the value we computed
//     // we *do not print* anything in the function
// }

// int main(){
//     // we test examples with integer (and non-negative) exponent

//     std::cout << "2^3: " << mypow(2, 3) << std::endl;
//     std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
//     std::cout << "1^0: " << mypow(1, 0) << std::endl;
// }

// #include <iostream>

// double mypow(double base, int exp){
//     double result = 1; 
//     // we declare a variable for the result
//     // (should it be initialised? to what value?)

//     for(int i = 0; i < exp; ++i){
//         result *= base;
//     }


//     // TODO: use a for loop to implement the repeated multiplication algorithm 
//     // so that at the end of the loop variable result contains base^exp

//     return result;
//     // at the end we return the value we computed
//     // we *do not print* anything in the function
// }

// int main(){
//     // we test examples with integer (and non-negative) exponent

//     std::cout << "2^3: " << mypow(2, 3) << std::endl;
//     std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
//     std::cout << "1^0: " << mypow(1, 0) << std::endl;

//     return 0;
// }


//neg exp mypow 
// #include <iostream>

// double mypow(double base, int exp) {
//     double result = 1.0;

//     if (exp >= 0) {
//         for (int i = 0; i < exp; ++i) {
//             result *= base;
//         }
//     } else {
//         for (int i = 0; i < -exp; ++i) {
//             result *= base;
//         }

//         result = 1.0 / result;
//     }

//     return result;
// }

// int main() {
//     std::cout << "2^3: " << mypow(2, 3) << std::endl;
//     std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
//     std::cout << "1^0: " << mypow(1, 0) << std::endl;
//     std::cout << "2^-3: " << mypow(2, -3) << std::endl;

//     return 0;
// }


// EXCERCISE:: SUM OF POWERS W MYPOW


// #include <iostream>

// int myfactorial(int in){
// // in is not a special name
// // just a name

//     int fact;
//     // variable that will store the result

//     for( int i = 1; i <= in; ++i){ //initially wrote i = 0
//         fact *= i; //initially wrote fact != in
//     }

//     // TODO: compute the factorial of in
//     // so that the result is stored in variable fact


//     return fact;
//     // return the result
//     // we *do not print* anything in the function
// }

// int main(){
//     int n; 
//     std::cout << "please enter a number" << std::endl;
//     std::cin >> n;
//     std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
// }


// #include <iostream>

// // we can define a function that returns a bool

// bool leap_year(int year){
//     bool ly;

//     if((year % 4)==0){
//         if((year%100)==0){
//             if((year%400)==0)
//             ly=true;
//         }
//         else{
//             ly = false;
//         }
//     }

//     // TODO: check whether the year is a leap year or not
//     // store result in variable ly

//     return ly;
//     // we *do not print* anything in the function
// }

// int main(){

//     int input_year;

//     std::cout << "please enter a year" << std::endl;
//     std::cin >> input_year;

//     // a function returning a bool 
//     // can be used directly in the condition
//     // of an if statement 

//     if(leap_year(input_year)){
//         std::cout << "it's a leap year" << std::endl;
//     }
//     else{
//         std::cout << "it's not a leap year" << std::endl;
//     }
// }


// #include <iostream>

// bool leap_year(int year){
//     bool ly;

//     if((year % 4)==0){
//         if((year%100)==0){
//             if((year%400)==0)
//             ly=true;
//         }
//         else{
//             ly = false;
//         }
//     }


//     return ly;
// }

// int main(){
//     std::cout << (leap_year(1600) == true) << std::endl;
//     std::cout << (leap_year(1700) == false) << std::endl;
//     std::cout << (leap_year(2000)==true)<<std::endl;
//     std::cout<<(leap_year(2100)==false)<<std::endl;
// }


//TODO:: EXCERCISES MAX OF TWO NUMBERS, MAX OF THREE NUMBERS, SUM OF POWERS AS FUNCTION