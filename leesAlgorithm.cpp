#include <iostream>
#include <vector>
#include <queue> // Kuyruklar için gerekli başlık dosyası

using namespace std; // C++ standardını kullan

int dl[] = {-1, 0, 1, 0};  // 4 yöne hareket
int dc[] = {0, 1, 0, -1};  // 4 yöne hareket

int n = 5, m = 5;  // Matris boyutları
int mat[5][5];     // 5x5'lik örnek matris

void lee(int start_x, int start_y) {
    queue<int> X, Y;  // Kuyrukları burada başlat
    
    X.push(start_x);  // Başlangıç pozisyonunu kuyruğa ekle
    Y.push(start_y);
    
    mat[start_x][start_y] = -1;  // Başlangıç noktasını işaretle
    
    int x, y, xx, yy;
    while (!X.empty()) {  // Kuyruk boş olmadığı sürece çalış
        x = X.front();  // Mevcut pozisyonu al
        y = Y.front();
        
        for (int i = 0; i < 4; i++) {  // 4 yöne git
            xx = x + dl[i];
            yy = y + dc[i];
            
            // Geçerli pozisyon kontrolü
            if (xx >= 0 && xx < n && yy >= 0 && yy < m && mat[xx][yy] != -1) {
                X.push(xx);  // Yeni pozisyonu kuyruğa ekle
                Y.push(yy);
                mat[xx][yy] = -1;  // Bu pozisyonu işaretle
            }
        }
        
        X.pop();  // Kuyruktan pozisyonu çıkar
        Y.pop();
    }
}

int main() {
    // Örnek olarak tüm matrisi 0 ile dolduruyoruz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            mat[i][j] = 0;
        }
    }

    // Algoritmayı 2, 2 pozisyonunda başlat
    lee(2, 2);
    
    // Sonucu yazdır
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
