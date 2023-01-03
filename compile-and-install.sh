#!/bin/bash

# Percent v1.0 by Alexia Rivera
# lachicadesistemas@gmail.com
# -----------------------------
clear
echo "This will compile and install percent in your system."
echo "Make sure gcc is installed (sudo dnf install gcc (redhat/fedora/centos)"
echo "or apt-get install gcc (debian, ubuntu and other debian-based distros)"
echo -ne '\n\n'
echo "Do you wish to Continue? [Y/N]"
read i
case $i in
Y | y | S | s)
if [ "$whoami" != "root" ]; then
echo "run this installer as sudo"
exit 1
else
gcc ./src/percent.c -o percent
sudo mv percent /usr/bin
echo "Done."
fi
;;
N | n)
echo "Cancelled."
exit 1
;;
*)
echo "Error."
exit 1
;;
esac
