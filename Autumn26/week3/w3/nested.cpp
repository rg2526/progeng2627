// #include <iostream>

// int main(){
//     int n;
//     std::cin >> n;

//     for(int c = 0; c < n; c++){
//         std::cout << "*"; 
//         // there is no << std::endl
//         // because we want them on the same row
//     }

// }


// #include <iostream>

// int main(){
//     int n;
//     std::cin >> n;

//     // n times we draw one row
//     // note that we need a different variable
//     // for the loop counter
//     for(int c2 = 0; c2 < n; c2++){

//         // the following loop draws one row
//         for(int c = 0; c < n; c++){
//             std::cout << "*"; 
//             // there is no << std::endl
//             // because we want them on the same row
//         }

//         std::cout << std::endl;
//         // we go on a newline after each row

//     }

// }


// EXCERCISE:: REWRITE W WHILE LOOP
// from chat :(

// #include <iostream>

// int main() {
//     int n;

//     std::cin>>n;

//     int c2 = 0;

//     while (c2 < n) {
//         int c = 0;

//         while (c < n) {
//             std::cout << "*";
//             c++;
//         }

//         std::cout << std::endl;
//         c2++;
//     }

//     return 0;
// }




// EXCERCISE:: REDO W MULTIPLACATION TABLE 
//alsochat

// #include <iostream>

// int main(){
//     int n;
//     std::cin>>n;

//     for(int row=1;row<=n;row++){
//         for(int col=1;col<=n;col++){
//             std::cout<<row*col<<"\t";
//         }
//         std::cout<<std::endl;
//     }

//     return 0;
// }
