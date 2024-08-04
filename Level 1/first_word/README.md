## Açıklama

---

**first_word :** Verilen bir karakter dizisinde (string) ilk kelimeyi bulur ve döndürür. Kelimeler genellikle boşluk, tab veya yeni satır gibi ayırıcı karakterler kullanılarak ayrılır. Fonksiyon, bu ayırıcı karakterlerden ilkini bulur ve bu noktadan itibaren gelen karakterleri okuyarak ilk kelimeyi elde eder. 

- **Örnek:**
  - **Girdi:** "Hello World"
  - **Çıktı:** "Hello"
  - **Açıklama:** "Hello" ilk kelime olduğu için döndürülür.

---

## Subject

```
Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
```
