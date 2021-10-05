#include <stdio.h>

int main(void) {
    int WithdrawAmt;
    float TotalWithdraw,TotalAmt;
	printf("Enter amount = $");
	scanf("%d",&WithdrawAmt);
	printf("Enter Total Amount = $");
	scanf("%.2f",&TotalAmt);
	if(WithdrawAmt%5 != 0) {
	    printf("Sorry Enter Amount in Multiple  of 5 \n");
	    printf("Total Amount = %.2f",TotalAmt);
	}else {
	    TotalWithdraw = WithdrawAmt + 0.50;
	    if(TotalWithdraw < TotalAmt) {
	        printf("Amount Left = %.2f",TotalAmt-TotalWithdraw);
	    } else {
	        printf("Sorry Enter Amount is more than balance available \n");
	        printf("Total Amount = %.2f",TotalAmt);
	    }
	}
	return 0;
}


/*

Pooja would like to withdraw X $US from an ATM.
The cash machine will only accept the transaction if X is a multiple of 5, 
and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges).
For each successful withdrawal the bank charges 0.50 $US. 
Calculate Pooja's account balance after an attempted transaction.

Input
Positive integer 0 < X <= 2000 - the amount of cash which Pooja wishes to withdraw.

Nonnegative number 0<= Y <= 2000 with two digits of precision - Pooja's initial account balance.

*/
