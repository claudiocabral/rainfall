class N {
    char buffer[0x60];
    int a;
    N(int b) {
        a = b;
    }
    void setAnnotation(char *annotation) {
        auto size = strlen(annotation);
        memcpy(buffer, annotation, size);
    }
    virtual auto operator +(N& other) {
        return this.a + other.a;
    }
}

int main(int argc, char **argv) {
    if (argc < 2)
        exit(1);
    auto * ptr = new N(5);
    auto * other_ptr = new N(6);
    *ptr + *other_ptr;
}
