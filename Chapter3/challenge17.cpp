/*The monthly payment on a loan may be calculated by the following formula:
payment = ((Rate * (1 + Rate)^N))/((1 + Rate)^N - 1) * L

Rate is montly interest rate, which is the annual interest rate divided by 12.
(12% annual interest would be 1 percent monthly interest.) N is the number of 
payments and L is the amount of the loan. Write a program that askts for these 
values and displays a report similar to:

Loan amount: $10000.00
Monthly interest rate: 1%
Number of payments 36
Monthly payment: $332.14
Amount paid back: $11957.15
Interest paid: $1957.15
*/