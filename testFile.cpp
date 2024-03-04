/* DO NOT MODIFY THIS FILE */

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "labFile.hpp"
#include <iostream>

TEST_CASE("test1", "Convert Fahrenheit to Kelvin") {
    REQUIRE(fahrenheitToKelvin(32) == Approx(273.15)); 
    REQUIRE(fahrenheitToKelvin(212) == Approx(373.15)); 
    REQUIRE(fahrenheitToKelvin(-40) == Approx(233.15)); 
    REQUIRE(fahrenheitToKelvin(98.6) == Approx(310.15)); 
    REQUIRE(fahrenheitToKelvin(0) == Approx(255.372));
}


TEST_CASE("test2", "Test if it's a prime number") {
    REQUIRE(isPrime(0) == false); // 0 is not prime
    REQUIRE(isPrime(1) == false); // 1 is not prime
    REQUIRE(isPrime(2) == true);
    REQUIRE(isPrime(3) == true);
    REQUIRE(isPrime(5) == true);
    REQUIRE(isPrime(7) == true);
    REQUIRE(isPrime(12) == false);
    REQUIRE(isPrime(15) == false);
    REQUIRE(isPrime(16) == false);
    REQUIRE(isPrime(18) == false);
    REQUIRE(isPrime(19) == true);  // 19 is prime
}

TEST_CASE("test3", "Calculate sum of primes") {
    REQUIRE(sumOfPrimes(10) == 17);
    REQUIRE(sumOfPrimes(20) == 77);
    REQUIRE(sumOfPrimes(0) == 0);
    REQUIRE(sumOfPrimes(2) == 2);
    REQUIRE(sumOfPrimes(100) == 1060);
}

TEST_CASE("test4", "Reverse an integer using a while loop") {
    REQUIRE(reverseInteger(12345) == 54321);
    REQUIRE(reverseInteger(987654321) == 123456789);
    REQUIRE(reverseInteger(123) == 321);
    REQUIRE(reverseInteger(1) == 1);
}

TEST_CASE("test5", "Inverted half star pyramid pattern") {
    SECTION("Printing pattern with 3 rows") {
        stringstream output;
        streambuf* oldCoutBuffer = cout.rdbuf(output.rdbuf());

        printInvertedHalfStarPyramid(3);

        string expectedOutput = "* * * \n* * \n* \n";
        REQUIRE(output.str() == expectedOutput);

        cout.rdbuf(oldCoutBuffer);
    }

    SECTION("Printing pattern with 5 rows") {
        stringstream output;
        streambuf* oldCoutBuffer = cout.rdbuf(output.rdbuf());

        printInvertedHalfStarPyramid(5);

        string expectedOutput = "* * * * * \n* * * * \n* * * \n* * \n* \n";
        REQUIRE(output.str() == expectedOutput);

        cout.rdbuf(oldCoutBuffer);
    }

    SECTION("Printing pattern with 1 row") {
        stringstream output;
        streambuf* oldCoutBuffer = cout.rdbuf(output.rdbuf());

        printInvertedHalfStarPyramid(1);

        string expectedOutput = "* \n";
        REQUIRE(output.str() == expectedOutput);

        cout.rdbuf(oldCoutBuffer);
    }
}
