// Hello World.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    return 0;
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin

/*
#include <iostream> satırı önişlemci yönergesi adı verilen özel bir satır türüdür. Bu önişlemci yönergesi;
konsoldan / konsoldan metin okumamıza ve yazmamıza izin veren C++ standart kitaplığının bir parçası olan iostream kitaplığının içeriğini kullanmak istediğimizi belirtir.
8. satırda std::cout kullanmak için bu satıra ihtiyacımız var. Bu satırı hariç tutmak 8. satırda derleme hatasına neden olur. Çünkü derleyici aksi halde std::cout'un ne olduğunu bilmez.

6. satır derleyiciye main adında bir fonksiyon yazacağımızı (tanımlayacağımızı) söyler. Her C++ programının bir ana işlemi olmak zorundadır.Yoksa bağlantı kurulamaz.

7 ve 11. satırlar içerisindeki her şey ana işlevin bir parçasıdır. Buna fonksiyon gövdesi denir.

8. satırdaki std::cout -> karakter çıktısı anlamına gelir. " << " operatörü çıktısı alınacak konsola harf veya sayı göndermemize izin verir.

return 0; bir dönüş ifadesidir. Bu ifade işletim sistemine 0 değerini döndürür ve bu da "her şey yolunda gitti!" anlamına gelir.Programdaki son ifadedir.

*/