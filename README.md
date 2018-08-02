# Planck Layout
My Planck keyboard layout and the environment to flash it with QMK firmware (tested on commit c11a26ba5 of firmware repo)

## How to enter Boot Mode:
Press `RAISE` and `LOWER` keys + secord key from top row

## Instructions to flash keyboard:
1. Install firmware dependencies: https://docs.qmk.fm/#/getting_started_build_tools
2. Create symlink. Example: `ln -s ~/projects/planck_layout/dpitty ~/projects/qmk_firmware/keyboards/planck/keymaps/dpitty`
3. Enter Boot Mode on keyboard with RESET key on layout (see section above)
4. From root of qmk_firmware repo run: `make planck/rev3:dpitty:dfu`
