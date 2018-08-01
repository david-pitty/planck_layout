# Planck Layout
My Planck keyboard layout and the environment to flash it with QMK firmware (tested on commit c11a26ba5 of firmware repo)

## Instructions:
1. https://docs.qmk.fm/#/getting_started_build_tools
2. Create symlink. Example: `ln -s ~/projects/planck_layout/dpitty ~/projects/qmk_firmware/keyboards/planck/keymaps/dpitty`
3. Enter boot mode on keyboard with RESET key on layout
4. From qmk_firmware repo run: `make planck/rev3:dpitty:dfu`

## Magic Commands: (DEPRICATED)
(see https://github.com/tmk/tmk_keyboard#magic-commands)

Magic key combination: `L-Shift` + `R-Shift`

Enable N-Key Rollover: `Magic` + N

Enter Boot Mode: `Magic` + `Pause`

## Instructions: (DEPRICATED)
1. Spawn VM with dependencies:
```bash
vagrant up
```

2. Enter Boot Mode using Magic Commands

3. From VirtualBox go to Devices > USB > `ATMEL <Device name>`o

4. Unplug the keyboard and enter Boot Mode again (so that VirtualBox recognizes the device)

5. From VM (`vagrant ssh`):
```bash
cd /home/vagrant/planck_firmware/keyboard/planck
sudo make clean
sudo make KEYMAP=dpitty dfu
```

## Requirements
Vagrant requires VirtualBox with: Oracle VM VirtualBox Extension Pack
