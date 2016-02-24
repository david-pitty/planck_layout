# install dependencies
sudo apt-get install -y git dfu-programmer build-essential gcc-avr binutils-avr gdb-avr avr-libc avrdude lsusb

# clone repos
mkdir -p ~/projects/planck
git clone https://github.com/david-pitty/planck_layout.git ~/projects/planck/planck_layout
git clone https://github.com/jackhumbert/qmk_firmware.git ~/projects/planck/qmk_firmware

# symlink my layout
ln -s ~/projects/planck/planck_layout/keyboard_custom_layout.c ~/projects/planck/qmk_firmware/keyboard/planck/keymaps/dpitty.c

# Uncomment line 140 on Makefile
# to enable NKRO support

# at this point the keyboard needs to be in boot mode
cd ~/projects/planck/qmk_firmware/keyboard/planck
sudo make clean
sudo make KEYMAP=dpitty dfu
