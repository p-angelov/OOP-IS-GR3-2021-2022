#pragma once

#ifndef RATIONAL_H_INCLUDED
#define RATIONAL_H_INCLUDED

struct Rational
{
    int num;
    int denom;

};

class Rational
{
    private:
        int numerator;
        int denominator;

    public:
        Rational();
        Rational(int num);
        Rational(int num, int denom);

        Rational(int num = 0, int denom = 1); //стойности по подразбиране

        int getNumerator();
        int getDenominator();

        void setNumerator(int newNominator);
        void setDenominator(int newDenominator);
};