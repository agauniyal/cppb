# cppb
boilerplate code for unit-testing, code coverage, ci - all integrated through cmake

###Things to install before proceeding further

 - Update the system
    ```
    sudo add-apt-repository ppa:ubuntu-toolchain-r/test
    sudo apt-get update
    sudo apt-get upgrade
    ```

 - Latest GCC version (currently 6) - http://askubuntu.com/questions/746369/how-can-i-install-and-use-gcc-6-on-xenial
 - Install build essentials - http://askubuntu.com/questions/398489/how-to-install-build-essential
 - Cmake version >= 3.5, check by executing `cmake --version`
 - Install git `sudo apt-get install git`


###Get started

 - Clone the repo `git clone https://github.com/agauniyal/cppb.git`
 - cd into project `cd cppb`

 - create build directory
     `mkdir build && cd build`

 - fire up cmake and make
     `cmake .. && make`

 - cd into executable directory
     `cd ../bin/`

 - execute binary
     `./cppb`
