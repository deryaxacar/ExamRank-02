### Fonksiyonlar

Bu README dosyasında ExamRank2' nin Level 1' in de çıkabilecek fonksiyonlar bulunmakta, fonksiyonların genel amacı, ve açıklamaları aşşağıya eklenmişler.

---

**first_word :** Bu fonksiyon, verilen bir karakter dizisinde (string) ilk kelimeyi bulur ve döndürür. Kelimeler genellikle boşluk, tab veya yeni satır gibi ayırıcı karakterler kullanılarak ayrılır. Fonksiyon, bu ayırıcı karakterlerden ilkini bulur ve bu noktadan itibaren gelen karakterleri okuyarak ilk kelimeyi elde eder. 
  - Örneğin, "Hello World" dizesinde, "Hello" kelimesini döndürecektir.

---

**fizzbuzz :** Bu fonksiyon, klasik FizzBuzz problemine çözüm sağlar. 1'den n'e kadar olan sayıları sırayla kontrol eder ve:

  - Eğer sayı 3'e tam bölünebiliyorsa "Fizz" yazdırır.
  - Eğer sayı 5'e tam bölünebiliyorsa "Buzz" yazdırır.
  - Eğer sayı hem 3'e hem de 5'e tam bölünebiliyorsa "FizzBuzz" yazdırır.

Bu fonksiyon, genellikle programlama becerilerini test etmek amacıyla kullanılan bir problemdir ve sayılar üzerinde basit kontrol akışları yapar.

  ---

**ft_putstr :** Bu fonksiyon, verilen bir karakter dizisini standart çıkışa (genellikle ekrana) yazdırır. Fonksiyon, dizedeki her bir karakteri sırayla okur ve ekrana basar. Bu, kullanıcıya metin göstermek amacıyla kullanılır. 
  - Örneğin, "Hello World" ifadesini ekrana basmak için kullanılabilir.

---

**ft_strcpy :** Bu fonksiyon, bir karakter dizisindeki (string) tüm karakterleri başka bir dizeye kopyalar. Kaynak dizinin (source) her bir karakteri, hedef dizinin (destination) karşılık gelen pozisyonuna kopyalanır. Fonksiyon ayrıca hedef dizinin sonuna null karakter ('\0') ekleyerek diziyi sonlandırır. Bu işlem, diziler arasında veri kopyalamak için kullanılır. 
  - Örneğin, "Hello" dizisini "World" dizisine kopyalamak için kullanılabilir.

---

**ft_strlen :** Bu fonksiyon, verilen bir karakter dizisinin uzunluğunu hesaplar ve geri döndürür. Dizinin içindeki karakterlerin sayısını (null karakter hariç) ölçer ve bu sayıyı döndürür. Bu, dizinin uzunluğunu bulmak ve dizinin ne kadar yer kapladığını belirlemek için kullanılır. 
  - Örneğin, "Hello" dizisinin uzunluğu 5'tir.

---

**ft_swap :** Bu fonksiyon, iki tamsayı değişkeninin değerlerini birbirleriyle değiştirir. Yani, ilk değişkenin değeri ikinci değişkene, ikinci değişkenin değeri ise ilk değişkene atanır. Bu işlem, değişkenlerin değerlerini takas etmek için kullanılır. 
  - Örneğin, a ve b değişkenlerinin değerlerini yer değiştirir.

---

**repeat_alpha :** Bu fonksiyon, verilen her bir harfi alfabedeki sırasına göre tekrar eder. 
  - Örneğin, 'a' harfi bir kez, 'b' harfi iki kez, 'c' harfi üç kez tekrar eder. Harflerin alfabedeki pozisyonuna bağlı olarak tekrar sayıları belirlenir ve sonuç olarak genişletilmiş bir dize oluşturulur.

---

**rev_print :** Bu fonksiyon, verilen bir karakter dizisini ters çevirir ve ekrana yazdırır. Dizinin sonundaki karakterden başlayarak ilk karaktere kadar olan sırayı takip eder. 
  - Örneğin, "Hello" dizesini "olleH" olarak yazdırır. Bu, dizeyi ters sırada göstermek için kullanılır.

---

**rot_13 :** Bu fonksiyon, verilen bir karakter dizisini ROT13 şifreleme algoritması ile şifreler. ROT13, her harfi alfabede 13 pozisyon ileri kaydırarak şifreler. A harfi N olur, B harfi O olur, vb. Bu şifreleme yöntemi, basit bir metin şifreleme tekniğidir ve genellikle hafif düzeyde gizlilik gerektiren uygulamalarda kullanılır.
  - örneğin, "Hello" dizisini "Uryyb" olarak dönüştürür.
---

**rotone :** Bu fonksiyon, verilen bir karakter dizisindeki her harfi alfabede bir pozisyon ileri kaydırır. Yani, 'a' harfi 'b' olur, 'b' harfi 'c' olur, vb. Bu, karakter dizisindeki her harfi belirli bir kaydırma değeri ile dönüştürmek için kullanılır.
  - Örneğin, "abc" dizisini "bcd" olarak dönüştürür.
---

**search_and_replace :** Bu fonksiyon, verilen bir karakter dizisindeki belirli bir karakteri başka bir karakterle değiştirir. Dizedeki tüm belirtilen karakterler, yeni karakterle değiştirilir. 
  - Örneğin, "hello world" dizisinde 'l' karakterlerini 'x' ile değiştirmek "hexxo worxd" sonucunu verir.

---

**ulstr :** Bu fonksiyon, verilen bir karakter dizisindeki tüm küçük harfleri büyük harfe dönüştürür. Dizideki küçük harfler büyük harflere çevrilir ve dizinin geri kalan kısmı aynı kalır. 
  - Örneğin, "Hello World" dizisini "HELLO WORLD" olarak dönüştürür.

---

Bu README dosyası, her bir fonksiyonun genel amacını ve kullanımını özetlemektedir.
