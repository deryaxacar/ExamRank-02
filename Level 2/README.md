### Fonksiyonlar

Bu README dosyasında ExamRank2' nin 2. level'ın da çıkabilecek fonksiyonlar bulunmakta, fonksiyonların genel amacı, ve açıklamaları örnekleriyle aşşağıya eklenmişler.

---

**alpha_mirror :** Bu fonksiyon, verilen bir karakter dizisindeki her harfi alfabedeki karşıt harfe dönüştürür. Örneğin, 'a' harfi 'z' olur, 'b' harfi 'y' olur, vb. Bu işlem, her harfi alfabedeki zıt pozisyona dönüştürerek bir tür ayna yansıması oluşturur.
  - "abc" dizisini "zyx" olarak dönüştürür.

---

**camel_to_snake :** Bu fonksiyon, bir dizedeki CamelCase formatını (örneğin, "CamelCase") snake_case formatına (örneğin, "camel_case") dönüştürür. CamelCase'deki büyük harfleri alt çizgi ve küçük harflerle değiştirir.
  - "CamelCase" ifadesini "camel_case" olarak dönüştürür.

---

**do_op :** Bu fonksiyon, iki tamsayı arasında belirtilen matematiksel işlemi gerçekleştirir. İşlem türü genellikle bir karakter ile belirtilir (örneğin, '+' için toplama, '-' için çıkarma, '*' için çarpma, '/' için bölme).
  - "5 + 3" ifadesi 8 sonucunu verir. (diğer işlemleri de deneyebilirsiniz.)

---

**ft_atoi :** Bu fonksiyon, verilen bir karakter dizisini tamsayıya dönüştürür. Dizideki rakamları alır ve bir tam sayıya çevirir. Bu işlem sırasında, dizideki başındaki boşluklar ve işaretler (pozitif/negatif) dikkate alınır.
  - "42" dizisini 42 tamsayısına dönüştürür.

---

**ft_strcmp :** Bu fonksiyon, iki karakter dizisini karşılaştırır. Diziler arasındaki farkı belirlemek için kullanılır. Eğer diziler eşitse 0 döner, ilk dizinin ikinci diziden küçük olması durumunda negatif, büyük olması durumunda pozitif bir değer döner.
  - "abc" ve "abd" dizilerini karşılaştırdığında -1 döner.

---

**ft_strcspn :** Bu fonksiyon, verilen bir karakter dizisinde belirtilen karakterlerin herhangi birinin bulunmadığı ilk karakterin indeksini döndürür. Yani, dizideki belirli karakterlerin ne kadar uzakta olduğunu ölçer.
  - "hello" dizisinde 'x' karakterinin bulunmadığı için ilk karakterin indeksini döndürür.

---

**ft_strdup :** Bu fonksiyon, verilen bir karakter dizisinin bir kopyasını oluşturur ve geri döndürür. Bu işlem, dizinin her karakterini kopyalayarak yeni bir dize oluşturur.
  - "Hello" dizisini kopyalayarak yeni bir "Hello" dizisi oluşturur.

---

**ft_strrev :** Bu fonksiyon, verilen bir karakter dizisini ters çevirir ve döndürür. Dizinin sonundaki karakterden başlayarak ilk karaktere kadar olan sırayı takip eder.
  - "Hello" dizisini "olleH" olarak döndürür.

---

**inter :** Bu fonksiyon, iki dizedeki ortak karakterleri bulur ve bu karakterleri içeren yeni bir dize oluşturur. Ortak karakterlerin her biri sadece bir kez döndürülür.
  - Örneğin, "abc" ve "bcd" dizilerinde ortak karakterler "bc" olacaktır.

---

**is_power_of_2 :** Bu fonksiyon, verilen bir tamsayının 2'nin üssü olup olmadığını kontrol eder. Eğer sayı 2'nin üssü ise 1 döner, değilse 0 döner.
  - Örneğin, 8 sayısı 2'nin 3. üssüdür, bu yüzden 1 döner.

---

**last_word :** Bu fonksiyon, verilen bir karakter dizisinde son kelimeyi bulur ve döndürür. Kelimeler genellikle boşluk, tab veya yeni satır gibi ayırıcı karakterler kullanılarak ayrılır. Fonksiyon, dizinin sonundaki son kelimeyi bulur.
  - Örneğin, "Hello World" dizesinde "World" kelimesini döndürecektir.

---

**max :** Bu fonksiyon, verilen iki tamsayıdan hangisinin daha büyük olduğunu belirler ve döndürür.
  - Örneğin, 5 ve 10 arasında 10 döner.

---

**print_bits :** Bu fonksiyon, verilen bir tamsayının bit seviyesindeki temsilini ekrana yazdırır. Bu, sayının ikili (binary) formunu göstermek için kullanılır.
  - Örneğin, 5 sayısını 00000101 olarak yazdırır.

---

**reverse_bits :** Bu fonksiyon, verilen bir tamsayının bitlerini ters çevirir. Yani, sayının ikili temsilindeki bitlerin sırasını tersine çevirir.
  - Örneğin, 5 sayısının (00000101) bitlerini ters çevirerek 160 (10100000) sonucunu verir.

---

**snake_to_camel :** Bu fonksiyon, bir dizedeki snake_case formatını (örneğin, "snake_case") CamelCase formatına (örneğin, "SnakeCase") dönüştürür. Snake_case'deki alt çizgileri kaldırır ve her kelimenin ilk harfini büyük yapar.
  - Örneğin, "snake_case" ifadesini "SnakeCase" olarak dönüştürür.

---

**swap_bits :** Bu fonksiyon, verilen bir tamsayının belirli bitlerini takas eder. Bu işlem, belirli bit pozisyonlarının değerlerini değiştirir.
  - Örneğin, bir sayının 2. ve 5. bitlerini takas eder.

---

**union :** Bu fonksiyon, iki karakter dizisindeki tüm benzersiz karakterleri bulur ve bu karakterleri içeren yeni bir dize oluşturur. Karakterler sadece bir kez döndürülür.
  - Örneğin, "abc" ve "bcd" dizilerinde "abcd" dizisini oluşturur.
---

**wdmatch :** Bu fonksiyon, verilen bir karakter dizisinin diğer bir dizinin alt dizisi olup olmadığını kontrol eder. Eğer dize, diğer dizinin içinde mevcutsa 1 döner, aksi takdirde 0 döner.
  - Örneğin, "abc" dizisi "aabbcc" içinde bulunduğunda 1 döner.

---


Bu README dosyası, her bir fonksiyonun genel amacını ve kullanımını özetlemektedir.
