# Mini Buffer Overflow Program

This is a **simple C program** intentionally written to be **vulnerable to buffer overflow attacks**. It is meant for **educational and testing purposes only**, particularly for those practicing exploitation techniques in controlled environments like CTFs or virtual labs.

## 🧪 Description

The program simulates a basic password authentication system. If the correct password is entered, it reveals a secret message. However, it uses unsafe functions (`gets`) and has no stack protection, making it exploitable through classic stack-based buffer overflow techniques.

## 🔧 Installation & Compilation

Before compiling, make sure you have the necessary 32-bit libraries installed:

```bash
sudo apt install gcc-multilib libc6-dev-i386
```

Then, compile the program with:

```bash
gcc -m32 -fno-stack-protector -z execstack -std=c99 vault.c -o vault
```

### Explanation of flags:

- `-m32`: Compile for 32-bit architecture (easier for learning exploitation)
- `-fno-stack-protector`: Disable stack canaries
- `-z execstack`: Make the stack executable (for shellcode injection)
- `-std=c99`: Use C99 standard (to support `gets()` declaration)

## ✅ Usage

```bash
./vault
```

You’ll be prompted to enter a password. Try exploiting it using buffer overflow techniques.

## 🛡️ Recommendation

Use GDB, `pattern_create`, `pattern_offset`, and `objdump` to analyze and exploit the binary.

## ⚠️ Disclaimer

> This code is vulnerable **by design**. Use it **only in isolated environments** for learning and ethical hacking purposes. 
