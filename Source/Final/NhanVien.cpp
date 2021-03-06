#include "NhanVien.h"
NV::NV()
{
}

NV::NV(const NV& obj)
{
	hoTen = obj.hoTen;
	SDT = obj.SDT;
	diaChi = obj.diaChi;
}

void NV::Nhap()
{
	cout << "Ten: ";
	getline(cin, hoTen);
	cout << "SDT: ";
	getline(cin, SDT);
	cout << "Dia chi: ";
	getline(cin, diaChi);
}

void NV::Xuat()
{
	fflush(stdin);
	cout << "Ma nhan vien: " << this->maNV << endl;
	cout << "Ten: " << this->hoTen << endl;
	cout << "SDT: " << this->SDT << endl;
	cout << "Dia Chi: " << this->diaChi << endl;
	switch (this->chucVu)
	{
	case 1:
		cout << "Chuc vu: Bac si" << endl;
		break;
	case 2:
		cout << "Chuc vu: Tiep tan & Dieu phoi" << endl;
		break;
	case 3:
		cout << "Chuc vu: Tai vu" << endl;
		break;
	case 4: 
		cout << "Chuc vu: Ban thuoc" << endl;
		break;
	case 5:
		cout << "Chuc vu: Ke toan" << endl;
		break;
	default:
		break;
	}
}

string NV::getTen()
{
	return this->hoTen;
}

string NV::getSDT()
{
	return this->SDT;
}

string NV::getDiaChi()
{
	return this->diaChi;
}

string NV::getMaNV()
{
	return this->maNV;
}

void NV::setMaNV(string ma)
{
	this->maNV = ma;
}

int NV::getChucVu()
{
	return this->chucVu;
}

void NV::setChucVu(int cv)
{
	this->chucVu = cv;
}

int NV::getSoNgayCong()
{
	return this->soNgayCong;
}

void NV::setSoNgayCong(int snc)
{
	this->soNgayCong = snc;
}

__int64 NV::getLuongCB()
{
	return this->luongCB;
}

void NV::setLuongCB(__int64 lcb)
{
	this->luongCB = lcb;
}

__int64 NV::getPhuCap()
{
	return this->phuCap;
}

void NV::setPhuCap(__int64 pc)
{
	this->phuCap = pc;
}

void NV::setTongLuong(__int64 val)
{
	this->tongLuong = val;
}

__int64 NV::getTongLuong()
{
	return this->tongLuong;
}

int NV::getKhoaCongTac()
{
	return this->khoaCongTac;
}

NV::~NV()
{
}

BacSi::BacSi()
{
}

BacSi::BacSi(const BacSi& obj)
{
}

BacSi::~BacSi()
{
}

void BacSi::Nhap()
{
	NV::Nhap();
	cout << "Khoa cong tac (1. Noi tru, 2. Ngoai tru): ";
	cin >> this->khoaCongTac;
}

void BacSi::Xuat()
{
	NV::Xuat();
	if (this->khoaCongTac == 1)
	{
		cout << "Khoa cong tac: Noi tru" << endl;
	}
	else if (khoaCongTac == 2)
	{
		cout << "Khoa cong tac: Ngoai tru" << endl;
	}
}

TTDP::TTDP()
{
}

TTDP::TTDP(const TTDP& obj)
{
}

TTDP::~TTDP()
{
}

void TTDP::Nhap()
{
	NV::Nhap();
}

void TTDP::Xuat()
{
	NV::Xuat();
}

TaiVu::TaiVu()
{
}

TaiVu::TaiVu(const TaiVu& obj)
{
}

TaiVu::~TaiVu()
{
}

void TaiVu::Nhap()
{
	NV::Nhap();
}

void TaiVu::Xuat()
{
	NV::Xuat();
}

BanThuoc::BanThuoc()
{
}

BanThuoc::BanThuoc(const BanThuoc& obj)
{
}

BanThuoc::~BanThuoc()
{
}

void BanThuoc::Nhap()
{
	NV::Nhap();
}

void BanThuoc::Xuat()
{
	NV::Xuat();
}

KeToan::KeToan()
{
	this->luongCB = NULL;
	this->phuCap = NULL;
	this->soNgayCong = NULL;
}

KeToan::KeToan(const KeToan& obj)
{
	this->luongCB = obj.luongCB;
	this->phuCap = obj.phuCap;
	this->soNgayCong = obj.soNgayCong;
}

KeToan::~KeToan()
{
}

void KeToan::Nhap()
{
	NV::Nhap();
}

void KeToan::Xuat()
{
	NV::Xuat();
}
