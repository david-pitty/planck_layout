# Planck Layout
My Planck keyboard layout and the environment to flash it.

## Instructions

Spawn VM with dependencies:
```bash
vagrant up
```

From VM (`vagrant ssh`):
```bash
cd /home/vagrant/planck_firmware/keyboard/planck
sudo make clean
# enter boot mode (see Magic Commands section)
sudo make KEYMAP=dpitty dfu
```

## Magic Commands:
(see https://github.com/tmk/tmk_keyboard#magic-commands)

Magic key combination: `L-Shift` + `R-Shift`
Enable N-Key Rollover: `Magic` + N
Enter Boot Mode: `Magic` + `Pause`

## Requirements
Vagrant requires VirtualBox with: Oracle VM VirtualBox Extension Pack

