cmake_minimum_required (VERSION 3.8)

project ("TokenTest")

file(GLOB source_files CONFIGURE_DEPENDS
        "*.h"
        "*.cpp"
)


add_executable(TokenTest ${source_files} copySafeStrTok.h my_strpbrk.h)

if (CMAKE_VERSION VERSION_GREATER 3.12)
    set_property(TARGET TokenTest PROPERTY CXX_STANDARD 20)
endif()
