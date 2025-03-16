# Fikstür Oluşturucu

Bu C programı, bir takım listesinden rastgele bir haftalık fikstür oluşturur. Program, belirli bir takımı o hafta maç yapmayacak şekilde ayırarak diğer takımları rastgele eşleştirir.

## Gereksinimler

* C derleyicisi (örneğin, GCC)
* "Team.txt" adlı bir metin dosyası (takım isimlerini içerir)

## Dosya Yapısı

* `main.c`: C kaynak kodu
* `Team.txt`: Takım isimlerini içeren metin dosyası (her satırda bir takım)
* `Fikstur.txt`: Oluşturulan fikstürün yazıldığı metin dosyası

## Nasıl Çalıştırılır

1.  `Team.txt` dosyasını, her satırda bir takım ismi olacak şekilde oluşturun ve programın bulunduğu dizindeki `team` klasörüne kaydedin. Tam yol: `C:\\Users\\demir\\Desktop\\team\\Team.txt`
2.  `main.c` dosyasını bir C derleyicisi ile derleyin. Örneğin, GCC kullanıyorsanız:

    ```bash
    gcc main.c -o fikstur
    ```

3.  Oluşturulan çalıştırılabilir dosyayı çalıştırın:

    ```bash
    fikstur
    ```

4.  Program, `Fikstur.txt` adlı bir dosya oluşturacak ve bu dosyaya haftalık fikstürü yazacaktır. Dosya yolu: `C:\\Users\\demir\\Desktop\\team\\Fikstur.txt`

## Programın İşleyişi

1.  Program, `Team.txt` dosyasını okur ve takım isimlerini bir diziye yükler.
2.  Rastgele bir takım seçilir ve o hafta maç yapmayacak takım olarak belirlenir.
3.  Diğer takımlar rastgele eşleştirilir ve `Fikstur.txt` dosyasına yazılır.
4.  Maç yapmayacak takımın ismi, fikstür dosyasının en üstüne yazılır.
5.  Takımların eşleşmeleri "vs" ile ayrılmış şekilde ve her maç eşleşmesi bir satırda olacak şekilde `Fikstur.txt` dosyasına yazılır.
6.  Eğer `Team.txt` dosyası boş ise `Fikstur.txt` dosyasına "dosya bos" yazılır.
7.  Eğer `Team.txt` dosyası açılamazsa veya `Fikstur.txt` dosyası yazılamazsa, hata mesajı görüntülenir.

## Kod Yapısı

* `MAX_LINE_LENGTH`: Bir satırın maksimum uzunluğu.
* `MAX_LINES`: Takım sayısının maksimum değeri.
* `rand_exclude(int min, int max, int exclude)`: Belirtilen aralıkta, belirtilen sayıyı hariç tutarak rastgele bir sayı üreten fonksiyon.
* `main()`: Ana fonksiyon. Dosya okuma, rastgele eşleştirme ve dosya yazma işlemlerini gerçekleştirir.

## Notlar

* Program, 19 takımı destekleyecek şekilde yazılmıştır. Takım sayısını değiştirmek isterseniz, `d=rand()%19;` satırını ve `MAX_LINES` tanımını güncelleyin.
* Takım sayısının tek sayı olması durumunda bir takım her hafta maç yapmayacaktır.
* Dosya yolları, `Team.txt` ve `Fikstur.txt` dosyalarının bulunduğu konuma göre ayarlanmalıdır.
* Program, temel bir fikstür oluşturma işlevi sunar. Daha gelişmiş özellikler (örneğin, lig tablosu, puan hesaplama) eklemek için kod üzerinde değişiklikler yapılması gerekmektedir.
