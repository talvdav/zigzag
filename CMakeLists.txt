cmake_minimum_required(VERSION 3.20)
project(zigzag)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_COMPILER "zig cc")

message(${CMAKE_SYSTEM_NAME})

if ( ${CMAKE_SYSTEM_NAME} STREQUAL "Windows" )

  INCLUDE_DIRECTORIES(C:\\gtk-build\\gtk\\x64\\release\\include\\gtk-4.0)
  INCLUDE_DIRECTORIES(C:\\gtk-build\\gtk\\x64\\release\\include\\glib-2.0)
  INCLUDE_DIRECTORIES(C:\\gtk-build\\gtk\\x64\\release\\include\\cairo)
  INCLUDE_DIRECTORIES(C:\\gtk-build\\gtk\\x64\\release\\include\\pango-1.0)
  INCLUDE_DIRECTORIES(C:\\gtk-build\\gtk\\x64\\release\\include\\harfbuzz)
  INCLUDE_DIRECTORIES(C:\\gtk-build\\gtk\\x64\\release\\include\\gdk-pixbuf-2.0)
  INCLUDE_DIRECTORIES(C:\\gtk-build\\gtk\\x64\\release\\include\\graphene-1.0)
  INCLUDE_DIRECTORIES(C:\\gtk-build\\gtk\\x64\\release\\lib\\glib-2.0\\include)
  INCLUDE_DIRECTORIES(C:\\gtk-build\\gtk\\x64\\release\\lib\\graphene-1.0\\include)

endif()

if ( ${CMAKE_SYSTEM_NAME} STREQUAL "Linux" )

  INCLUDE_DIRECTORIES(/usr/include/gtk-4.0)
  INCLUDE_DIRECTORIES(/usr/lib64/glib-2.0/include)
  INCLUDE_DIRECTORIES(/usr/include/glib-2.0)
  INCLUDE_DIRECTORIES(/usr/include/cairo)
  INCLUDE_DIRECTORIES(/usr/include/pango-1.0)
  INCLUDE_DIRECTORIES(/usr/include/harfbuzz)
  INCLUDE_DIRECTORIES(/usr/include/gdk-pixbuf-2.0)
  INCLUDE_DIRECTORIES(/usr/include/graphene-1.0)
  INCLUDE_DIRECTORIES(/usr/lib64/graphene-1.0/include)

endif()

if ( ${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD" )

  INCLUDE_DIRECTORIES(/usr/local/include/)
  INCLUDE_DIRECTORIES(/usr/local/include/gtk-4.0)
  INCLUDE_DIRECTORIES(/usr/local/include/glib-2.0)
  INCLUDE_DIRECTORIES(/usr/local/include/cairo)
  INCLUDE_DIRECTORIES(/usr/local/include/pango-1.0)
  INCLUDE_DIRECTORIES(/usr/local/include/harfbuzz)
  INCLUDE_DIRECTORIES(/usr/local/include/gdk-pixbuf-2.0)
  INCLUDE_DIRECTORIES(/usr/local/include/graphene-1.0)
  INCLUDE_DIRECTORIES(/usr/local/lib/graphene-1.0/include)
  INCLUDE_DIRECTORIES(/usr/local/lib/glib-2.0/include)

endif()



add_executable(zigzag ./src/main.c)
