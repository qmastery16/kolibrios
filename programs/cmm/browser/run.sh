qemu-system-i386 -m 512 -fda kolibri.img -boot a -vga vmware -net nic,model=rtl8139 -net user -soundhw ac97 -usb -usbdevice tablet -enable-kvm -drive file=fat:rw:.