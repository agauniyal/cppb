# cppb [![wercker status](https://app.wercker.com/status/f558077221e8bbe3323ad0071ca59af3/s/master "wercker status")](https://app.wercker.com/project/bykey/f558077221e8bbe3323ad0071ca59af3)

boilerplate code for unit-testing, code coverage, ci - all integrated.

###Things to install before proceeding further

 - Update the system
    ```
    sudo add-apt-repository ppa:ubuntu-toolchain-r/test
    sudo apt-get update
    sudo apt-get upgrade
    ```

 - Latest GCC version (currently 6) - http://askubuntu.com/questions/746369/how-can-i-install-and-use-gcc-6-on-xenial
 - Install build essentials - http://askubuntu.com/questions/398489/how-to-install-build-essential
 - Install git - `sudo apt-get install git`
 - Install [meson](https://github.com/mesonbuild/meson) - `sudo apt-get install meson python3 ninja-build`

###Get started

 - Clone the repo `git clone https://github.com/agauniyal/cppb.git`
 - cd into project `cd cppb`

 - create build directory
     `mkdir build && cd build`

 - fire up meson and ninja
     `meson .. && ninja`

 - tests - `ninja test`

 - execute binaries created inside build directory

