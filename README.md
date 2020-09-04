# bst

bst (pronounced "bestie") is a one-stop shop for running programs
in isolated Linux environments. It is, effectively, a combination
of `unshare`, `mount`, `setarch`, `chroot`, and many others; taking
care of all the low-level minutæ to get in an environment that is
as isolated as possible.

The main purpose of bst is running CI/build processes in a somewhat
deterministic fashion.

# Usage

```
$ bst <exe> <args...>
```

# Building from source

bst uses [Meson][meson] for its build system.

From the source directory:

```
$ meson ./build
$ ninja -C ./build
$ sudo ninja -C ./build install
```

[meson]: https://mesonbuild.com
