#include <stdio.h>

typedef struct
{
	int tu;
	int mau;
} phanso_t;

int UCLN(int a, int b)
{
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else {
			b -= a;
		}
	}


}

phanso_t NHAN(phanso_t A, phanso_t B)
{
	phanso_t kq;
	kq.tu = A.tu * B.tu;
	kq.mau = A.mau * B.mau;
	return kq;
}

phanso_t CHIA(phanso_t A, phanso_t B)
{
	phanso_t kq;
	kq.tu = A.tu * B.mau;
	kq.mau = A.mau * B.tu;
	return kq;
}

phanso_t CONG(phanso_t A, phanso_t B)
{

	phanso_t kq;
	kq.tu = A.tu * B.mau + B.tu * A.mau;
	kq.mau = A.mau * B.mau;
	return kq;
}

phanso_t TRU(phanso_t A, phanso_t B)
{

	phanso_t kq;
	kq.tu = A.tu * B.mau - B.tu * A.mau;
	kq.mau = A.mau * B.mau;
	return kq;
}

phanso_t TOIGIAN(phanso_t A)
{

	int k = UCLN(A.tu, A.mau);
	phanso_t kq;
	kq.tu = A.tu / k;
	kq.mau = A.mau / k;
	return kq;
}




void main()
{
	phanso_t A;
	phanso_t B;
	phanso_t KQ;
	A.tu = 10;
	A.mau = 20;
	B.tu = 59;
	B.mau = 27;
	KQ = TOIGIAN(TRU(A, B));

	printf("TU la %d\r\nMAU la %d\r\n", KQ.tu, KQ.mau);

}