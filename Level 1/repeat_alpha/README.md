## Açıklama

---

**repeat_alpha :** Verilen her bir harfi alfabedeki sırasına göre tekrar eder. Harflerin alfabedeki pozisyonuna bağlı olarak tekrar sayıları belirlenir ve sonuç olarak genişletilmiş bir dize oluşturulur.

- **Örnek:**
  - **Girdi:** "abc"
  - **Çıktı:** "abbccc"
  - **Açıklama:** 'a' bir kez, 'b' iki kez, 'c' üç kez tekrar eder.

---

## Subject

```
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
```
