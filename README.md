# Plaka Kodu Şehir Bulma Programı

Bu C programı, kullanıcının girdiği plaka koduna karşılık gelen şehri bir metin dosyasından okuyarak ekrana yazdırır. Ayrıca, belirli plaka kodlarının Doğu Karadeniz Bölgesi'nde yer aldığını belirtir ve geçersiz plaka kodu girişlerini kontrol eder.

## İçindekiler

* Açıklama
* Gereksinimler
* Derleme ve Çalıştırma
* Dosya Yapısı
* Kullanım
* Örnekler
* Notlar

## Açıklama

Program, kullanıcının konsol üzerinden girdiği plaka numarasını alır. Daha sonra, belirtilen bir metin dosyasından (plaka.txt.txt) ilgili satırı okuyarak ekrana yazdırır. Ayrıca, program, belirli plaka numaralarının Doğu Karadeniz Bölgesi'nde yer aldığını kontrol eder ve geçersiz plaka numaralarını algılar.

## Gereksinimler

* C derleyicisi (örneğin, GCC)
* "plaka.txt.txt" adında bir metin dosyası. Bu dosya, her satırda bir plaka kodu ve karşılık gelen şehir bilgisini içermelidir.

## Derleme ve Çalıştırma

1.  **Metin dosyasını oluşturun:**
    * "plaka.txt.txt" adında bir metin dosyası oluşturun.
    * Her satıra bir plaka kodu ve şehir adını virgülle ayırarak ekleyin. Örneğin:
        ```
        01,Adana
        02,Adıyaman
        03,Afyonkarahisar
        ...
        81,Düzce
        ```
    * dosyayı C:\Users\demir\Desktop\C dili ile Sehir Plakalari\ dizinine kaydedin.
2.  **C kodunu derleyin:**
    * C kodunu bir C derleyicisi kullanarak derleyin. Örneğin, GCC ile:
        ```bash
        gcc plaka_bul.c -o plaka_bul
        ```
3.  **Programı çalıştırın:**
    * Derlenen programı çalıştırın:
        ```bash
        ./plaka_bul
        ```

## Dosya Yapısı

* `plaka_bul.c`: C kaynak kodu.
* `plaka.txt.txt`: Plaka kodları ve şehir isimlerini içeren metin dosyası.

## Kullanım

1.  Programı çalıştırın.
2.  Konsolda "Please enter your license plate code" mesajını göreceksiniz.
3.  Bir plaka kodu girin ve Enter'a basın.
4.  Program, plaka koduna karşılık gelen şehri ekrana yazdıracaktır.
5.  Eğer girilen plaka kodlarından 61, 8, 28, 29, 52, 53, veya 69 ise "Dogu Karadeniz Bolgesinde Yer Alir." mesajı ekrana yazdırılacaktır.
6.  Eğer 81 den büyük bir plaka kodu girerseniz "Wrong code entered" mesajı ekrana yazdırılacaktır.

## Örnekler

* **Giriş:** 34
    * **Çıktı:** 34,İstanbul
* **Giriş:** 61
    * **Çıktı:** 61,Trabzon
        Dogu Karadeniz Bolgesinde Yer Alir.
* **Giriş:** 90
    * **Çıktı:** Wrong code entered

## Notlar

* Metin dosyasının yolu kod içinde sabit olarak belirtilmiştir. Dosya yolunu değiştirmek isterseniz, `fopen` fonksiyonundaki dosya yolunu güncelleyin.
* Program, metin dosyasındaki satır numaralarını kullanarak plaka kodunu bulur. Bu nedenle, metin dosyasındaki satırların sırası önemlidir.
* Program sadece 81'e kadar olan plaka kodlarını destekler.
* Dosyanın dizin yolunun doğru olduğundan emin olun.
* Plaka.txt.txt dosyası program ile aynı dizinde olmalıdır veya dosya yolunu belirtmelisiniz.
