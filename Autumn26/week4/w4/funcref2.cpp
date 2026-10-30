// #include <iostream>
// #include <cmath>
// // for the square root

// bool quadsolve(double a, double b, double c, double& x1, double& x2){

//     bool realsol;
//     double delta = b*b - 4 * a * c;

//     if(delta < 0){
//         realsol = false;
//     }
//     else{

//         realsol = true;
//         x1 = (-b + std::sqrt(delta)) / (2 * a);
//         x2 = (-b - std::sqrt(delta)) / (2 * a);

//         // function sqrt computes the square root
//         // more legible and sometimes more efficient
//         // than using e.g. std::pow(delta, 0.5)

//     }

//     return realsol;
// }

// int main(){

//     double a, b, c;
//     // it is just a coincidence that these variables are named
//     // like the function parameters, they could have a different name

//     std::cout << "this program finds the real solutions" << std::endl;
//     std::cout << "of an equation of the form ax^2 + bx + c = 0" << std::endl;
//     std::cout << "please enter the coefficients a, b, c:" << std::endl;

//     std::cin >> a >> b >> c;

//     double s1, s2;
//     // we pass these variables uninitialised to the function
//     // because the values will be provided in output 
//     // by the function

//     if(quadsolve(a, b, c, s1, s2)){
//         std::cout << "the solutions are:" << std::endl;
//         std::cout << s1 << std::endl;
//         std::cout << s2 << std::endl;
//     }
//     else{
//         std::cout << "there are no real solutions" << std::endl;
//     }

// }


// #include <iostream>

// void rect(double l, double w, double& p, double& a){
//     p = 2*(l + w);
//     a = l * w;
// }

// int main(){
//     double l, w;
//     double p1, a1;

//     std::cout<<"enter two non-parallel lengths:"<<std::endl;
//     std::cin>>l>>w;

//     rect(l, w, p1, a1);
//     std::cout<<"perimeter:"<<p1<<std::endl;
//     std::cout<<"area:"<<a1<<std::endl;

//     return 0;

// }

// TASK //int division func
// #include <iostream>

// void div(int a, int b, int& div, int& r){
//     div = a / b;
//     r = a % b;
// }

// int main(){
//     int a = 19;
//     int b = 3;
//     int d1, r1;

//     div(a, b, d1, r1);

//     std::cout<<"integer divison: "<<a<<"/"<<b<<"="<<d1<<std::endl;
//     std::cout<<"remainder: "<<r1<<std::endl;

//     return 0;

// }









// //next date
// #include <iostream>

// bool leap_year(int year){
//     bool ly;

//     if(year % 4 == 0){
//         if(year % 100 == 0){
//             if(year % 400 == 0)
//             ly = true;
//         }
//         else{
//             ly = false;
//         }
//     ly = true;    
//     }

//     else{
//         ly = false;
//     }

//     // TODO: check whether the year is a leap year or not
//     // store result in variable ly

//     return ly;
// }

// void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
//     // TODO: d1, m1, y1 are inputs 
//     // corresponding to the date d1/m1/y1
//     // d2, m2, y2 are outputs that the function must compute
//     // corresponding to the date d2/m2/y2 
//     // which is meant to be the day after d1/m1/y1

//     // function leap_year is useful for this task

//     // do not begin to write code straightaway
//     // sketch some diagrams first like we did
//     // for the leap year task
//     //NEXT LINES FROM CHAT

//     d2 = d1;
//     m2 = m1;
//     y2 = y1;

//     int days_in_month;

//     if (m1 == 2) {
//         if (leap_year(y1)) {
//             days_in_month = 29;
//         } else {
//             days_in_month = 28;
//         }
//     } else if (m1 == 4 || m1 == 6 ||
//                m1 == 9 || m1 == 11) {
//         days_in_month = 30;
//     } else {
//         days_in_month = 31;
//     }

//     if (d1 < days_in_month) {
//         d2 = d1 + 1;
//     } else {
//         d2 = 1;

//         if (m1 < 12) {
//             m2 = m1 + 1;
//         } else {
//             m2 = 1;
//             y2 = y1 + 1;
//         }
//     }
// }

//     // (this function should not print anything)


// int main(){
//     // TODO: write a main to test the function
//     //NEXT LINES ALSO FROM AI 
//     int d1, m1, y1;
//     int d2, m2, y2;

//     std::cout << "Enter a date (day month year): ";
//     std::cin >> d1 >> m1 >> y1;

//     next_date(d1, m1, y1, d2, m2, y2);

//     std::cout << "The next date is: "
//               << d2 << "/" << m2 << "/" << y2 << std::endl;

//     return 0;
// }

//THIS ONE I ACC COUDLNT DO WELL W/O AI