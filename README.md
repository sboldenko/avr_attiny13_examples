# avr_attiny13_examples

The projects for **avr-gcc compiler**.

Description of projects:
- **tiny13_led_blink** - led blink using util/delay.h library.
- **tiny13_led_blink_timer0** - led blink using timer/counter0 in normal mode.

For programming MCU use **avrdude**.

Change the variable **PROGRAMMER** in **Makefile**, if you use other programmer, not **usbasp**.

> Makefile options:

> **all**- build project;

> **signature** - read MCU ID;

> **fuse** - programming MCU fuse-bits;

> **flash** - programming MCU flash;

> **clean** - clean temporary files and "build" folder.

![TinyModule13 ver1.0](/doc/board_photo.jpg)