//
//  main.cpp
//  FizzBuzz2
//
//  Created by Kerima Hussen on 11/25/21.
//

#include <iostream>
#include <string>

int main()
{
    int i = 0;
    
        for ( i = 1; i <= 100; i++) {
            
            if ( i % 3 == 0)
            {
                std:: cout << "Fizz" << "\n";
            }
            else if ( i % 5 == 0)
            {
                std:: cout << "Buzz" << "\n";
            }
            else if ( i % 3 == 0 && i % 5 == 0)
            {
                std:: cout << "FizzBuzz" << "\n";
            }
            else
            {
                std:: cout << i << "\n";
        }
    }
    
    
}
