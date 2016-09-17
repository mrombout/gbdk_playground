echo off

lcc -Wa-l -Wl-m -Wl-j -c -o simple_shmup.o simple_shmup.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o bank2.o bank2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o bank3.o bank3.c
lcc -Wa-l -Wl-m -Wl-j -Wl-yt0x01 -Wl-yo4 -o simple_shmup.gb simple_shmup.o bank2.o bank3.o

rem -Wl-yp0x143=0x80
