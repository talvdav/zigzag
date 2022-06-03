# zigzag

Project to learn GTK4 Programming in C using zig as build tool
## Build and Run

```
$ zig build run
```

## Clangd config 

### Linux

#### Opensuse Tumbleweed

.clangd

```
CompileFlags:
    Add:
      - "-I/usr/include/gtk-4.0"
      - "-I/usr/lib64/glib-2.0/include"
      - "-I/usr/include/glib-2.0"
      - "-I/usr/include/cairo"
      - "-I/usr/include/pango-1.0"
      - "-I/usr/include/harfbuzz"
      - "-I/usr/include/gdk-pixbuf-2.0"
      - "-I/usr/include/graphene-1.0"
      - "-I/usr/lib64/graphene-1.0/include"
```
        
        
        
