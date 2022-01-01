----------------------------------------------------------------
Name: chaudhari akshay
Class: SE  Div:A
Roll No: 32
----------------------------------------------------------------
echo "1.ls";
echo "2.ls -li";
echo "3.stat akshay";
echo "4.stat -f akshay";
echo "5.mkdir A";
echo "6.rmdir A";
echo 
read -p  "Enter the choice" opt
case $opt in
 1 ) ls ;;
 2 ) ls -li ;;
 3 ) stat akshay ;;
 4 ) stat -f akshay ;;
 5 ) mkdir A ;;
 6 ) rmdir A ;;
\?) exit 1;;
esac
==========================================
Output:
==========================================
[root@akshay akshay]# sh ass5.sh
1.ls
2.ls -li
3.stat akshay
4.stat -f akshay
5.mkdir A
6.rmdir A

Enter the choice1
ass1.sh   ass2.sh~  ass4.sh   ass5.sh~	ass.c	  Desktop	Documents  akshay~    Music    Templates
ass1.sh~  ass3.sh   ass4.sh~  ass6.sh	ass.c~	  directory.c	Downloads  mount.c   name.asm~	Public	     Videos
ass2.sh   ass3.sh~  ass5.sh   ass6.sh~	chaudhari  directory.c~	akshay	   mount.c~  Pictures	string.asm~  workspace
[root@akshay akshay]# sh ass5.sh
1.ls
2.ls -li
3.stat akshay
4.stat -f akshay
5.mkdir A
6.rmdir A

Enter the choice2
total 112
920862 -rw-rw-r--.  1 akshay akshay  755 Sep  2 21:45 ass1.sh
921017 -rw-rw-r--.  1 akshay akshay  662 Sep  2 21:44 ass1.sh~
920647 -rw-rw-r--.  1 akshay akshay  683 Sep  2 23:38 ass2.sh
921027 -rw-rw-r--.  1 akshay akshay  594 Sep  2 22:19 ass2.sh~
920687 -rw-rw-r--.  1 akshay akshay  605 Sep  2 23:55 ass3.sh
920811 -rw-rw-r--.  1 akshay akshay  605 Sep  2 23:53 ass3.sh~
921028 -rw-rw-r--.  1 akshay akshay  475 Sep  2 23:05 ass4.sh
920194 -rw-rw-r--.  1 akshay akshay  605 Sep  2 22:59 ass4.sh~
921036 -rw-rw-r--.  1 akshay akshay  279 Sep  2 23:16 ass5.sh
921038 -rw-rw-r--.  1 akshay akshay  279 Sep  2 23:14 ass5.sh~
921042 -rw-rw-r--.  1 akshay akshay  285 Sep  2 23:19 ass6.sh
921031 -rw-rw-r--.  1 akshay akshay    2 Sep  2 23:16 ass6.sh~
920869 -rw-rw-r--.  1 akshay akshay 2750 Aug 24 14:48 ass.c
919971 -rw-rw-r--.  1 akshay akshay    0 Aug 24 14:47 ass.c~
920531 drwxrwxr-x.  2 akshay akshay 4096 Sep  2 21:21 chaudhari
917526 drwxr-xr-x.  2 akshay akshay 4096 Jun 26 20:01 Desktop
920750 -rw-r--r--.  1 akshay akshay 1396 Aug 24 14:26 directory.c
920856 -rw-rw-r--.  1 akshay akshay  847 Aug 24 14:22 directory.c~
917530 drwxr-xr-x.  2 akshay akshay 4096 Jun 26 20:01 Documents
917527 drwxr-xr-x.  2 akshay akshay 4096 Jun 26 20:01 Downloads
921013 -rwxrwxrwx.  1 root  root     0 Sep  2 23:39 akshay
921012 -rw-rw-r--.  1 akshay akshay    0 Sep  2 21:33 akshay~
919943 -rw-rw-r--.  1 akshay akshay 1456 Aug 24 15:05 mount.c
920854 -rw-rw-r--.  1 akshay akshay 1082 Aug 24 15:03 mount.c~
917531 drwxr-xr-x.  2 akshay akshay 4096 Jun 26 20:01 Music
920009 -rw-rw-r--.  1 akshay akshay  660 Jul 11 16:32 name.asm~
917532 drwxr-xr-x.  2 akshay akshay 4096 Aug 31 19:33 Pictures
921029 -rw-rw-r--.  1 akshay akshay    0 Sep  2 22:00 pratiksha
917529 drwxr-xr-x.  2 akshay akshay 4096 Jun 26 20:01 Public
917588 -rw-rw-r--.  1 akshay akshay    0 Jul 10 20:45 string.asm~
917528 drwxr-xr-x.  2 akshay akshay 4096 Jun 26 20:01 Templates
917533 drwxr-xr-x.  2 akshay akshay 4096 Jun 26 20:01 Videos
917818 drwxrwxr-x. 17 akshay akshay 4096 Sep  2 16:09 workspace
[root@akshay akshay]# sh ass5.sh
1.ls
2.ls -li
3.stat akshay
4.stat -f akshay
5.mkdir A
6.rmdir A

Enter the choice3
  File: `akshay'
  Size: 0         	Blocks: 0          IO Block: 4096   regular empty file
Device: fd02h/64770d	Inode: 921013      Links: 1
Access: (0777/-rwxrwxrwx)  Uid: (    0/    root)   Gid: (    0/    root)
Context: unconfined_u:object_r:user_home_t:s0
Access: 2014-09-02 23:53:14.821538552 +0530
Modify: 2014-09-02 23:39:19.250491606 +0530
Change: 2014-09-02 23:39:34.111492390 +0530
 Birth: -
[root@akshay akshay]# sh ass5.sh
1.ls
2.ls -li
3.stat akshay
4.stat -f akshay
5.mkdir A
6.rmdir A

Enter the choice4
  File: "akshay"
    ID: 9ebdf43c0525e1e6 Namelen: 255     Type: ext2/ext3
Block size: 4096       Fundamental block size: 4096
Blocks: Total: 5709611    Free: 5545215    Available: 5258905
Inodes: Total: 1433600    Free: 1428331
[root@akshay akshay]# sh ass5.sh
1.ls
2.ls -li
3.stat akshay
4.stat -f akshay
5.mkdir A
6.rmdir A

Enter the choice5
[root@akshay akshay]# sh ass5.sh
1.ls
2.ls -li
3.stat akshay
4.stat -f akshay
5.mkdir A
6.rmdir A

Enter the choice6
[root@akshay akshay]#
