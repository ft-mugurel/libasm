#include <stdio.h>
#include <string.h>

// ft_strcpy'nin prototipi
char *ft_strcpy(char *dest, const char *src);

// ft_strlen'in prototipi
size_t ft_strlen(const char *s);

// ft_strcmp'in prototipi
int ft_strcmp(const char *s1, const char *s2);

void test_ft_strcpy()
{
    printf("=== ft_strcpy Testleri ===\n");

    char src1[] = "Merhaba, Dünya!";
    char src2[] = ""; // Boş string
    char src3[] = "Tek karakter: A";
    char dest1[50], dest2[50];

    // Test 1
    ft_strcpy(dest1, src1);
    strcpy(dest2, src1);
    printf("Kaynak: %s\n", src1);
    printf("ft_strcpy Sonuç: %s\n", dest1);
    printf("strcpy Sonuç: %s\n", dest2);
    printf("%s\n", strcmp(dest1, dest2) == 0 ? "Test Başarılı" : "Test Başarısız");

    // Test 2: Boş string
    ft_strcpy(dest1, src2);
    strcpy(dest2, src2);
    printf("\nKaynak: '%s' (Boş string)\n", src2);
    printf("ft_strcpy Sonuç: '%s'\n", dest1);
    printf("strcpy Sonuç: '%s'\n", dest2);
    printf("%s\n", strcmp(dest1, dest2) == 0 ? "Test Başarılı" : "Test Başarısız");

    // Test 3: Kısa string
    ft_strcpy(dest1, src3);
    strcpy(dest2, src3);
    printf("\nKaynak: %s\n", src3);
    printf("ft_strcpy Sonuç: %s\n", dest1);
    printf("strcpy Sonuç: %s\n", dest2);
    printf("%s\n", strcmp(dest1, dest2) == 0 ? "Test Başarılı" : "Test Başarısız");
}

void test_ft_strlen()
{
    printf("\n=== ft_strlen Testleri ===\n");

    char str1[] = "Merhaba, Dünya!";
    char str2[] = ""; // Boş string
    char str3[] = "1234567890";

    // Test 1
    printf("String: %s\n", str1);
    printf("ft_strlen: %zu\n", ft_strlen(str1));
    printf("strlen: %zu\n", strlen(str1));
    printf("%s\n", ft_strlen(str1) == strlen(str1) ? "Test Başarılı" : "Test Başarısız");

    // Test 2: Boş string
    printf("\nString: '%s' (Boş string)\n", str2);
    printf("ft_strlen: %zu\n", ft_strlen(str2));
    printf("strlen: %zu\n", strlen(str2));
    printf("%s\n", ft_strlen(str2) == strlen(str2) ? "Test Başarılı" : "Test Başarısız");

    // Test 3: Kısa string
    printf("\nString: %s\n", str3);
    printf("ft_strlen: %zu\n", ft_strlen(str3));
    printf("strlen: %zu\n", strlen(str3));
    printf("%s\n", ft_strlen(str3) == strlen(str3) ? "Test Başarılı" : "Test Başarısız");
}

void test_ft_strcmp()
{
    printf("\n=== ft_strcmp Testleri ===\n");

    char str1[] = "Merhaba";
    char str2[] = "Merhaba";
    char str3[] = "Merhaba, Dünya!";
    char str4[] = ""; // Boş string
    char str5[] = "merhaba"; // Küçük harfle farklılık

    // Test 1: Aynı string
    printf("Karşılaştırma: '%s' ve '%s'\n", str1, str2);
    printf("ft_strcmp: %d\n", ft_strcmp(str1, str2));
    printf("strcmp: %d\n", strcmp(str1, str2));
    printf("%s\n", ft_strcmp(str1, str2) == strcmp(str1, str2) ? "Test Başarılı" : "Test Başarısız");

    // Test 2: Farklı uzunlukta string
    printf("\nKarşılaştırma: '%s' ve '%s'\n", str1, str3);
    printf("ft_strcmp: %d\n", ft_strcmp(str1, str3));
    printf("strcmp: %d\n", strcmp(str1, str3));
    printf("%s\n", ft_strcmp(str1, str3) == strcmp(str1, str3) ? "Test Başarılı" : "Test Başarısız");

    // Test 3: Boş string
    printf("\nKarşılaştırma: '%s' ve '%s'\n", str1, str4);
    printf("ft_strcmp: %d\n", ft_strcmp(str1, str4));
    printf("strcmp: %d\n", strcmp(str1, str4));
    printf("%s\n", ft_strcmp(str1, str4) == strcmp(str1, str4) ? "Test Başarılı" : "Test Başarısız");

    // Test 4: Küçük harfle farklılık
    printf("\nKarşılaştırma: '%s' ve '%s'\n", str1, str5);
    printf("ft_strcmp: %d\n", ft_strcmp(str1, str5));
    printf("strcmp: %d\n", strcmp(str1, str5));
    printf("%s\n", ft_strcmp(str1, str5) == strcmp(str1, str5) ? "Test Başarılı" : "Test Başarısız");
}

int main()
{
    test_ft_strcpy();
    test_ft_strlen();
    test_ft_strcmp();
    return 0;
}

