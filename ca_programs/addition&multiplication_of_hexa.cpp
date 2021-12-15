#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 const int a = 10, A =10, b = 11,B = 11,c = 12, C = 12, d =13, D =13, e = 14, E = 14, f = 15 , F = 15;
 const int size = 10;
 char chose;
 double Decimal,Hex,counter = 0;

 char ar[size];

 for ( counter ; counter < size ; counter ++ )
 {
  cout << "Enter Your Hexa-Decimal Number : ";
  cin >> Hex;
  counter = Hex;
  cout << "\nDo You Want to show the addition\n Hexa-Decimal number in Decimal <y/n> : ";
  cin >> chose;
  if ( chose == 'y' || chose == 'Y' )
  {
   if ( counter == 0 )
   {
    Decimal = ( counter * ( pow(16,0) ) );
   }
   else if ( counter == 1 )
   {
    Decimal = ( ( counter * ( pow(16,1) ) ) + ( counter * ( pow(16,0) ) ) );
   }
   else if ( counter == 2 )
   {
    Decimal = ( ( counter * ( pow(16,2) ) ) + ( counter * ( pow(16,1) ) ) + ( counter * ( pow(16,0) ) ) );
   }
   else if ( counter == 3 )
   {
    Decimal = ( ( counter * ( pow(16,3) ) ) + ( counter * ( pow(16,2) ) ) + ( counter * ( pow(16,1) ) ) + ( counter * ( pow(16,0) ) ) );
   }
   else if ( counter == 4 )
   {
    Decimal = ( ( counter * ( pow(16,4) ) ) + ( counter * ( pow(16,3) ) ) + ( counter * ( pow(16,2) ) ) + ( counter * ( pow(16,1) ) ) + ( counter * ( pow(16,0) ) ) );
   }
   else if ( counter == 5 )
   {
    Decimal = ( ( counter * ( pow(16,5) ) ) + ( counter * ( pow(16,4) ) ) + ( counter * ( pow(16,3) ) ) + ( counter * ( pow(16,2) ) ) + ( counter * ( pow(16,1) ) ) + ( counter * ( pow(16,0) ) ) );
   }
   else if ( counter == 6 )
   {
    Decimal = ( ( counter * ( pow(16,6) ) ) + ( counter * ( pow(16,5) ) ) + ( counter * ( pow(16,4) ) ) + ( counter * ( pow(16,3) ) ) + ( counter * ( pow(16,2) ) ) + ( counter * ( pow(16,1) ) ) + ( counter * ( pow(16,0) ) ) );
   }
   else if ( counter == 7 )
   {
    Decimal = ( ( counter * ( pow(16,7) ) ) + ( counter * ( pow(16,6) ) ) + ( counter * ( pow(16,5) ) ) + ( counter * ( pow(16,4) ) ) + ( counter * ( pow(16,3) ) ) + ( counter * ( pow(16,2) ) ) + ( counter * ( pow(16,1) ) ) + ( counter * ( pow(16,0) ) ) );   }
   else if ( counter == 8 )
   {
    Decimal = ( ( counter * ( pow(16,8) ) ) + ( counter * ( pow(16,7) ) ) + ( counter * ( pow(16,6) ) ) + ( counter * ( pow(16,5) ) ) + ( counter * ( pow(16,4) ) ) + ( counter * ( pow(16,3) ) ) + ( counter * ( pow(16,2) ) ) + ( counter * ( pow(16,1) ) ) + ( counter * ( pow(16,0) ) ) );
   }
   else if ( counter == 9 )
   {
    Decimal = ( ( counter * ( pow(16,9) ) ) + ( counter * ( pow(16,8) ) ) + ( counter * ( pow(16,7) ) ) + ( counter * ( pow(16,6) ) ) + ( counter * ( pow(16,5) ) ) + ( counter * ( pow(16,4) ) ) + ( counter * ( pow(16,3) ) ) + ( counter * ( pow(16,2) ) ) + ( counter * ( pow(16,1) ) ) + ( counter * ( pow(16,0) ) ) );
   }
   else
   {
    cout << "Addition Overflow\n";
    break;
   }
   
  }
  else
  {
   cout << counter << "in Hexa-Decimal =  " << Decimal << "  in Decimal\n";
   break;
  }
 }

 return 0;