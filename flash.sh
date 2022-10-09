sudo mkdir -p /mnt/pico
sudo mount /dev/sda1 /mnt/pico
sudo cp *.uf2 /mnt/pico
sudo sync
sudo umount /mnt/pico
