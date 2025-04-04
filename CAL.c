// 뱅크샐러드의 1/n한 값과 하나 잔액을 더했을 때 카드값이 나와야 함.
// 단 고정비(98290원)는 따로 계좌에 빼 놓았고, 이는 총 카드값에 포함이다.

#include <locale.h>
#include <stdio.h>

int main() {
	int Hcard, Hana, BankSal, FixedCost;
	int MyBill, My1N;

	setlocale(LC_ALL, "ko_KR.UTF-8");

	printf("현대카드 사용내역 : ");
	scanf("%d", &Hcard);
	printf("하나계좌 사용내역 : ");
	scanf("%d", &Hana);
	printf("뱅크샐러드 1/n : ");
	scanf("%d", &BankSal);
	printf("고정비 : ");
	scanf("%d", &FixedCost);

	printf("----------------------\n");
	int RealHcard = Hcard - FixedCost;  // 고정비는 따로 빼놓기 때문

	printf("총 현대카드 사용내역 : %d\n", Hcard);
	printf("고정비를 제외한 현대카드 사용내역 : %d\n", RealHcard);
	int BankSalPlusHana = BankSal + Hana;
	printf("뱅샐 + 하나 : %d\n", BankSalPlusHana);
	if (BankSalPlusHana == Hcard) {
		printf("카드값과 일치합니다.\n");
	} else {
		printf("계좌 잔액이 %d원 모자릅니다.\n", Hcard - BankSalPlusHana);
	}
}