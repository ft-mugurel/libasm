# libasm

42 `libasm` projesi, temel C fonksiyonlarını Assembly (`nasm`) kullanarak yeniden yazmayı amaçlayan bir projedir. Bu projede `strlen`, `strcpy`, `strcmp`, `write`, `read` ve `strdup` gibi temel fonksiyonları NASM ile kodluyoruz.

## 📌 Fonksiyonlar

Bu projede aşağıdaki fonksiyonlar Assembly ile yazılmıştır:

- `ft_strlen`  → Bir string'in uzunluğunu hesaplar.
- `ft_strcpy`  → Bir string'i başka bir string'e kopyalar.
- `ft_strcmp`  → İki string'i karşılaştırır.
- `ft_write`   → `write` sistem çağrısını kullanarak ekrana veri yazar.
- `ft_read`    → `read` sistem çağrısını kullanarak girdileri okur.
- `ft_strdup`  → Bir string'in kopyasını oluşturur.

## 🔧 Kurulum ve Derleme

Projeyi derlemek için:

```sh
make
```

Oluşan statik kütüphaneyi (`libasm.a`) test etmek için:

```sh
make test
```

Eğer testlerden sonra temizleme yapmak istersen:

```sh
make fclean
```

## 🚀 Kullanım

Kendi test dosyanı yazabilir ve aşağıdaki gibi `libasm.a` kütüphanesi ile bağlayabilirsin:

```sh
gcc -Wall -Werror -Wextra -no-pie -o tests main.c libasm.a
```

Ardından, testleri çalıştırabilirsin:

```sh
./tests
```

## 🛠️ Proje Yapısı

```
libasm/
│── src/            # Assembly kaynak dosyaları
│── main.c          # Test kaynak dosyaları
│── Makefile        # Makefile 
│── README.md       # Proje açıklaması
│── libasm.a        # Statik kütüphane (make çalıştırıldıktan sonra oluşur)
```

## 📜 Lisans

Bu proje 42 projesi olup eğitim amaçlı geliştirilmiştir.
