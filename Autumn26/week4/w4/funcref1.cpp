// #include <iostream>

// int main(){
//     int n1, n2;

//     std::cout << "please enter two values" << std::endl;
//     std::cin >> n1 >> n2;

//     std::cout << "you entered:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;

//     // we swap the values
//     // in order to do so we need to use
//     // a third temporary variable

//     int tmp;

//     tmp = n1;
//     n1 = n2;
//     n2 = tmp;

//     std::cout << "after swapping the values:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;

// }

// // wrong version!
// #include <iostream>

// int main(){
//     int n1, n2;

//     std::cout << "please enter two values" << std::endl;
//     std::cin >> n1 >> n2;

//     std::cout << "you entered:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;

//     // this will not work:
//     n1 = n2;
//     n2 = n1;

//     std::cout << "after swapping the values:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;

// }

// // wrong version!
// #include <iostream>

// // type void means we are not returning anything

// // this won't work!
// void myswap(int n1, int n2){
//     int tmp;
//     tmp = n1;
//     n1 = n2;
//     n2 = tmp;
// }

// int main(){
//     int n1, n2;

//     std::cout << "please enter two values" << std::endl;
//     std::cin >> n1 >> n2;

//     std::cout << "you entered:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;

//     myswap(n1, n2);

//     std::cout << "after swapping the values:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;
// }

// #include <iostream>

// // this is the only different line:
// void myswap(int& n1, int& n2){

//     int tmp;
//     tmp = n1;
//     n1 = n2;
//     n2 = tmp;

// }

// int main(){
//     int n1, n2;

//     std::cout << "please enter two values" << std::endl;
//     std::cin >> n1 >> n2;

//     std::cout << "you entered:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;

//     myswap(n1, n2);

//     // when the function is called here
//     // the n1 in myswap becomes just a different name
//     // for the n1 in the main
//     // (same for n2)

//     std::cout << "after swapping the values:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;
// }

//equivalent program
// #include <iostream>

// // this is the only different line:
// void myswap(int& a, int& b){

//     int tmp;
//     tmp = a;
//     a = b;
//     b = tmp;

// }

// int main(){
//     int n1, n2;

//     std::cout << "please enter two values" << std::endl;
//     std::cin >> n1 >> n2;

//     std::cout << "you entered:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;

//     myswap(n1, n2);
//     // here a becomes another name for n1
//     // while b becomes another name for n2

//     // it's just about the position/order in the parentheses:
//     // n1 is passed to the first parameter (a)
//     // n2 is passed to the second parameter (b)

//     std::cout << "after swapping the values:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;
// }


// #include <iostream>
// #include <string>


// void myswap(std::string& a, std::string& b){

//     std::string tmp;
//     tmp = a;
//     a = b;
//     b = tmp;

// }

// int main(){
//     std::string txt1 = "hi";
//     std::string txt2 = "hello";

//     std::cout << "before" << std::endl;
//     std::cout << "text1:"<< txt1<<std::endl;
//     std::cout << "text2:"<<txt2<<std::endl;


//     myswap(txt1, txt2);

//     // it's just about the position/order in the parentheses:
//     // n1 is passed to the first parameter (a)
//     // n2 is passed to the second parameter (b)

//     std::cout << "after swapping :" << std::endl;
//     std::cout << "txt1: " << txt1 << std::endl;
//     std::cout << "txt2: " << txt2 << std::endl;

//     return 0;
// }

//Sorting two numbers, complete
// #include <iostream>

// void myswap(double& a, double& b){
    
//     double tmp;
//     tmp = a;
//     a = b;
//     b = tmp;
// }
// // function myswap to be used 
// // in sort_two_numbers below
// // must be included here (beforehand)

// void sort_two_numbers(double& s1, double& s2){
    
//     if(s1>s2){
//         myswap(s1,s2);
//     }
//     // complete this function
//     // so that the output is as in the examples below

//     // use function myswap within this function
//     // (remember to change the type of the parameters to double)
// }

// int main(){
//     double n1, n2;
//     std::cout << "please enter two numbers:" << std::endl;
//     std::cin >> n1 >> n2;
//     sort_two_numbers(n1, n2);
//     std::cout << n1 << " " << n2 << std::endl;
// }

//DO EXCERCISE TO SORT THREE NUMBER
//first push: void sort_three_numbers(double& s1, double& s2, double& s3){
//apparently dont alter myswap 