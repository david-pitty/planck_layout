# install dependencies
sudo apt-get install -y git dfu-programmer build-essential gcc-avr binutils-avr gdb-avr avr-libc avrdude

# clone repos
mkdir -p ~/projects/planck
git clone https://github.com/david-pitty/planck_layout.git ~/projects/planck/planck_layout
git clone https://github.com/jackhumbert/qmk_firmware.git ~/projects/planck/qmk_firmware

cd ~/projects/planck/qmk_firmware
# NKRO support working at this commit and ubuntu14 only
git reset --hard bdb6dce

# symlink my layout
ln -s ~/projects/planck/planck_layout/keyboard_custom_layout.c ~/projects/planck/qmk_firmware/keyboard/planck/keymaps/dpitty.c

# enable NKRO support
sed -i "s/^# NKRO_ENABLE/NKRO_ENABLE/g" ~/projects/planck/qmk_firmware/keyboard/planck/Makefile

# at this point the keyboard needs to be in boot mode
cd ~/projects/planck/qmk_firmware/keyboard/planck
sudo make clean
sudo make KEYMAP=dpitty dfu
