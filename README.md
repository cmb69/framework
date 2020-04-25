## [Ice framework](http://www.iceframework.org)
Simple and fast PHP framework delivered as C-extension.

[![Latest Stable Version](https://poser.pugx.org/iceframework/framework/v/stable.svg)](https://packagist.org/packages/iceframework/framework) [![Total Downloads](https://poser.pugx.org/iceframework/framework/downloads.svg)](https://packagist.org/packages/iceframework/framework) [![Latest Unstable Version](https://poser.pugx.org/iceframework/framework/v/unstable.svg)](https://packagist.org/packages/iceframework/framework) [![License](https://poser.pugx.org/iceframework/framework/license.svg)](https://packagist.org/packages/iceframework/framework)

### Stage
[![Build Status](https://travis-ci.org/ice/framework.svg?branch=dev)](https://travis-ci.org/ice/framework)

##### How to contribute?
1. Fork the [ice/framework](https://github.com/ice/framework) repository.
2. Create a new branch for each feature or improvement.
3. Send a pull request from each feature branch to the **dev** branch*.

*please do not send files from `build/` directory (they are generated automatically), just those from the `ice/`.

### Benchmark
[![RPS](https://raw.githubusercontent.com/ice/website/master/public/img/doc/benchmark.jpg)](http://www.iceframework.org/doc/introduction/benchmark)

### Installation
Ice is a C-extension, so you need to download a binary for your platform or compile it from source code.

### Download
* openSUSE package: [php7-ice](http://software.opensuse.org/package/php7-ice)
* Windows: [DLLs](http://www.iceframework.org/info/download)
* source code of [stable releases](https://github.com/ice/framework/releases)

### Compilation*
* Compile on Linux/Unix/Mac. There are two ways to compile Ice framework from sources:
 * compile from `build/` directory and C-files - recommended for beginners and for production machines; C-files are generated by Ice Team after merge and tests pass
 * build by [zephir](https://github.com/phalcon/zephir) (generate, compile and install extension) - recommended for developers and for testing next release; by this way you generate C-files from Zep-files, so you can get newest features/fixes but it could be unstable; after generate by zephir the files will be located in the `ext/` directory
* [build on Windows](http://www.iceframework.org//doc/introduction/windows)

*before compilation please read the [Requirements](#requirements).

***

#### Compile from `build/`:
Clone and install from GitHub:
```sh
git clone --depth=1 https://github.com/ice/framework.git
cd framework/
./install
```

###### or install using [composer](https://getcomposer.org/):
```sh
composer create-project iceframework/framework --no-dev
```

##### Add extension to your php.ini:
```ini
extension=ice.so
```

Finally restart the webserver

***

#### Build by zephir* (generate, compile and install extension):
###### By default `./vendor/bin/zephir` runs zephir. To build Ice you must run zephir begin in the `framework/` directory:
```sh
cd framework/
./vendor/bin/zephir build
```

*if you don't have zephir you need to compile zephir, but first you have to install [zephir-parser](https://github.com/ice/zephir-parser).

##### Compile zephir
###### You can install zephir using composer. If you already have ice and you are inside `framework/` directory:
```sh
composer update
```

###### or clone zephir repo:
```sh
mkdir vendor/phalcon/ && cd $_
git clone https://github.com/phalcon/zephir.git

# Install zephir
./install

# Create symbolic link
mkdir ../../bin && cd $_
ln -s ../phalcon/zephir/bin/zephir
```

###### Run zephir first time:
```sh
cd framework/
./vendor/bin/zephir
```

***

#### Requirements
You can build from C-files or build by zephir

##### To build the PHP extension:
* gcc >= 4.4/clang++ >= 3.x/vc++ 11
* gnu make >= 3.81/Windows nmake
* php development headers and tools

##### To compile zephir-parser
* re2c

Ubuntu:
```sh
sudo apt-get install php7-dev libpcre3-dev gcc make re2c
```

Suse:
```sh
sudo zypper install php7-devel pcre-devel gcc make re2c
```

CentOS/Fedora/RHEL
```sh
sudo yum install php-devel pcre-devel gcc make re2c
```

Windows  
[Zephir Installation](https://github.com/phalcon/zephir/blob/master/WINDOWS.md)

### License
Ice is open-sourced software licensed under the New BSD License. See the [LICENSE](http://www.iceframework.org/license) file for more information.

***
Copyright (c) 2014-2020 Ice Team.