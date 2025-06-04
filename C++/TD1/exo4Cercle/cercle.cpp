#include"cercle.h"
#define PI 3.141592
cercle::cercle(unsigned int rayon,unsigned int c1 ,unsigned int c2)
{
    cout<<"Appel du constructeur \t"<<this<<endl;
    m_rayon=rayon;
    c.m_x=c1;
    c.m_y=c2;
}

cercle::~cercle()
{
cout<<"Appel du destructeur \t"<<this<<endl;
}
unsigned int cercle:: getrayon()const{
    return m_rayon;
}
centre  cercle::getcentre()const{
    //cercle c;
      return (c);

}
unsigned int cercle:: perimetre()const{
    return 2*PI*m_rayon*m_rayon;
}
float cercle:: surface()const{
    return PI*m_rayon*m_rayon;
}
void cercle::setrayon(unsigned int r ){
    m_rayon+=r;
}
void cercle:: setcentre(unsigned int x,unsigned int y){
    c.m_x+=x;
    c.m_y+=y;
}
bool cercle::compare(const cercle& c1){
    if(m_rayon==c1.m_rayon){
      return true;
      }
    else 
     return false;
}
// void cercle::affichecentre(){
//         for (unsigned int i = -m_rayon; i <= m_rayon; ++i) {
//             for (unsigned int j = -m_rayon; j <= m_rayon; ++j) {
//                 if (std::round(std::sqrt(i * i + j * j)) == m_rayon) {
//                     std::cout << "*";
//                 } else {
//                     std::cout << ' ';
//                 }
//             }
//             std::cout << std::endl;
//         }


// }
void cercle::affichercercle() {
    //unsigned int b=m_rayon;
        for (unsigned int  i = -5; i <= 5; ++i) {
            for (unsigned int j = -5; j <= 5; ++j) {
                if (round(sqrt(i * i + j * j)) == 5) {
                    cout <<"*";
                } else {
                    cout << ' ';
                }
            }
            cout << endl;
        }
    }

bool cercle::operator==(const cercle&c){
    if(m_rayon==c.m_rayon)
      return true;
    return false;
}
