# C version of Powerbank Kata using Arduino troughPlatformIO

The objective of this version is to use TDD for embedded software.

Two environment will be available for tests : `native` and `cross`.

The `native` enviroment is the host machine. This is the environment we are used to use. The test phases are here:

- Compile the test code
- Execute the test code
- Inspect output on the standard output

The provided `cross` environment uses a cross compiler for Microchip AVR chip, which drive Arduino boards.
When using the `cross` environment, the test phases are:

- Compile the test software using cross toolchain
- Download the test software on the target board
- Execute the test code on the target
- Collect test output from the target board using a serial link and display it on host standard output.

Notes:

- Some difficulties are tied to `native`/`cross` environments development (e.g. hardware interaction won't compile on `native`)
- The exact model may have to be changed in `platformio.ini`. Default is an Arduino Mega.
- The COM port associated with the board may have to be changed. Default is COM14
- Better experience would be the usage of PlatformIO extension in Visual Studio Code.

To run the tests on both environment:

    pio test

To run the tests on the host:

    pio test -e native

To run the tests on the target board:

    pio test -e cross

## Known Issues
