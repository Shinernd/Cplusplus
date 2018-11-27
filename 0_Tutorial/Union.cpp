// union: similar to structure, but its members share the same physical memory
union mix_t {
    int l;
    struct {
        short hi;
        short lo;
    } s;
    char c[4];
} mix;

// anonymous unions
struct book_t {
    char title[50];
    char author[50];
    union {
        float dollars; // book.dollars
        int yen;
    };
} book;

// union cannot be used to store two different values simultaneously