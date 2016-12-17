# Planck Layout

## Requirements
Vagrant requires VirtualBox with: Oracle VM VirtualBox Extension Pack

## Instructions
```bash
vagrant up
```

```bash
cd /home/vagrant/planck_firmware/keyboard/planck
sudo make clean
sudo make KEYMAP=dpitty dfu
```


