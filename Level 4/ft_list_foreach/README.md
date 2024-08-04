## Açıklama

---

**ft_list_foreach :** Bağlı listede (linked list) bulunan her bir eleman üzerinde belirtilen işlevi (function) uygular.

- **Örnek:** 
  - **Girdi:** Bağlı liste (1 -> 2 -> 3), işlev: increment (her elemanı 1 artır)
  - **Çıktı:** Bağlı liste (2 -> 3 -> 4)
  - **Açıklama:** Her elemanı verilen işlevle işler.

---

## Subject

```
Assignment name  : ft_list_foreach
Expected files   : ft_list_foreach.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a list and a function pointer, and applies this
function to each element of the list.

It must be declared as follows:

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

The function pointed to by f will be used as follows:

(*f)(list_ptr->data);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
```
