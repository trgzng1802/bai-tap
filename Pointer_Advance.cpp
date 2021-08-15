#include <iostream>
#include <string>
using namespace std;

struct con_nguoi
{
    con_nguoi(string ht, int t,  float cc, float d ) 
    {
        ho_ten = ht;
        tuoi = t;
        chieu_cao = cc;
        diem = d;
        gioi_tinh = true;
    }
    string ho_ten;
    int tuoi;
    float chieu_cao;
    float diem;
    bool gioi_tinh;
};

void chuyen_gioi(con_nguoi *nguoi)
{
    cout << "Dang chuyen gioi " << (*nguoi).ho_ten << endl;
    (*nguoi).gioi_tinh = false;
}

int main()
{
    con_nguoi thi_sinh[3] =
    {
        con_nguoi ("Thao", 18, 1.65, 9),
        con_nguoi ("Hang", 22, 1.60, 8.5),
        con_nguoi ("Huong", 20, 1.75, 7),
    };
    con_nguoi *thu_khoa= nullptr;
    chuyen_gioi(&thi_sinh[1]);
    cout << "Gioi tinh cua Hang: " << (thi_sinh[1].gioi_tinh ? "Female" : "Male") << endl;
    return 0;
}