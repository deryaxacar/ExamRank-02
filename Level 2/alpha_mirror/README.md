## Açıklama

---

**alpha_mirror :** Verilen bir karakter dizisindeki her harfi alfabedeki karşıt harfe dönüştürür. Örneğin, 'a' harfi 'z' olur, 'b' harfi 'y' olur, vb. Bu işlem, her harfi alfabedeki zıt pozisyona dönüştürerek bir tür ayna yansıması oluşturur.

- **Örnek:**
  - **Girdi:** "abc"
  - **Çıktı:** "zyx"
  - **Açıklama:** Her harfin alfabedeki karşıt harfi ile değiştirilmesi.

---

## Subject

```
Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
```
