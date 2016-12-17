Exec { path => [ "/bin/", "/sbin/" , "/usr/bin/", "/usr/sbin/" ] }

$packages = ['dfu-programmer', 'build-essential',
             'gcc-avr', 'git', 'binutils-avr',
             'gdb-avr', 'avr-libc', 'avrdude']

package { $packages:
  ensure => installed,
}

$path_to_repo = '/home/vagrant/planck_firmware'
file { 'make a directory for the firmware':
  name      => $path_to_repo,
  ensure    => directory,
}

vcsrepo { 'clone firmware with specific commit':
  path     => $path_to_repo,
  ensure   => present,
  provider => git,
  source   => 'git://github.com/jackhumbert/qmk_firmware.git',
  revision => 'bdb6dceaebc358dd4aae593d51d3ba0dd61858a9',
}

file { 'link my layout':
  path   => "${path_to_repo}/keyboard/planck/keymaps/dpitty.c",
  ensure => link,
  target => '/vagrant/keyboard_custom_layout.c',
}

exec { 'ensure NKRO is enabled':
  cwd     => "${path_to_repo}/keyboard/planck",
  command => 'sed -i "s/^# NKRO_ENABLE/NKRO_ENABLE/g" Makefile',
}
