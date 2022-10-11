// NAMA		:IMANIA DWI PUTRI VIOLITA ATMAJA
// NRP		:5022221116
// Jurusan	:TEKNIK ELEKTRO

#include <iostream>
#include <cmath>
using namespace std;

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

int mencari_V0(int input, int loss)
{
	/* Tulis fungsi mencari v0 kalian disini */
    input-=loss;
  	return input;
}

int speed_dgn_loss(int input)
{
	/* tulis fungsi hitung_loss kalian disini */
    int loss;

    if(input>=1&&input<=10){
        loss=1;
    }
    else if(input>=11&&input<=20){
        loss=3;
    }
    else if(input>=21&&input<=30){
        loss=5;
    }
    return loss;
}

int main() {
    /* tulis kode utama kalian disini */
    int input;
    float jarak,Vtangensial;
      cin >> input;
    jarak = (pow(mencari_V0(input,speed_dgn_loss(input)),2)* sin(SUDUT*3.14159*2/180) / GRAVITASI) - START_PENGUKURAN;
    jarak = round(jarak);
    Vtangensial = sqrt(jarak * GRAVITASI / sin(SUDUT*3.14159*2/180)) + speed_dgn_loss(input);
      cout << jarak << " " << Vtangensial << endl;
  	/* input adalah kecepatan tangensial maksimum roller */
  	/* std::cin >> input */

  	/* std::cout << jarak << " " << kecepatan tangensial << std::endl */
    return 0;
}
