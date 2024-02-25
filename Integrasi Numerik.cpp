#include<iostream>
#include<math.h>
#include<windows.h>
#include<conio.h>
#include<iomanip>
using namespace std;

float A, B, C, D, E, F, G, H, I, J, K, L , M, N, O, P, R;
float fungsi(float x)
{
    return ((pow(x,A)*pow(exp(B),(pow(x,C)/D))*cos(log(x+E)))/(sqrt(pow(x,F))*pow(sin(x+pow(log(G+x),(1/H))),I)))+(pow(x,(1/J))*exp(pow(x,1/K))*pow(cos(x+log(L+pow(x,M))),N))/((sin(pow(x,1/O))/pow(x,1/P))*exp((x)*log(x+R)));
}
int main()
{
float a,b,x,h,I,sigma,batasa,batasb,galat,mingalat,maxgalat,eps;
int i,n,pilihan;
char ulang;
system("color 0D");
    cout<<"\t ==============================================================================================================="<<endl<<endl;
    cout<<"\t                                       M E T O D E    N U M E R I K                                             "<<endl<<endl;
    cout<<"\t                    INTEGRASI NUMERIK MENGGUNAKAN METODE PIAS DENGAN KAIDAH TRAPESIUM                           "<<endl<<endl;
    cout<<"\t ==============================================================================================================="<<endl<<endl;
    cout<<"\t                                             KELOMPOK 4                                                         "<<endl<<endl;
    cout<<"\t\t\t                 1. Tyara Hestyani Putri         (08011182227049)                                         "<<endl;
    cout<<"\t\t\t                 2. Alya Winanda                 (08011182227001)                                         "<<endl;
    cout<<"\t\t\t                 3. Angra Aldora                 (08011282227053)                                         "<<endl;
    cout<<"\t\t\t                 4. Hadisa Maha Ranti            (08011182227005)                                         "<<endl;
    cout<<"\t\t\t                 5. Mutmainnah                   (08011282227059)                                         "<<endl;
    cout<<"\t\t\t                 6. Verti Puspita C.N            (08011282227053)                                         "<<endl;
    cout <<"\t\t\t                 DOSEN PENGAMPU : Dr.ANITA DESIANI S.Si M.kom                                            "<<endl<<endl;
    cout<<"\t ==============================================================================================================="<<endl<<endl<<endl;
    cout<<"Fungsi : ((pow(x,A)*pow(exp(B),(pow(x,C)/D))*cos(log(x+E)))/(sqrt(pow(x,F))*pow(sin(x+pow(log(G+x),(1/H))),I)))+(pow(x,(1/J))*exp(pow(x,1/K))*pow(cos(x+log(L+pow(x,M))),N))/((sin(pow(x,1/O))/pow(x,1/P))*exp((x)*log(x+R)))"<<endl<<endl;
    cout << "Masukkan nilai koefisien A = "; cin >> A;
    cout << "Masukkan nilai koefisien B = "; cin >> B;
    cout << "Masukkan nilai koefisien C = "; cin >> C;
    cout << "Masukkan nilai koefisien D = "; cin >> D;
    cout << "Masukkan nilai koefisien E = "; cin >> E;
    cout << "Masukkan nilai koefisien F = "; cin >> F;
    cout << "Masukkan nilai koefisien G = "; cin >> G;
    cout << "Masukkan nilai koefisien H = "; cin >> H;
    cout << "Masukkan nilai koefisien I = "; cin >> I;
    cout << "Masukkan nilai koefisien J = "; cin >> J;
    cout << "Masukkan nilai koefisien K = "; cin >> K;
    cout << "Masukkan nilai koefisien L = "; cin >> L;
    cout << "Masukkan nilai koefisien M = "; cin >> M;
    cout << "Masukkan nilai koefisien N = "; cin >> N;
    cout << "Masukkan nilai koefisien O = "; cin >> O;
    cout << "Masukkan nilai koefisien P = "; cin >> P;
    cout << "Masukkan nilai koefisien R = "; cin >> R;
	cout<<endl;
	cout<<endl<<"Nilai batas bawah integral = "; cin>>a;
	cout<<"Nilai batas atas integral = "; cin>>b;

	cout<<endl<<"Pilihan Berhenti : "<<endl;
	cout<<"1.Partisi"<<endl;
	cout<<"2.Epsilon"<<endl;
	pilihan :
	cout<<"Masukkan pilihan [1/2]:";
	cin>>pilihan;
    switch(pilihan)
    {
        case 1 :
            {
                cout<<"Banyak partisi= ";cin>>n;
                    h=(b-a)/n;
                    x=a;
                    sigma=0;
                cout<<"Nilai h= "<<h<<endl;
                cout<<"Tabel titik-titik di dalam selang["<<a<<":"<<b<<"] dengan jumlah pias = "<<n<<endl;
                cout<<"_________________________________________________________________________________________________"<<endl;
                cout<<"       r               xr                        fr "<<endl;
                cout<<"_________________________________________________________________________________________________"<<endl;
                cout<<setw(8)<<"0"<<"  "<<setw(15)<<x<<"  "<<setw(25)<<fungsi(x)<<endl;
                cout<<"_________________________________________________________________________________________________"<<endl;
                for (i=1;i<=n-1;i++)
                    {
                        x=x+h;
                        sigma=sigma+(2*fungsi(x));
                cout<<setw(8)<<i<<"  "<<setw(15)<<x<<"  "<<setw(25)<<fungsi(x)<<endl;
                cout<<"_________________________________________________________________________________________________"<<endl;
                    }
                    I=(fungsi(a)+fungsi(b)+sigma)*h/2;
                cout<<setw(8)<<n<<"  "<<setw(15)<<b<<"  "<<setw(25)<<fungsi(b)<<endl;
                cout<<"_________________________________________________________________________________________________"<<endl;
                cout<<"  Hasil Integralnya adalah : "<<I<<endl;
                cout<<"_________________________________________________________________________________________________"<<endl;

                    batasa=((fungsi(a+(2*h)))-(2*fungsi(a+h))+fungsi(a))/(h*h)+(-h*fungsi(a+(2*h)))-(2*fungsi(a+h))+fungsi (a)/(h*h);
                    batasb=((fungsi(b+(2*h)))-(2*fungsi(b+h))+fungsi(b))/(h*h)+(-h*fungsi(b+(2*h)))-(2*fungsi(b+h))+fungsi (b)/(h*h);
                    mingalat=(-(h*h)/12)*(b-a)*batasa;
                    maxgalat=(-(h*h)/12)*(b*a)*batasb;

                cout<<"Galat integrasi terletak pada "<<mingalat<<"<Error<"<<maxgalat<<endl<<endl;
                cout<<"Nilai sejati I terletak diantara "<<I+mingalat<<"<I<"<<I+maxgalat<<endl;
                break;
            }
        case 2 :
            {
                cout<<"Masukkan nilai epsilon = ";cin>>eps;
                n=1;
                do
                    {
                        h=(b-a)/n;
                        x=a; sigma=0;
                        for(i=1;i<=n-1;i++)
                            {
                                x=x+h;
                                sigma=sigma+(2*fungsi(x));
                            }
                        galat=fabs((-(h*h)/12)*(b-a)*((((fungsi(x+(2*h)))-(2*fungsi(x+h))+fungsi(x))/(h*h))+(-h*(fungsi(b+(2*h))-(2*fungsi(b+h))+fungsi(b))/(h*h))));
                        I=(fungsi(a)+sigma+fungsi(b))*h/2;
                        n++;
                    }
                while(galat>eps);
                x=a;
                for(i=1;i<=n-1;i++)
                    {
                        x=x+h;
                        sigma=sigma+(2*fungsi(x));
                        cout<<setw(8)<<i<<setw(15)<<x<<setw(25)<<fungsi(x)<<endl;
                    }
                        cout<<" Hasil integral dari fungsi adalah:"<<I<<endl<<endl;
                        cout<<" Didapat pada iterasi ke- "<<" "<<n-1<<endl<<endl;
                break;
            }
		default:
            {
			cout<<"Anda salah menginput pilihan"<<endl;
			goto pilihan; //untuk kembali ke awal
            }
        }
    }
