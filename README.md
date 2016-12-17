# Planck Layout

```bash
vagrant up
```

To flash keyboard, from vm do:
```bash
cd /home/vagrant/planck_firmware/keyboard/planck
sudo make clean
sudo make KEYMAP=dpitty dfu
```
