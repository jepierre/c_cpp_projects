dump configuration for clang
clang-format -style=llvm -dump-config > .clang-format

 & 'C:\Program Files\LLVM\bin\clang-format.exe' -style='{BasedOnStyle: Google, IndentWidth: 4}' .\car.cpp --Werror

place the .clang-format at the top level of your project, i.e. the current working directory. 

 https://clang.llvm.org/docs/ClangFormatStyleOptions.html

 https://clang.llvm.org/docs/ClangFormat.html