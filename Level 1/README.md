### Fonksiyonlar

Bu README dosyasında ExamRank2'nin Level 1'inde çıkabilecek kodlar bulunmakta, kodların genel amacı, açıklamaları ve örnekleriyle aşşağıya eklenmiştir.

---

**first_word :** Verilen bir karakter dizisinde (string) ilk kelimeyi bulur ve döndürür. Kelimeler genellikle boşluk, tab veya yeni satır gibi ayırıcı karakterler kullanılarak ayrılır. Fonksiyon, bu ayırıcı karakterlerden ilkini bulur ve bu noktadan itibaren gelen karakterleri okuyarak ilk kelimeyi elde eder. 

- **Örnek:**
  - **Girdi:** "Hello World"
  - **Çıktı:** "Hello"
  - **Açıklama:** "Hello" ilk kelime olduğu için döndürülür.

---

**fizzbuzz :** Klasik FizzBuzz problemine çözüm sağlar. 1'den n'e kadar olan sayıları sırayla kontrol eder ve:
  - Eğer sayı 3'e tam bölünebiliyorsa "Fizz" yazdırır.
  - Eğer sayı 5'e tam bölünebiliyorsa "Buzz" yazdırır.
  - Eğer sayı hem 3'e hem de 5'e tam bölünebiliyorsa "FizzBuzz" yazdırır.

- **Örnek:**
  - **Girdi:** 15
  - **Çıktı:** 
    ```
    1
    2
    Fizz
    4
    Buzz
    Fizz
    7
    8
    Fizz
    Buzz
    11
    Fizz
    13
    14
    FizzBuzz
    ```
  - **Açıklama:** 1'den 15'e kadar sayılar için FizzBuzz kuralına göre çıktılar üretilir.

---

**ft_putstr :** Verilen bir karakter dizisini standart çıkışa (genellikle ekrana) yazdırır. Fonksiyon, dizedeki her bir karakteri sırayla okur ve ekrana basar. 

- **Örnek:**
  - **Girdi:** "Hello World"
  - **Çıktı:** "Hello World"
  - **Açıklama:** "Hello World" metni ekrana yazdırılır.

---

**ft_strcpy :** Bir karakter dizisindeki (string) tüm karakterleri başka bir dizeye kopyalar. Kaynak dizinin (source) her bir karakteri, hedef dizinin (destination) karşılık gelen pozisyonuna kopyalanır. Fonksiyon ayrıca hedef dizinin sonuna null karakter ('\0') ekleyerek diziyi sonlandırır.

- **Örnek:**
  - **Girdi:** Kaynak dizi: "Hello", Hedef dizi: ""
  - **Çıktı:** Hedef dizi: "Hello"
  - **Açıklama:** "Hello" dizisi hedef diziye kopyalanır.

---

**ft_strlen :** Verilen bir karakter dizisinin uzunluğunu hesaplar ve geri döndürür. Dizinin içindeki karakterlerin sayısını (null karakter hariç) ölçer ve bu sayıyı döndürür.

- **Örnek:**
  - **Girdi:** "Hello"
  - **Çıktı:** 5
  - **Açıklama:** "Hello" dizisinin uzunluğu 5'tir.

---

**ft_swap :** İki tamsayı değişkeninin değerlerini birbirleriyle değiştirir. Yani, ilk değişkenin değeri ikinci değişkene, ikinci değişkenin değeri ise ilk değişkene atanır.

- **Örnek:**
  - **Girdi:** a = 5, b = 10
  - **Çıktı:** a = 10, b = 5
  - **Açıklama:** a ve b değişkenlerinin değerleri yer değiştirir.

---

**repeat_alpha :** Verilen her bir harfi alfabedeki sırasına göre tekrar eder. Harflerin alfabedeki pozisyonuna bağlı olarak tekrar sayıları belirlenir ve sonuç olarak genişletilmiş bir dize oluşturulur.

- **Örnek:**
  - **Girdi:** "abc"
  - **Çıktı:** "abbccc"
  - **Açıklama:** 'a' bir kez, 'b' iki kez, 'c' üç kez tekrar eder.

---

**rev_print :** Verilen bir karakter dizisini ters çevirir ve ekrana yazdırır. Dizinin sonundaki karakterden başlayarak ilk karaktere kadar olan sırayı takip eder.

- **Örnek:**
  - **Girdi:** "Hello"
  - **Çıktı:** "olleH"
  - **Açıklama:** "Hello" dizisi ters çevrilir ve ekrana yazdırılır.

---

**rot_13 :** Verilen bir karakter dizisini ROT13 şifreleme algoritması ile şifreler. ROT13, her harfi alfabede 13 pozisyon ileri kaydırarak şifreler. A harfi N olur, B harfi O olur, vb.

- **Örnek:**
  - **Girdi:** "Hello"
  - **Çıktı:** "Uryyb"
  - **Açıklama:** "Hello" dizisi ROT13 algoritması ile şifrelenir.

---

**rotone :** Verilen bir karakter dizisindeki her harfi alfabede bir pozisyon ileri kaydırır. 

- **Örnek:**
  - **Girdi:** "abc"
  - **Çıktı:** "bcd"
  - **Açıklama:** Her harfi bir pozisyon ileri kaydırır.

---

**search_and_replace :** Verilen bir karakter dizisindeki belirli bir karakteri başka bir karakterle değiştirir. Dizedeki tüm belirtilen karakterler, yeni karakterle değiştirilir.

- **Örnek:**
  - **Girdi:** "hello world", 'l', 'x'
  - **Çıktı:** "hexxo worxd"
  - **Açıklama:** 'l' karakterleri 'x' ile değiştirilir.

---

**ulstr :** Verilen bir karakter dizisindeki tüm küçük harfleri büyük harfe dönüştürür. Dizideki küçük harfler büyük harflere çevrilir ve dizinin geri kalan kısmı aynı kalır.

- **Örnek:**
  - **Girdi:** "Hello World"
  - **Çıktı:** "HELLO WORLD"
  - **Açıklama:** Küçük harfler büyük harflere dönüştürülür.

---

Bu README dosyası, her bir fonksiyonun genel amacını ve kullanımını özetlemektedir.
