----------------------------------------------------------------
Name: chaudhari akshay
Class: SE  Div:A
Roll No: 32
----------------------------------------------------------------
echo "1.ls";
echo "2.fdisk -l";
echo "3.mount -t ntfs /dev/sdb1 /mnt/";
echo "4.umount /mnt/";
echo "5.su root";
echo 
read -p  "Enter the choice" opt
case $opt in
 1 ) ls ;;
 2 ) fdisk -l ;;
 3 ) mount -t vfat /dev/sdb1 /mnt/ ;;
 4 ) umount /mnt/ ;;
 5 ) su root ;;
\?) exit 1;;
esac

============================================
Output:
============================================
[akshay@akshay ~]$ sh ass6.sh
1.ls
2.fdisk -l
3.mount -t ntfs /dev/sda5 /mnt/
4.umount /mnt/
5.su root

Enter the choice5
Password: 
[root@akshay akshay]# sh ass6.sh
1.ls
2.fdisk -l
3.mount -t ntfs /dev/sda5 /mnt/
4.umount /mnt/
5.su root

Enter the choice2

Disk /dev/sda: 250.1 GB, 250059350016 bytes
255 heads, 63 sectors/track, 30401 cylinders, total 488397168 sectors
Units = sectors of 1 * 512 = 512 bytes
Sector size (logical/physical): 512 bytes / 512 bytes
I/O size (minimum/optimal): 512 bytes / 512 bytes
Disk identifier: 0x375e375e

   Device Boot      Start         End      Blocks   Id  System
/dev/sda1   *          63    81915434    40957686    7  HPFS/NTFS/exFAT
/dev/sda2        81915435   488375999   203230282+   f  W95 Ext'd (LBA)
/dev/sda5        81915498   163830869    40957686    7  HPFS/NTFS/exFAT
/dev/sda6       163830933   327677804    81923436    7  HPFS/NTFS/exFAT
/dev/sda7       327677868   341614591     6968362    7  HPFS/NTFS/exFAT
/dev/sda8       341616640   342640639      512000   83  Linux
/dev/sda9       342642688   488374271    72865792   8e  Linux LVM

Disk /dev/mapper/vg_akshay-lv_swap: 4194 MB, 4194304000 bytes
255 heads, 63 sectors/track, 509 cylinders, total 8192000 sectors
Units = sectors of 1 * 512 = 512 bytes
Sector size (logical/physical): 512 bytes / 512 bytes
I/O size (minimum/optimal): 512 bytes / 512 bytes


Disk /dev/mapper/vg_akshay-lv_root: 46.9 GB, 46942650368 bytes
255 heads, 63 sectors/track, 5707 cylinders, total 91684864 sectors
Units = sectors of 1 * 512 = 512 bytes
Sector size (logical/physical): 512 bytes / 512 bytes
I/O size (minimum/optimal): 512 bytes / 512 bytes


Disk /dev/mapper/vg_akshay-lv_home: 23.5 GB, 23454547968 bytes
255 heads, 63 sectors/track, 2851 cylinders, total 45809664 sectors
Units = sectors of 1 * 512 = 512 bytes
Sector size (logical/physical): 512 bytes / 512 bytes
I/O size (minimum/optimal): 512 bytes / 512 bytes


Disk /dev/sdb: 8103 MB, 8103395328 bytes
12 heads, 24 sectors/track, 54954 cylinders, total 15826944 sectors
Units = sectors of 1 * 512 = 512 bytes
Sector size (logical/physical): 512 bytes / 512 bytes
I/O size (minimum/optimal): 512 bytes / 512 bytes
Disk identifier: 0xc3072e18

   Device Boot      Start         End      Blocks   Id  System
/dev/sdb1   *        5976    15826943     7910484    b  W95 FAT32
[root@akshay akshay]# sh ass6.sh
1.ls
2.fdisk -l
3.mount -t ntfs /dev/sda5 /mnt/
4.umount /mnt/
5.su root

Enter the choice3
[root@akshay akshay]# sh ass6.sh
1.ls
2.fdisk -l
3.mount -t ntfs /dev/sda5 /mnt/
4.umount /mnt/
5.su root

Enter the choice4
[root@akshay akshay]
