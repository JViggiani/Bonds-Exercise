#include <bond.h>
#include <string>
#include <iostream>

Bond::Bond( const std::string name, const double parValue, const double& interestRate, const int& yearsToMaturity )
{
	// setName(name); ??
	name_ = name;
	parValue_ = parValue;
	interestRate_ = interestRate;
	yearsToMaturity_ = yearsToMaturity;
}

const std::string Bond::getName( void ) 
{
   return name_;
}

void Bond::setName ( const std::string name )
{
	name_ = name;
}

const double Bond::getParValue( void ) 
{
   return parValue_;
}

void Bond::setParValue ( const double parValue )
{
	parValue_ = parValue;
}

const double& Bond::getInterestRate( void ) 
{
   return interestRate_;
}

void Bond::setInterestRate ( const double interestRate )
{
	interestRate_ = interestRate;
}

const int& Bond::getYearsToMaturity( void ) 
{
   return yearsToMaturity_;
}

void Bond::setYearsToMaturity ( const int yearsToMaturity )
{
	yearsToMaturity_ = yearsToMaturity;
}

const double Bond::calculateCurrentYield( const double parValue, const double interestRate, const double marketPrice ) 
{
   double currentYield = (parValue * interestRate) / marketPrice;
   return currentYield;
}

const double Bond::calculateCurrentYield(const double marketPrice)
{
	double currentYield = (parValue_ * interestRate_) / marketPrice;
	return currentYield;
}

void Bond::displayBond( void )
{
	std::cout << "Bond Name: " << name_ << "\n"
		<< "Bond Par Value: " << parValue_ << "\n"
		<< "Interest Rate: " << interestRate_ << "%\n"
		<< "Years to Maturity: " << yearsToMaturity_ << "\n";
};

