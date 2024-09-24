#include <iostream>
#include <vector>
#include <string>
using namespace std;

void bubbleSart(vector<int> &vec){
    int n = vec.size();
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(vec[j] > vec[j + 1]){
                int const temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
}

int main() {

    vector<int> vec = {1, 3, 7, 4, 2};

    bubbleSart(vec);

    for(int num : vec){
        cout << num << " ";
    }
    cout << endl;

    //trabajo en clase
    vector<int> calificaciones;
    int cal;

    for (int i = 0; i < 7; i++){
        cout << "Ingrese la calificacion " << i + 1 << ": ";
        cin >> cal;
        calificaciones.push_back(cal);
    }

    bubbleSart(calificaciones);

    cout << calificaciones[0] << endl;
    cout << calificaciones.size() - 1 << endl;
    return 0;
}