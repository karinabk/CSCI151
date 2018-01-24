#include <stdio.h>
typedef struct {
	int ID;
	char c,s,d;
	int accaunt_balance;
}BankCustomer;


int main(){
	setvbuf(stdout,NULL,_IONBF,0);
	BankCustomer customers[10];
	FILE *val;
	val=fopen("customers","r");
	if (val==NULL){
		printf("error with file");
	return 1;}else
	{printf("opened");}


}
