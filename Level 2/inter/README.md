## Açıklama

---

**inter :** İki dizedeki ortak karakterleri bulur ve bu karakterleri içeren yeni bir dize oluşturur. Ortak karakterlerin her biri sadece bir kez döndürülür.

- **Örnek:**
  - **Girdi:** "abc", "bcd"
  - **Çıktı:** "bc"
  - **Açıklama:** İki dizideki ortak karakterleri bulur.

---

## Subject

```
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
```
