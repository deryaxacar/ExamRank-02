### Fonksiyonlar

Bu README dosyasında ExamRank2'nin 2. level'ın da çıkabilecek kodlar bulunmakta, kodların genel amacı açıklamaları ve örnekleri aşşağıya eklenmiştir.

---

**alpha_mirror :** Verilen bir karakter dizisindeki her harfi alfabedeki karşıt harfe dönüştürür. Örneğin, 'a' harfi 'z' olur, 'b' harfi 'y' olur, vb. Bu işlem, her harfi alfabedeki zıt pozisyona dönüştürerek bir tür ayna yansıması oluşturur.

- **Örnek:**
  - **Girdi:** "abc"
  - **Çıktı:** "zyx"
  - **Açıklama:** Her harfin alfabedeki karşıt harfi ile değiştirilmesi.

---

**camel_to_snake :** Bir dizedeki CamelCase formatını (örneğin, "CamelCase") snake_case formatına (örneğin, "camel_case") dönüştürür. CamelCase'deki büyük harfleri alt çizgi ve küçük harflerle değiştirir.

- **Örnek:**
  - **Girdi:** "CamelCase"
  - **Çıktı:** "camel_case"
  - **Açıklama:** CamelCase'den snake_case formatına dönüşüm sağlar.

---

**do_op :** İki tamsayı arasında belirtilen matematiksel işlemi gerçekleştirir. İşlem türü genellikle bir karakter ile belirtilir (örneğin, '+' için toplama, '-' için çıkarma, '*' için çarpma, '/' için bölme).

- **Örnek:**
  - **Girdi:** "5 + 3"
  - **Çıktı:** 8
  - **Açıklama:** Belirtilen matematiksel işlemi gerçekleştirir.

---

**ft_atoi :** Verilen bir karakter dizisini tamsayıya dönüştürür. Dizideki rakamları alır ve bir tam sayıya çevirir. Bu işlem sırasında, dizideki başındaki boşluklar ve işaretler (pozitif/negatif) dikkate alınır.

- **Örnek:**
  - **Girdi:** "42"
  - **Çıktı:** 42
  - **Açıklama:** Karakter dizisini tamsayıya dönüştürür.

---

**ft_strcmp :** İki karakter dizisini karşılaştırır. Diziler arasındaki farkı belirlemek için kullanılır. Eğer diziler eşitse 0 döner, ilk dizinin ikinci diziden küçük olması durumunda negatif, büyük olması durumunda pozitif bir değer döner.

- **Örnek:**
  - **Girdi:** "abc", "abd"
  - **Çıktı:** -1
  - **Açıklama:** İki dizeyi karşılaştırır ve farkı döndürür.

---

**ft_strcspn :** Verilen bir karakter dizisinde belirtilen karakterlerin herhangi birinin bulunmadığı ilk karakterin indeksini döndürür. Yani, dizideki belirli karakterlerin ne kadar uzakta olduğunu ölçer.

- **Örnek:**
  - **Girdi:** "hello", "x"
  - **Çıktı:** 5
  - **Açıklama:** Belirtilen karakterlerin bulunmadığı ilk karakterin indeksini döndürür.

---

**ft_strdup :** Verilen bir karakter dizisinin bir kopyasını oluşturur ve geri döndürür. Bu işlem, dizinin her karakterini kopyalayarak yeni bir dize oluşturur.

- **Örnek:**
  - **Girdi:** "Hello"
  - **Çıktı:** "Hello"
  - **Açıklama:** Karakter dizisinin bir kopyasını oluşturur.

---

**ft_strrev :** Verilen bir karakter dizisini ters çevirir ve döndürür. Dizinin sonundaki karakterden başlayarak ilk karaktere kadar olan sırayı takip eder.

- **Örnek:**
  - **Girdi:** "Hello"
  - **Çıktı:** "olleH"
  - **Açıklama:** Karakter dizisini ters çevirir.

---

**inter :** İki dizedeki ortak karakterleri bulur ve bu karakterleri içeren yeni bir dize oluşturur. Ortak karakterlerin her biri sadece bir kez döndürülür.

- **Örnek:**
  - **Girdi:** "abc", "bcd"
  - **Çıktı:** "bc"
  - **Açıklama:** İki dizideki ortak karakterleri bulur.

---

**is_power_of_2 :** Verilen bir tamsayının 2'nin üssü olup olmadığını kontrol eder. Eğer sayı 2'nin üssü ise 1 döner, değilse 0 döner.

- **Örnek:**
  - **Girdi:** 8
  - **Çıktı:** 1
  - **Açıklama:** Sayının 2'nin üssü olup olmadığını kontrol eder.

---

**last_word :** Verilen bir karakter dizisinde son kelimeyi bulur ve döndürür. Kelimeler genellikle boşluk, tab veya yeni satır gibi ayırıcı karakterler kullanılarak ayrılır.

- **Örnek:**
  - **Girdi:** "Hello World"
  - **Çıktı:** "World"
  - **Açıklama:** Son kelimeyi bulur.

---

**max :** Verilen iki tamsayıdan hangisinin daha büyük olduğunu belirler ve döndürür.

- **Örnek:**
  - **Girdi:** 5, 10
  - **Çıktı:** 10
  - **Açıklama:** İki tamsayıdan büyük olanı döndürür.

---

**print_bits :** Verilen bir tamsayının bit seviyesindeki temsilini ekrana yazdırır. Bu, sayının ikili (binary) formunu göstermek için kullanılır.

- **Örnek:**
  - **Girdi:** 5
  - **Çıktı:** 00000101
  - **Açıklama:** Sayının bit seviyesindeki temsilini gösterir.

---

**reverse_bits :** Verilen bir tamsayının bitlerini ters çevirir. Yani, sayının ikili temsilindeki bitlerin sırasını tersine çevirir.

- **Örnek:**
  - **Girdi:** 5 (00000101)
  - **Çıktı:** 160 (10100000)
  - **Açıklama:** Bitlerin sırasını tersine çevirir.

---

**snake_to_camel :** Bir dizedeki snake_case formatını (örneğin, "snake_case") CamelCase formatına (örneğin, "SnakeCase") dönüştürür. Snake_case'deki alt çizgileri kaldırır ve her kelimenin ilk harfini büyük yapar.

- **Örnek:**
  - **Girdi:** "snake_case"
  - **Çıktı:** "SnakeCase"
  - **Açıklama:** Snake_case'den CamelCase formatına dönüşüm sağlar.

---

**swap_bits :** Verilen bir tamsayının belirli bitlerini takas eder. Bu işlem, belirli bit pozisyonlarının değerlerini değiştirir.

- **Örnek:**
  - **Girdi:** 5 (00000101), takas edilen bitler: 2 ve 5
  - **Çıktı:** 160 (10100000)
  - **Açıklama:** Belirli bitlerin yerlerini değiştirir.

---

**union :** İki karakter dizisindeki tüm benzersiz karakterleri bulur ve bu karakterleri içeren yeni bir dize oluşturur. Karakterler sadece bir kez döndürülür.

- **Örnek:**
  - **Girdi:** "abc", "bcd"
  - **Çıktı:** "abcd"
  - **Açıklama:** İki dizideki tüm benzersiz karakterleri bulur.

---

**wdmatch :** Verilen bir karakter dizisinin diğer bir dizinin alt dizisi olup olmadığını kontrol eder. Eğer dize, diğer dizinin içinde mevcutsa 1 döner, aksi takdirde 0 döner.

- **Örnek:**
  - **Girdi:** "abc", "aabbcc"
  - **Çıktı:** 1
  - **Açıklama:** İlk dizinin diğer dizinin içinde bulunup bulunmadığını kontrol eder.

---

Bu README dosyası, her bir fonksiyonun genel amacını ve kullanımını özetlemektedir.
