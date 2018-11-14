#ifndef BOND_H
#define BOND_H
#include <string>

class Bond
{
	private:
		std::string name_;
		double parValue_;
		double interestRate_;
		int yearsToMaturity_;
	
	public:
		Bond( const std::string& name, double parValue, double interestRate, int yearsToMaturity );
		/* The constructor which constructs the bond object. Sets the properties: name, parValue, interestRate, and yearsToMaturity
			Name is passed by value since it isn't expected to change outside of the context of the class
			parValue is also passed by value for the same reason. 
				TODO: Errors for values of zero or less
			interestRate is passed by reference since the interest rate can change for some types of bond
			yearsToMaturity decreases by 1 each year, and this change should be reflected elsewhere in the program, so we also pass by reference
			All values are constant for the constructor because the implementation of the constructor should not change what is defined by the client
		*/

		const std::string& getName( void );
		// Returns a reference to the string name. 

		void setName ( const std::string& name );
		// Sets the name attribute to 'name'

		double getParValue( void );
		// Returns a read-only parValue double value. Not expected to change

		void setParValue ( const double parValue );
		/* Sets the par value to a given value
			Takes values in US Dollars
			Errors for any values given which are less than or equal to 0
		*/

		double getInterestRate( void );
		/* Returns a read-only interestRate double reference. Can change for some bonds
			Interest rate is returned in decimal form. For instance an interest of 5% will be returned as 0.05
		*/

		void setInterestRate ( const double interestRate );
		/* Sets the interest rate to a given value
		Interest rate is given in decimal form. For instance an interest of 5% will be returned as 0.05
		Interest rates can be negative or zero, especially governmental rates in Europe
		*/

		const int& getYearsToMaturity( void );
		// Returns a read-only yearsToMaturity double reference. Decreases automatically by 1 each year

		void setYearsToMaturity ( const int yearsToMaturity );
		// Sets the yearsToMaturity to a given integer value


		const double calculateCurrentYield( const double parValue, const double interestRate, const double marketPrice );
		const double calculateCurrentYield(const double marketPrice);
		/* Calculates the yield of the bond 
			Yield is given in decimal form. For instance a yield of 5% will be returned as 0.05 
			Can either input all values manually to calculate any yield, or can just input the market price in order to find the yield on a specific Bond instance
		*/


		void displayBond( void );	
		// Displays all bond properties on the standard output stream
};

#endif
