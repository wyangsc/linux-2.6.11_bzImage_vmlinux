cmd_crypto/built-in.o :=  ld -m elf_x86_64  -r -o crypto/built-in.o crypto/api.o crypto/scatterwalk.o crypto/cipher.o crypto/digest.o crypto/compress.o crypto/proc.o crypto/hmac.o crypto/crypto_null.o crypto/md5.o crypto/sha1.o crypto/sha256.o crypto/aes.o crypto/crc32c.o
