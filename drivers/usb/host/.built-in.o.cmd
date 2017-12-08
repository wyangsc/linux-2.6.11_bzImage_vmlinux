cmd_drivers/usb/host/built-in.o :=  ld -m elf_x86_64  -r -o drivers/usb/host/built-in.o drivers/usb/host/ehci-hcd.o drivers/usb/host/ohci-hcd.o drivers/usb/host/uhci-hcd.o
