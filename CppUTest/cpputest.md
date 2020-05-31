# install CPPUtest

https://stackoverflow.com/questions/28744630/how-to-compile-cpputest-in-cygwin
* install cygwin
* download cpputest
https://github.com/cpputest/cpputest/releases/download/v3.8/cpputest-3.8.tar.gz
* extract cpputest
tar -xvf cpputest
$ which cmake
/usr/bin/cmake
 
$ mkdir ~/cpputest-3.8/cmake-build
 
$ cd ~/cpputest-3.8/cmake-build
 
$ cmake -DC++11=ON ..
 
$ make
 
$ make install
