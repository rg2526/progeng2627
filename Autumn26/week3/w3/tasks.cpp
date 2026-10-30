//max so far

// #include <iostream>


// int main(){
//     int n, curmax;

//     std::cout<<'please enter number:'<<std::endl;
//     std::cin>>n;

//     curmax = n;
//     //initially current max is first n entered

//     std::cout<<'maximum so far:'<<curmax<<std::endl;

//     while(n != 0){

//         std::cout<<'please enter number:'<<std::endl;
//         std::cin>>n;

//         //if current n>max
//         if(n>curmax){
//             curmax=n;
//             //update curmax
//         }

//         std::cout<<'maximum so far:'<<curmax<<std::endl;

//     }
// }


//add min so far

// #include <iostream>

// int main(){
//     int n, curmax, curmin;

//     std::cout << "please enter number:" << std::endl;
//     std::cin >> n;

//     curmax = n;
//     curmin = n;
    // initially the current maximum is 
    // the first number entered

//     std::cout << "maximum so far: " << curmax << std::endl;
//     std::cout<<"mininum so far:"<<curmin<<std::endl;

//     while(n != 0){

//         std::cout << "please enter number:" << std::endl;
//         std::cin >> n;

//         // if the current number is greater than the current max...
//         if(n > curmax){
//             curmax = n;
//             // ...we update the current max
//         }

//         if(n < curmin){
//             curmin = n;
//         }

//         std::cout << "maximum so far:" << curmax << std::endl;
//         std::cout<< "minimum so far:" << curmin << std::endl;
//         // we print the current maximum in any case 
//         // whether or not it was updated in this iteration of the loop
//     }

// }  
//SMTH SO OFF W CODE 

// #include <iostream>

// int main() {
//     int n, curmax, curmin;

//     std::cout << "please enter number:" << std::endl;
//     std::cin >> n;

//     curmax = n;
//     curmin = n;

//     std::cout << "maximum so far: " << curmax << std::endl;
//     std::cout << "minimum so far: " << curmin << std::endl;

//     while (n != 0) {
//         std::cout << "please enter number:" << std::endl;
//         std::cin >> n;

//         if (n != 0) {
//             if (n > curmax) {
//                 curmax = n;
//             }

//             if (n < curmin) {
//                 curmin = n;
//             }

//             std::cout << "maximum so far: " << curmax << std::endl;
//             std::cout << "minimum so far: " << curmin << std::endl;
//         }
//     }

//     return 0;
// }
//this works from cha

// DO REST OF TASKS

//collatz conjecture

// #include <iostream>

// int main(){
//     int n;
    
//     std::cout<<"please enter a number:"<<std::endl;
//     std::cin>>n;

//     while( n!= 1){
//         if(n%2 == 0){
//             n= n/2;
//         }
//         else{
//             n = 3*n +1;
//         }

//         std::cout<< n << " ";
//     }

//     std::cout<< std::endl;

//     return 0;

// }


//modified w steps and max, used chat
// #include <iostream>

// int main() {
//     int n;
//     int steps = 0;
//     int max;

//     std::cout << "Please enter a number:" << std::endl;
//     std::cin >> n;

//     max = n;

//     while (n != 1) {
//         if (n % 2 == 0) {
//             n = n / 2;
//         }
//         else {
//             n = 3 * n + 1;
//         }

//         std::cout << n << " ";

//         steps++;

//         if (n > max) {
//             max = n;
//         }
//     }

//     std::cout << std::endl;
//     std::cout << "Number of steps: " << steps << std::endl;
//     std::cout << "Maximum number: " << max << std::endl;

//     return 0;
// }




//DO GUESS THE NUMBER 

// DO PRIME NUMBER AND DEVISE OWN

