#include <iostream>
#include <cmath>
#include <vector>
#include <ctime>

int main(){
    auto& print = std::cout;
    // double red =3.99; 
    //  int max;
    //  int y = 60;
    //  int sum = x+y;
    //  print << x << '\n';
    //  print << y << '\n';
    //  print << sum << '\n';
    //  print << (char)sum << '\n';
    //  max = std::max(x,y);
    // max = std::min(x,y);
    //  print << max ;
    //   max = std::pow(x,y);
    //   max = std::sqrt(9);
    //  max = std::abs(-8);
    // max =round(red);
    //  max = ceil(red);
    //     max = floor(red);
    //   print << max ;
    // std::string ans;
    // print << "do you understad c++?:";
    // std::cin >> ans  ;
    // print << ans ;
    /*Hypotensue Program Finderss*/
    //    double a;
    //    double b;
    //    double c;
    //    print << "Enter side a = ";
    //    std::cin >> a;
    //    print << "Enter side b = ";
    //    std::cin >> b;
    //    c = sqrt(pow(a,2) + pow(b,2));
    //    print << "Side c = " << c;
    /*Age Program*/
    // int age;
    // print << "Enter your age = ";
    // std::cin >> age;
    // if(age <= 18){
    //     print << "You Are a Child basically a skill issue";
    // }
    //  else if(age <=0 ){
    //         print << "You Havent been born GitGud";
    //     }
    //      else if(age <= 100 ){
    //         print << "You are Ded Combo Wombo"; 
    //     }
    // else{
    //         print << "Your A Grownup GGs";
    //     }
    /*Calculator Program*/
    // char op ;
    // double num1;
    // double num2;
    // double result;
    //  std::cout << "********* CALCULATOR ***********\n";
    //     print << "Enter either (+ - * /) =      ";
    //     std::cin >> op;
    //     print << "Enter Number 1 =      ";
    //     std::cin >> num1;
    //     print << "Enter Num 2 =     ";
    //     std::cin >> num2;
    //     switch(op){
    //     case '+':
    //        result = num1 + num2;
    //        print <<"result = " << result << '\n';
    //        break;
    //     case '-':
    //        result = num1 - num2;
    //        print <<"result = " << result << '\n';
    //        break;
    //     case '*':
    //        result = num1 * num2;
    //        print <<"result = " << result << '\n';
    //        break;
    //     case '/':
    //        result = num1 / num2;
    //        print <<"result = " << result << '\n';
    //        break;
    //     default:
    //        print << "This is not a valid operator ";
    //     }
    //   print << "********************************";
    /*Temperature Conversion 
    Programs*/
    // double temp;
    // char unit; 
    // print << "***************Temperature******************\n";
    // print << "F = Fahrehiet\n";
    // print << "C = Celsius\n";
    // print << "What unit would you like to convert to\n";
    // std::cin >> unit;
    // if(unit == 'F' || unit == 'f'){
    //     print << "Enter The temperature in Celsius =    ";
    //     std::cin >> temp;
    //     temp = (1.8 * temp) + 32.0;
    //     print << "Temperature =     " << temp<< " F\n";
    // }
    // else if(unit == 'C' || unit == 'c'){
    //         print << "Enter The temperature in Fahrenhiet =    ";
    //     std::cin >> temp;
    //     temp = (temp - 32.0) / 1.8;
    //     print << "Temperature =     " << temp<< " CcC\n";
    // }
    // else{
    //     print << "Enter in Only C or F\n";    
    // }
    //   print << "******************************************";
    //      std::string poyo;
    //      while(poyo.empty()){
    //         print << "Do you like Kirby =   ";
    //         std::getline(std::cin, poyo);
    //      }
    //      print << poyo << "   Yes is the answer Poyo";
        // int i;
        // for(i = 1; i<= 10; i++){
        //     print << i << '\n';
        // }    
        /*Random Number Generator*/
        // srand(time(NULL));
        // int num1 =(rand() % 6) + 1;
        // int num2 =(rand() % 6) + 1;
        // int num3 =(rand() % 6) + 1;
        // print << num1 << '\n';
        // print << num2 << '\n';
        // print << num3 << '\n';
           /*Random Event Generator*/
        // srand(time(0)); 
        // int randnum = rand() % 5  + 1 ;
        // switch(randnum){
        //     case 1:
        //         print << "It Will Rain";
        //         break;
        //     case 2:
        //         print << "It is Sunny";
        //         break;
        //     case 3:
        //         print << "Thunderstorm";
        //         break;
        //     case 4: 
        //         print << "Hail Storm";
        //         break;
        //     case 5:
        //         print << "Tornados";
        //         break;
        //     }
        /*Number Guesser Games*/
        int num;
        int guess;
        int tries = 0;
        srand(time(NULL));
        num = (rand()% 100) +1;
        print << "*******Number Guessing Game***********\n";
        do{
            print << "Guess A number between 1-100 =    ";
            std::cin >> guess;
            tries++;
            if(guess > num){
                print << "Too High\n";
            }
            else if(guess < num){
                print << "Too low\n";
            }
            else{
                print << "Correct no of tries =     "<< tries <<'\n';
            }
        }while (guess != num);

        print << "*****************************************\n";
     return 0;
}   