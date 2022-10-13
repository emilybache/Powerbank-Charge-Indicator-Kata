# C version of Powerbank Kata using Arduino troughPlatformIO

The objective of this version is to use TDD for embedded software.

Two environment will be available for tests : `native` and `cross`.

The `native` enviroment is a standard C toolchain on the kata host. This is the kind of environment we are used to use. The test phases are here:

- Compile the test code
- Execute the test code
- Inspect output on the standard output

The provided `cross` environment uses a cross compiler for Microchip AVR chip, which drive Arduino boards. The cross compiler is also available on kata host.
When using the `cross` environment, the test phases are:

- Compile the test software using cross toolchain
- Download the test software on the target board
- Execute the test code on the target
- Collect test output from the target board using a serial link and display it on host standard output.

Notes:

- Some difficulties are tied to `native`/`cross` environments development (e.g. hardware interaction won't compile on `native`)
- The exact model may have to be changed in `platformio.ini`. Default is an Arduino Pro Micro.
- The COM port associated with the board may have to be changed. Default is COM14
- Better experience would be the usage of PlatformIO extension in Visual Studio Code.
- Default firmware, with no link with the kata but activating leds is provided. To install it on the remote kata host: `pio remote run -t upload -r`
