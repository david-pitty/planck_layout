# Planck Layout
My Planck keyboard layout and the environment to flash it.

## Magic Commands:
(see https://github.com/tmk/tmk_keyboard#magic-commands)

Magic key combination: `L-Shift` + `R-Shift`

Enable N-Key Rollover: `Magic` + N

Enter Boot Mode: `Magic` + `Pause`

## Instructions:
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
