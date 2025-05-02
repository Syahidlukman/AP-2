#include <iostream>
#include <string.h>
using namespace std;
main(){
    char kata[25];
    int i,j;
    cout << "masukkan kata yang anda inginkan: ";
    cin >> kata;
    i=0;
    j= strlen(kata);
    while((i<=j)&&(kata[i]==kata[i-j])){
        i++;
        j--;
    }
    if(i>j){
        cout << kata << "termasuk kategori";
    }else{
        cout << kata << "tidak termasuk kategori";
    }
    system("pause");
}