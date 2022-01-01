----------------------------------------------------------------
Name: chaudhari akshay
Class: SE  Div:A
Roll No: 32
----------------------------------------------------------------
echo "1.ps";
echo "2.ps -l";
echo "3.ps -a";
echo "4.ps -d";
echo "5.ps -e";
echo "6.ps -ecl";
echo "7.ps -exl";
echo "8.ps -c";
echo "9.ps -x";
echo "10.ps -aclx";
echo "11.nice -n 82 bash";
echo "12.renice -n 3910";
echo "13.kill 4126 ";
echo "14.kill -9 4126 ";
echo "15.su root";
echo 
read -p  "Enter the choice" opt
case $opt in
 1 ) ps ;;
 2 ) ps -l ;;
 3 ) ps -a ;;
 4 ) ps -d ;;
 5 ) ps -e ;;
 6 ) ps -ecl ;;
 7 ) ps -exl ;;
 8 ) ps -c ;;
 9 ) ps -x ;;
 10 ) ps -aclx ;;
 11 ) nice -n 82 bash;;
 12 ) renice -n 3910 ;;
 13 ) kill 4126  ;;
 14 ) kill -9 4126 ;;
 15 ) su root ;;
\?) exit 1;;
esac
=========================================
Output:
=========================================
[root@akshay akshay]# sh ass3.sh
1.ps
2.ps -l
3.ps -a
4.ps -d
5.ps -e
6.ps -ecl
7.ps -exl
8.ps -c
9.ps -x
10.ps -aclx
11.nice -n 82 bash
12.renice -n 4418
13.kill 4540 
14.kill -9 4540 
15.su root

Enter the choice1
  PID TTY          TIME CMD
 2724 pts/0    00:00:00 su
 2732 pts/0    00:00:00 bash
 2912 pts/0    00:00:00 sh
 2913 pts/0    00:00:00 ps
[root@akshay akshay]# sh ass3.sh
1.ps
2.ps -l
3.ps -a
4.ps -d
5.ps -e
6.ps -ecl
7.ps -exl
8.ps -c
9.ps -x
10.ps -aclx
11.nice -n 82 bash
12.renice -n 4418
13.kill 4540 
14.kill -9 4540 
15.su root

Enter the choice2
F S   UID   PID  PPID  C PRI  NI ADDR SZ WCHAN  TTY          TIME CMD
4 S     0  2724  2723  0  80   0 - 46598 wait   pts/0    00:00:00 su
4 S     0  2732  2724  0  80   0 - 29045 wait   pts/0    00:00:00 bash
4 S     0  2914  2732  0  80   0 - 28024 wait   pts/0    00:00:00 sh
0 R     0  2915  2914  0  80   0 - 28409 -      pts/0    00:00:00 ps
[root@akshay akshay]# sh ass3.sh
1.ps
2.ps -l
3.ps -a
4.ps -d
5.ps -e
6.ps -ecl
7.ps -exl
8.ps -c
9.ps -x
10.ps -aclx
11.nice -n 82 bash
12.renice -n 4418
13.kill 4540 
14.kill -9 4540 
15.su root

Enter the choice3
  PID TTY          TIME CMD
 2723 pts/0    00:00:00 sh
 2724 pts/0    00:00:00 su
 2732 pts/0    00:00:00 bash
 2916 pts/0    00:00:00 sh
 2917 pts/0    00:00:00 ps
[root@akshay akshay]# sh ass3.sh
1.ps
2.ps -l
3.ps -a
4.ps -d
5.ps -e
6.ps -ecl
7.ps -exl
8.ps -c
9.ps -x
10.ps -aclx
11.nice -n 82 bash
12.renice -n 4418
13.kill 4540 
14.kill -9 4540 
15.su root

Enter the choice4
  PID TTY          TIME CMD
    2 ?        00:00:00 kthreadd
    3 ?        00:00:00 ksoftirqd/0
    6 ?        00:00:00 migration/0
    7 ?        00:00:00 watchdog/0
    8 ?        00:00:00 migration/1
   10 ?        00:00:00 ksoftirqd/1
   11 ?        00:00:00 kworker/0:1
   12 ?        00:00:00 watchdog/1
   13 ?        00:00:00 cpuset
   14 ?        00:00:00 khelper
   15 ?        00:00:00 kdevtmpfs
   16 ?        00:00:00 netns
   17 ?        00:00:00 sync_supers
   18 ?        00:00:00 bdi-default
   19 ?        00:00:00 kintegrityd
   20 ?        00:00:00 kblockd
   21 ?        00:00:00 ata_sff
   22 ?        00:00:00 khubd
   23 ?        00:00:00 md
   26 ?        00:00:00 kswapd0
   27 ?        00:00:00 ksmd
   28 ?        00:00:00 khugepaged
   29 ?        00:00:00 fsnotify_mark
   30 ?        00:00:00 crypto
   36 ?        00:00:00 kthrotld
   38 ?        00:00:00 scsi_eh_0
   39 ?        00:00:00 scsi_eh_1
   41 ?        00:00:00 scsi_eh_2
   42 ?        00:00:00 scsi_eh_3
   43 ?        00:00:00 kworker/u:3
   44 ?        00:00:00 kworker/u:4
   45 ?        00:00:00 kpsmoused
  265 ?        00:00:00 kdmflush
  267 ?        00:00:00 kdmflush
  315 ?        00:00:00 jbd2/dm-1-8
  316 ?        00:00:00 ext4-dio-unwrit
  345 ?        00:00:00 kauditd
  376 ?        00:00:00 flush-253:1
  386 ?        00:00:00 kvm-irqfd-clean
  469 ?        00:00:00 hd-audio0
  503 ?        00:00:00 jbd2/sda8-8
  504 ?        00:00:00 ext4-dio-unwrit
  519 ?        00:00:00 kdmflush
  539 ?        00:00:00 jbd2/dm-2-8
  540 ?        00:00:00 ext4-dio-unwrit
  609 ?        00:00:00 avahi-daemon
  619 ?        00:00:00 iscsi_eh
  663 ?        00:00:00 sedispatch
  666 ?        00:00:00 ksmtuned
  677 ?        00:00:00 ib_mcast
  685 ?        00:00:00 ib_cm
  694 ?        00:00:00 iw_cm_wq
  697 ?        00:00:00 ib_addr
  700 ?        00:00:00 flush-253:2
  703 ?        00:00:00 rdma_cm
  733 ?        00:00:00 cnic_wq
  734 ?        00:00:00 bnx2i_thread/0
  735 ?        00:00:00 bnx2i_thread/1
  743 ?        00:00:01 setroubleshootd
  746 ?        00:00:00 polkitd
  753 ?        00:00:00 dnsmasq
  755 ?        00:00:00 modem-manager
  769 ?        00:00:00 gdm-simple-slav
 1005 ?        00:00:00 gdm-session-wor
 1113 ?        00:00:00 gnome-keyring-d
 1128 ?        00:00:00 dbus-launch
 1191 ?        00:00:00 imsettings-daem
 1194 ?        00:00:00 gvfsd
 1196 ?        00:00:00 gvfs-fuse-daemo
 1200 ?        00:00:00 xfconfd
 1288 ?        00:00:01 gnome-settings-
 1299 ?        00:00:00 pulseaudio
 1313 ?        00:00:00 gsd-printer
 1318 ?        00:00:00 gvfs-udisks2-vo
 1326 ?        00:00:00 gvfs-gphoto2-vo
 1328 ?        00:00:00 gvfs-afc-volume
 1333 ?        00:00:55 gnome-shell
 1343 ?        00:00:00 seapplet
 1344 ?        00:00:00 tracker-miner-f
 1348 ?        00:00:00 nm-applet
 1349 ?        00:00:00 tracker-store
 1351 ?        00:00:00 evolution-alarm
 1369 ?        00:00:00 deja-dup-monito
 1387 ?        00:00:07 zeitgeist-datah
 1407 ?        00:00:00 abrt-applet
 1413 ?        00:00:00 gnome-screensav
 1416 ?        00:00:00 dconf-service
 1422 ?        00:00:00 zeitgeist-daemo
 1426 ?        00:00:00 gconfd-2
 1444 ?        00:00:00 gnome-shell-cal
 1446 ?        00:00:00 mission-control
 1450 ?        00:00:00 goa-daemon
 1480 ?        00:00:00 libsocialweb-co
 1513 ?        00:00:00 rpciod
 1625 ?        00:00:00 gvfsd-metadata
 1638 ?        00:00:00 scsi_eh_4
 1639 ?        00:00:00 usb-storage
 1640 ?        00:00:00 udevd
 1642 ?        00:00:00 udevd
 1660 ?        00:00:06 nautilus
 1667 ?        00:00:00 gvfsd-trash
 1671 ?        00:00:00 gvfsd-burn
 1931 ?        00:00:00 kworker/1:2
 2211 ?        00:00:00 flush-8:16
 2301 ?        00:00:04 gnome-terminal
 2306 ?        00:00:00 gnome-pty-helpe
 2670 ?        00:00:00 kworker/0:2
 2722 ?        00:00:00 kworker/1:1
 2723 pts/0    00:00:00 sh
 2724 pts/0    00:00:00 su
 2732 pts/0    00:00:00 bash
 2859 ?        00:00:00 kworker/0:0
 2897 ?        00:00:00 kworker/1:0
 2909 ?        00:00:00 sleep
 2918 pts/0    00:00:00 sh
 2919 pts/0    00:00:00 ps
[root@akshay akshay]# sh ass3.sh
1.ps
2.ps -l
3.ps -a
4.ps -d
5.ps -e
6.ps -ecl
7.ps -exl
8.ps -c
9.ps -x
10.ps -aclx
11.nice -n 82 bash
12.renice -n 4418
13.kill 4540 
14.kill -9 4540 
15.su root

Enter the choice5
  PID TTY          TIME CMD
    1 ?        00:00:01 systemd
    2 ?        00:00:00 kthreadd
    3 ?        00:00:00 ksoftirqd/0
    6 ?        00:00:00 migration/0
    7 ?        00:00:00 watchdog/0
    8 ?        00:00:00 migration/1
   10 ?        00:00:00 ksoftirqd/1
   11 ?        00:00:00 kworker/0:1
   12 ?        00:00:00 watchdog/1
   13 ?        00:00:00 cpuset
   14 ?        00:00:00 khelper
   15 ?        00:00:00 kdevtmpfs
   16 ?        00:00:00 netns
   17 ?        00:00:00 sync_supers
   18 ?        00:00:00 bdi-default
   19 ?        00:00:00 kintegrityd
   20 ?        00:00:00 kblockd
   21 ?        00:00:00 ata_sff
   22 ?        00:00:00 khubd
   23 ?        00:00:00 md
   26 ?        00:00:00 kswapd0
   27 ?        00:00:00 ksmd
   28 ?        00:00:00 khugepaged
   29 ?        00:00:00 fsnotify_mark
   30 ?        00:00:00 crypto
   36 ?        00:00:00 kthrotld
   38 ?        00:00:00 scsi_eh_0
   39 ?        00:00:00 scsi_eh_1
   41 ?        00:00:00 scsi_eh_2
   42 ?        00:00:00 scsi_eh_3
   43 ?        00:00:00 kworker/u:3
   44 ?        00:00:00 kworker/u:4
   45 ?        00:00:00 kpsmoused
  265 ?        00:00:00 kdmflush
  267 ?        00:00:00 kdmflush
  315 ?        00:00:00 jbd2/dm-1-8
  316 ?        00:00:00 ext4-dio-unwrit
  344 ?        00:00:00 systemd-journal
  345 ?        00:00:00 kauditd
  350 ?        00:00:00 udevd
  376 ?        00:00:00 flush-253:1
  386 ?        00:00:00 kvm-irqfd-clean
  469 ?        00:00:00 hd-audio0
  503 ?        00:00:00 jbd2/sda8-8
  504 ?        00:00:00 ext4-dio-unwrit
  519 ?        00:00:00 kdmflush
  539 ?        00:00:00 jbd2/dm-2-8
  540 ?        00:00:00 ext4-dio-unwrit
  567 ?        00:00:00 auditd
  578 ?        00:00:00 abrtd
  588 ?        00:00:00 abrt-watch-log
  589 ?        00:00:00 gpm
  592 ?        00:00:00 smartd
  598 ?        00:00:00 NetworkManager
  600 ?        00:00:00 libvirtd
  607 ?        00:00:00 avahi-daemon
  609 ?        00:00:00 avahi-daemon
  619 ?        00:00:00 iscsi_eh
  625 ?        00:00:00 system-setup-ke
  626 ?        00:00:00 acpid
  631 ?        00:00:00 systemd-logind
  645 ?        00:00:00 mcelog
  646 ?        00:00:00 atd
  647 ?        00:00:00 gdm-binary
  657 ?        00:00:00 crond
  660 ?        00:00:00 rsyslogd
  661 ?        00:00:00 audispd
  663 ?        00:00:00 sedispatch
  666 ?        00:00:00 ksmtuned
  677 ?        00:00:00 ib_mcast
  679 ?        00:00:00 dbus-daemon
  685 ?        00:00:00 ib_cm
  694 ?        00:00:00 iw_cm_wq
  697 ?        00:00:00 ib_addr
  700 ?        00:00:00 flush-253:2
  703 ?        00:00:00 rdma_cm
  733 ?        00:00:00 cnic_wq
  734 ?        00:00:00 bnx2i_thread/0
  735 ?        00:00:00 bnx2i_thread/1
  743 ?        00:00:01 setroubleshootd
  746 ?        00:00:00 polkitd
  753 ?        00:00:00 dnsmasq
  755 ?        00:00:00 modem-manager
  756 ?        00:00:00 bluetoothd
  762 ?        00:00:00 iscsiuio
  769 ?        00:00:00 gdm-simple-slav
  772 ?        00:00:00 iscsid
  773 ?        00:00:00 iscsid
  779 tty1     00:00:37 Xorg
  840 ?        00:00:00 accounts-daemon
  849 ?        00:00:00 console-kit-dae
  934 ?        00:00:00 upowerd
  988 ?        00:00:00 rtkit-daemon
 1005 ?        00:00:00 gdm-session-wor
 1113 ?        00:00:00 gnome-keyring-d
 1117 ?        00:00:00 gnome-session
 1128 ?        00:00:00 dbus-launch
 1129 ?        00:00:00 dbus-daemon
 1191 ?        00:00:00 imsettings-daem
 1194 ?        00:00:00 gvfsd
 1196 ?        00:00:00 gvfs-fuse-daemo
 1200 ?        00:00:00 xfconfd
 1288 ?        00:00:01 gnome-settings-
 1299 ?        00:00:00 pulseaudio
 1311 ?        00:00:00 cupsd
 1313 ?        00:00:00 gsd-printer
 1318 ?        00:00:00 gvfs-udisks2-vo
 1320 ?        00:00:00 udisksd
 1326 ?        00:00:00 gvfs-gphoto2-vo
 1328 ?        00:00:00 gvfs-afc-volume
 1330 ?        00:00:00 colord
 1333 ?        00:00:59 gnome-shell
 1343 ?        00:00:00 seapplet
 1344 ?        00:00:00 tracker-miner-f
 1348 ?        00:00:00 nm-applet
 1349 ?        00:00:00 tracker-store
 1351 ?        00:00:00 evolution-alarm
 1369 ?        00:00:00 deja-dup-monito
 1387 ?        00:00:08 zeitgeist-datah
 1407 ?        00:00:00 abrt-applet
 1413 ?        00:00:00 gnome-screensav
 1416 ?        00:00:00 dconf-service
 1422 ?        00:00:00 zeitgeist-daemo
 1426 ?        00:00:00 gconfd-2
 1439 ?        00:00:00 colord-sane
 1444 ?        00:00:00 gnome-shell-cal
 1446 ?        00:00:00 mission-control
 1450 ?        00:00:00 goa-daemon
 1480 ?        00:00:00 libsocialweb-co
 1504 ?        00:00:00 rpcbind
 1505 ?        00:00:00 sshd
 1513 ?        00:00:00 rpciod
 1516 ?        00:00:00 rpc.statd
 1625 ?        00:00:00 gvfsd-metadata
 1638 ?        00:00:00 scsi_eh_4
 1639 ?        00:00:00 usb-storage
 1640 ?        00:00:00 udevd
 1642 ?        00:00:00 udevd
 1660 ?        00:00:06 nautilus
 1667 ?        00:00:00 gvfsd-trash
 1671 ?        00:00:00 gvfsd-burn
 1673 ?        00:00:00 sendmail
 1722 ?        00:00:00 sendmail
 1931 ?        00:00:00 kworker/1:2
 2211 ?        00:00:00 flush-8:16
 2301 ?        00:00:06 gnome-terminal
 2306 ?        00:00:00 gnome-pty-helpe
 2307 pts/0    00:00:00 bash
 2670 ?        00:00:00 kworker/0:2
 2722 ?        00:00:00 kworker/1:1
 2723 pts/0    00:00:00 sh
 2724 pts/0    00:00:00 su
 2732 pts/0    00:00:00 bash
 2897 ?        00:00:00 kworker/1:0
 2940 ?        00:00:00 kworker/0:0
 2970 ?        00:00:00 sleep
 2978 pts/0    00:00:00 sh
 2979 pts/0    00:00:00 ps
[root@akshay akshay]# sh ass3.sh
1.ps
2.ps -l
3.ps -a
4.ps -d
5.ps -e
6.ps -ecl
7.ps -exl
8.ps -c
9.ps -x
10.ps -aclx
11.nice -n 82 bash
12.renice -n 4418
13.kill 4540 
14.kill -9 4540 
15.su root

Enter the choice6
F S   UID   PID  PPID CLS PRI ADDR SZ WCHAN  TTY          TIME CMD
4 S     0     1     0 TS   19 - 15543 epoll_ ?        00:00:01 systemd
1 S     0     2     0 TS   19 -     0 kthrea ?        00:00:00 kthreadd
1 S     0     3     2 TS   19 -     0 run_ks ?        00:00:00 ksoftirqd/0
1 S     0     6     2 FF  139 -     0 cpu_st ?        00:00:00 migration/0
5 S     0     7     2 FF  139 -     0 watchd ?        00:00:00 watchdog/0
1 S     0     8     2 FF  139 -     0 cpu_st ?        00:00:00 migration/1
1 S     0    10     2 TS   19 -     0 run_ks ?        00:00:00 ksoftirqd/1
1 S     0    11     2 TS   19 -     0 worker ?        00:00:00 kworker/0:1
5 S     0    12     2 FF  139 -     0 watchd ?        00:00:00 watchdog/1
1 S     0    13     2 TS   39 -     0 rescue ?        00:00:00 cpuset
1 S     0    14     2 TS   39 -     0 rescue ?        00:00:00 khelper
5 S     0    15     2 TS   19 -     0 devtmp ?        00:00:00 kdevtmpfs
1 S     0    16     2 TS   39 -     0 rescue ?        00:00:00 netns
1 S     0    17     2 TS   19 -     0 bdi_sy ?        00:00:00 sync_supers
1 S     0    18     2 TS   19 -     0 bdi_fo ?        00:00:00 bdi-default
1 S     0    19     2 TS   39 -     0 rescue ?        00:00:00 kintegrityd
1 S     0    20     2 TS   39 -     0 rescue ?        00:00:00 kblockd
1 S     0    21     2 TS   39 -     0 rescue ?        00:00:00 ata_sff
1 S     0    22     2 TS   19 -     0 hub_th ?        00:00:00 khubd
1 S     0    23     2 TS   39 -     0 rescue ?        00:00:00 md
1 S     0    26     2 TS   19 -     0 kswapd ?        00:00:00 kswapd0
1 S     0    27     2 TS   14 -     0 ksm_sc ?        00:00:00 ksmd
1 S     0    28     2 TS    0 -     0 khugep ?        00:00:00 khugepaged
1 S     0    29     2 TS   19 -     0 fsnoti ?        00:00:00 fsnotify_mark
1 S     0    30     2 TS   39 -     0 rescue ?        00:00:00 crypto
1 S     0    36     2 TS   39 -     0 rescue ?        00:00:00 kthrotld
1 S     0    38     2 TS   19 -     0 scsi_e ?        00:00:00 scsi_eh_0
1 S     0    39     2 TS   19 -     0 scsi_e ?        00:00:00 scsi_eh_1
1 S     0    41     2 TS   19 -     0 scsi_e ?        00:00:00 scsi_eh_2
1 S     0    42     2 TS   19 -     0 scsi_e ?        00:00:00 scsi_eh_3
1 S     0    43     2 TS   19 -     0 worker ?        00:00:00 kworker/u:3
1 S     0    44     2 TS   19 -     0 worker ?        00:00:00 kworker/u:4
1 S     0    45     2 TS   39 -     0 rescue ?        00:00:00 kpsmoused
1 S     0   265     2 TS   39 -     0 rescue ?        00:00:00 kdmflush
1 S     0   267     2 TS   39 -     0 rescue ?        00:00:00 kdmflush
1 S     0   315     2 TS   19 -     0 kjourn ?        00:00:00 jbd2/dm-1-8
1 S     0   316     2 TS   39 -     0 rescue ?        00:00:00 ext4-dio-unwrit
4 S     0   344     1 TS   19 -  7825 epoll_ ?        00:00:00 systemd-journal
1 S     0   345     2 TS   19 -     0 kaudit ?        00:00:00 kauditd
4 S     0   350     1 TS   19 -  7436 epoll_ ?        00:00:00 udevd
1 S     0   376     2 TS   19 -     0 bdi_wr ?        00:00:00 flush-253:1
1 S     0   386     2 TS   39 -     0 rescue ?        00:00:00 kvm-irqfd-clean
1 S     0   469     2 TS   39 -     0 rescue ?        00:00:00 hd-audio0
1 S     0   503     2 TS   19 -     0 kjourn ?        00:00:00 jbd2/sda8-8
1 S     0   504     2 TS   39 -     0 rescue ?        00:00:00 ext4-dio-unwrit
1 S     0   519     2 TS   39 -     0 rescue ?        00:00:00 kdmflush
1 S     0   539     2 TS   19 -     0 kjourn ?        00:00:00 jbd2/dm-2-8
1 S     0   540     2 TS   39 -     0 rescue ?        00:00:00 ext4-dio-unwrit
4 S     0   567     1 TS   23 -  6556 epoll_ ?        00:00:00 auditd
0 S     0   578     1 TS   19 - 30682 poll_s ?        00:00:00 abrtd
0 S     0   588     1 TS   19 - 30155 inotif ?        00:00:00 abrt-watch-log
5 S     0   589     1 TS   19 -  1852 hrtime ?        00:00:00 gpm
4 S     0   592     1 TS   19 -  4866 hrtime ?        00:00:00 smartd
4 S     0   598     1 TS   19 - 66562 poll_s ?        00:00:00 NetworkManager
4 S     0   600     1 TS   19 - 113149 poll_s ?       00:00:00 libvirtd
4 S    70   607     1 TS   19 -  7000 poll_s ?        00:00:00 avahi-daemon
1 S    70   609   607 TS   19 -  6970 unix_s ?        00:00:00 avahi-daemon
1 S     0   619     2 TS   39 -     0 rescue ?        00:00:00 iscsi_eh
0 S     0   625     1 TS   19 -  3423 inotif ?        00:00:00 system-setup-ke
1 S     0   626     1 TS   19 -  1072 poll_s ?        00:00:00 acpid
4 S     0   631     1 TS   19 -  7063 epoll_ ?        00:00:00 systemd-logind
4 S     0   645     1 TS   19 -  1609 poll_s ?        00:00:00 mcelog
4 S     0   646     1 TS   19 -  5297 pause  ?        00:00:00 atd
4 S     0   647     1 TS   19 - 52953 poll_s ?        00:00:00 gdm-binary
4 S     0   657     1 TS   19 - 29598 hrtime ?        00:00:00 crond
4 S     0   660     1 TS   19 - 62885 poll_s ?        00:00:00 rsyslogd
4 S     0   661   567 TS   27 - 20043 futex_ ?        00:00:00 audispd
4 S     0   663   661 TS   23 -  5356 unix_s ?        00:00:00 sedispatch
1 S     0   666     1 TS   19 - 28548 wait   ?        00:00:00 ksmtuned
1 S     0   677     2 TS   39 -     0 rescue ?        00:00:00 ib_mcast
4 S    81   679     1 TS   19 -  7830 poll_s ?        00:00:00 dbus-daemon
1 S     0   685     2 TS   39 -     0 rescue ?        00:00:00 ib_cm
1 S     0   694     2 TS   39 -     0 rescue ?        00:00:00 iw_cm_wq
1 S     0   697     2 TS   39 -     0 rescue ?        00:00:00 ib_addr
1 S     0   700     2 TS   19 -     0 bdi_wr ?        00:00:00 flush-253:2
1 S     0   703     2 TS   39 -     0 rescue ?        00:00:00 rdma_cm
1 S     0   733     2 TS   39 -     0 rescue ?        00:00:00 cnic_wq
1 S     0   734     2 TS   39 -     0 bnx2i_ ?        00:00:00 bnx2i_thread/0
1 S     0   735     2 TS   39 -     0 bnx2i_ ?        00:00:00 bnx2i_thread/1
4 S     0   743     1 TS   19 - 80499 poll_s ?        00:00:01 setroubleshootd
4 S     0   746     1 TS   19 - 49510 poll_s ?        00:00:00 polkitd
5 S    99   753     1 TS   19 -  3274 poll_s ?        00:00:00 dnsmasq
4 S     0   755     1 TS   19 - 17788 poll_s ?        00:00:00 modem-manager
4 S     0   756     1 TS   19 -  5792 poll_s ?        00:00:00 bluetoothd
5 S     0   762     1 TS   19 - 24696 skb_re ?        00:00:00 iscsiuio
4 S     0   769   647 TS   19 - 62401 poll_s ?        00:00:00 gdm-simple-slav
1 S     0   772     1 TS   19 -  1263 hrtime ?        00:00:00 iscsid
5 S     0   773     1 TS   29 -  1388 poll_s ?        00:00:00 iscsid
4 S     0   779   769 TS   19 - 24872 poll_s tty1     00:00:37 Xorg
4 S     0   840     1 TS   19 - 73812 poll_s ?        00:00:00 accounts-daemon
4 S     0   849     1 TS   19 - 260741 poll_s ?       00:00:00 console-kit-dae
0 S     0   934     1 TS   19 - 57545 poll_s ?        00:00:00 upowerd
4 S   172   988     1 TS   18 - 41140 poll_s ?        00:00:00 rtkit-daemon
4 S     0  1005   769 TS   19 - 90212 poll_s ?        00:00:00 gdm-session-wor
1 S  1000  1113     1 TS   19 - 128642 poll_s ?       00:00:00 gnome-keyring-d
4 S  1000  1117  1005 TS   19 - 125839 poll_s ?       00:00:00 gnome-session
1 S  1000  1128     1 TS   19 -  5054 poll_s ?        00:00:00 dbus-launch
1 S  1000  1129     1 TS   19 -  8036 poll_s ?        00:00:00 dbus-daemon
0 S  1000  1191     1 TS   19 - 81944 poll_s ?        00:00:00 imsettings-daem
0 S  1000  1194     1 TS   19 - 40290 poll_s ?        00:00:00 gvfsd
0 S  1000  1196     1 TS   19 - 69450 futex_ ?        00:00:00 gvfs-fuse-daemo
0 S  1000  1200     1 TS   19 -  7280 poll_s ?        00:00:00 xfconfd
0 S  1000  1288  1117 TS   19 - 201607 poll_s ?       00:00:01 gnome-settings-
1 S  1000  1299     1 TS   30 - 118740 poll_s ?       00:00:00 pulseaudio
4 S     0  1311     1 TS   19 - 51102 epoll_ ?        00:00:00 cupsd
0 S  1000  1313     1 TS   19 - 116966 poll_s ?       00:00:00 gsd-printer
0 S  1000  1318     1 TS   19 - 99474 poll_s ?        00:00:00 gvfs-udisks2-vo
0 S     0  1320     1 TS   19 - 87383 poll_s ?        00:00:00 udisksd
0 S  1000  1326     1 TS   19 - 42446 poll_s ?        00:00:00 gvfs-gphoto2-vo
0 S  1000  1328     1 TS   19 - 61496 poll_s ?        00:00:00 gvfs-afc-volume
4 S   997  1330     1 TS   19 - 80537 poll_s ?        00:00:00 colord
0 S  1000  1333  1117 TS   19 - 439032 poll_s ?       00:00:59 gnome-shell
0 S  1000  1343  1117 TS   19 - 62316 poll_s ?        00:00:00 seapplet
0 S  1000  1344  1117 TS    0 - 132834 poll_s ?       00:00:00 tracker-miner-f
0 S  1000  1348  1117 TS   19 - 198236 poll_s ?       00:00:00 nm-applet
0 S  1000  1349  1117 TS   19 - 121778 poll_s ?       00:00:00 tracker-store
0 S  1000  1351  1117 TS   19 - 137182 poll_s ?       00:00:00 evolution-alarm
0 S  1000  1369  1117 TS   19 - 73278 poll_s ?        00:00:00 deja-dup-monito
0 S  1000  1387  1117 TS   19 - 103330 poll_s ?       00:00:08 zeitgeist-datah
0 S  1000  1407  1117 TS   19 - 61844 poll_s ?        00:00:00 abrt-applet
0 S  1000  1413  1117 TS   19 - 106207 poll_s ?       00:00:00 gnome-screensav
0 S  1000  1416     1 TS   19 - 64439 poll_s ?        00:00:00 dconf-service
0 S  1000  1422     1 TS   19 - 65768 poll_s ?        00:00:00 zeitgeist-daemo
0 S  1000  1426     1 TS   19 - 34668 poll_s ?        00:00:00 gconfd-2
4 S   997  1439     1 TS   19 - 133017 poll_s ?       00:00:00 colord-sane
0 S  1000  1444     1 TS   19 - 137944 poll_s ?       00:00:00 gnome-shell-cal
0 S  1000  1446     1 TS   19 - 80412 poll_s ?        00:00:00 mission-control
0 S  1000  1450     1 TS   19 - 103394 poll_s ?       00:00:00 goa-daemon
0 S  1000  1480     1 TS   19 - 78849 poll_s ?        00:00:00 libsocialweb-co
5 S     0  1504     1 TS   19 -  4790 poll_s ?        00:00:00 rpcbind
4 S     0  1505     1 TS   19 - 19402 poll_s ?        00:00:00 sshd
1 S     0  1513     2 TS   39 -     0 rescue ?        00:00:00 rpciod
5 S    29  1516     1 TS   19 -  5883 poll_s ?        00:00:00 rpc.statd
0 S  1000  1625     1 TS   19 - 38088 poll_s ?        00:00:00 gvfsd-metadata
1 S     0  1638     2 TS   19 -     0 scsi_e ?        00:00:00 scsi_eh_4
1 S     0  1639     2 TS   19 -     0 usb_st ?        00:00:00 usb-storage
5 S     0  1640   350 TS   19 -  7411 epoll_ ?        00:00:00 udevd
5 S     0  1642   350 TS   19 -  7435 epoll_ ?        00:00:00 udevd
0 S  1000  1660     1 TS   19 - 347610 poll_s ?       00:00:06 nautilus
0 S  1000  1667     1 TS   19 - 40926 poll_s ?        00:00:00 gvfsd-trash
0 S  1000  1671     1 TS   19 - 40290 poll_s ?        00:00:00 gvfsd-burn
5 S     0  1673     1 TS   19 - 24419 poll_s ?        00:00:00 sendmail
1 S    51  1722     1 TS   19 - 20682 pause  ?        00:00:00 sendmail
1 S     0  1931     2 TS   19 -     0 worker ?        00:00:00 kworker/1:2
1 S     0  2211     2 TS   19 -     0 bdi_wr ?        00:00:00 flush-8:16
0 S  1000  2301  1333 TS   19 - 186194 poll_s ?       00:00:06 gnome-terminal
0 S  1000  2306  2301 TS   19 -  2103 unix_s ?        00:00:00 gnome-pty-helpe
0 S  1000  2307  2301 TS   19 - 29044 wait   pts/0    00:00:00 bash
1 S     0  2670     2 TS   19 -     0 worker ?        00:00:00 kworker/0:2
1 S     0  2722     2 TS   19 -     0 worker ?        00:00:00 kworker/1:1
0 S  1000  2723  2307 TS   19 - 28024 wait   pts/0    00:00:00 sh
4 S     0  2724  2723 TS   19 - 46598 wait   pts/0    00:00:00 su
4 S     0  2732  2724 TS   19 - 29045 wait   pts/0    00:00:00 bash
1 S     0  2897     2 TS   19 -     0 worker ?        00:00:00 kworker/1:0
1 S     0  2940     2 TS   19 -     0 worker ?        00:00:00 kworker/0:0
0 S     0  2970   666 TS   19 - 26711 hrtime ?        00:00:00 sleep
4 S     0  2980  2732 TS   19 - 28024 wait   pts/0    00:00:00 sh
4 R     0  2981  2980 TS   19 - 28409 -      pts/0    00:00:00 ps
[root@akshay akshay]# sh ass3.sh
1.ps
2.ps -l
3.ps -a
4.ps -d
5.ps -e
6.ps -ecl
7.ps -exl
8.ps -c
9.ps -x
10.ps -aclx
11.nice -n 82 bash
12.renice -n 4418
13.kill 4540 
14.kill -9 4540 
15.su root

Enter the choice7
Warning: bad syntax, perhaps a bogus '-'? See /usr/share/doc/procps-3.2.8/FAQ
F   UID   PID  PPID PRI  NI    VSZ   RSS WCHAN  STAT TTY        TIME COMMAND
4     0     1     0  20   0  62172 25084 epoll_ Ss   ?          0:01 /usr/lib/systemd/systemd TERM=linux SYSFONT=True RD_TIMESTAMP=1409698670904423 92
1     0     2     0  20   0      0     0 kthrea S    ?          0:00 [kthreadd]
1     0     3     2  20   0      0     0 run_ks S    ?          0:00 [ksoftirqd/0]
1     0     6     2 -100  -      0     0 cpu_st S    ?          0:00 [migration/0]
5     0     7     2 -100  -      0     0 watchd S    ?          0:00 [watchdog/0]
1     0     8     2 -100  -      0     0 cpu_st S    ?          0:00 [migration/1]
1     0    10     2  20   0      0     0 run_ks S    ?          0:00 [ksoftirqd/1]
1     0    11     2  20   0      0     0 worker S    ?          0:00 [kworker/0:1]
5     0    12     2 -100  -      0     0 watchd S    ?          0:00 [watchdog/1]
1     0    13     2   0 -20      0     0 rescue S<   ?          0:00 [cpuset]
1     0    14     2   0 -20      0     0 rescue S<   ?          0:00 [khelper]
5     0    15     2  20   0      0     0 devtmp S    ?          0:00 [kdevtmpfs]
1     0    16     2   0 -20      0     0 rescue S<   ?          0:00 [netns]
1     0    17     2  20   0      0     0 bdi_sy S    ?          0:00 [sync_supers]
1     0    18     2  20   0      0     0 bdi_fo S    ?          0:00 [bdi-default]
1     0    19     2   0 -20      0     0 rescue S<   ?          0:00 [kintegrityd]
1     0    20     2   0 -20      0     0 rescue S<   ?          0:00 [kblockd]
1     0    21     2   0 -20      0     0 rescue S<   ?          0:00 [ata_sff]
1     0    22     2  20   0      0     0 hub_th S    ?          0:00 [khubd]
1     0    23     2   0 -20      0     0 rescue S<   ?          0:00 [md]
1     0    26     2  20   0      0     0 kswapd S    ?          0:00 [kswapd0]
1     0    27     2  25   5      0     0 ksm_sc SN   ?          0:00 [ksmd]
1     0    28     2  39  19      0     0 khugep SN   ?          0:00 [khugepaged]
1     0    29     2  20   0      0     0 fsnoti S    ?          0:00 [fsnotify_mark]
1     0    30     2   0 -20      0     0 rescue S<   ?          0:00 [crypto]
1     0    36     2   0 -20      0     0 rescue S<   ?          0:00 [kthrotld]
1     0    38     2  20   0      0     0 scsi_e S    ?          0:00 [scsi_eh_0]
1     0    39     2  20   0      0     0 scsi_e S    ?          0:00 [scsi_eh_1]
1     0    41     2  20   0      0     0 scsi_e S    ?          0:00 [scsi_eh_2]
1     0    42     2  20   0      0     0 scsi_e S    ?          0:00 [scsi_eh_3]
1     0    43     2  20   0      0     0 worker S    ?          0:00 [kworker/u:3]
1     0    44     2  20   0      0     0 worker S    ?          0:00 [kworker/u:4]
1     0    45     2   0 -20      0     0 rescue S<   ?          0:00 [kpsmoused]
1     0   265     2   0 -20      0     0 rescue S<   ?          0:00 [kdmflush]
1     0   267     2   0 -20      0     0 rescue S<   ?          0:00 [kdmflush]
1     0   315     2  20   0      0     0 kjourn S    ?          0:00 [jbd2/dm-1-8]
1     0   316     2   0 -20      0     0 rescue S<   ?          0:00 [ext4-dio-unwrit]
4     0   344     1  20   0  31300  1584 epoll_ Ss   ?          0:00 /usr/lib/systemd/systemd-journald SYSFONT=True PATH=/usr/local/sbin:/usr/local/bi
1     0   345     2  20   0      0     0 kaudit S    ?          0:00 [kauditd]
4     0   350     1  20   0  29744  4436 epoll_ Ss   ?          0:00 /usr/lib/udev/udevd SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/u
1     0   376     2  20   0      0     0 bdi_wr S    ?          0:00 [flush-253:1]
1     0   386     2   0 -20      0     0 rescue S<   ?          0:00 [kvm-irqfd-clean]
1     0   469     2   0 -20      0     0 rescue S<   ?          0:00 [hd-audio0]
1     0   503     2  20   0      0     0 kjourn S    ?          0:00 [jbd2/sda8-8]
1     0   504     2   0 -20      0     0 rescue S<   ?          0:00 [ext4-dio-unwrit]
1     0   519     2   0 -20      0     0 rescue S<   ?          0:00 [kdmflush]
1     0   539     2  20   0      0     0 kjourn S    ?          0:00 [jbd2/dm-2-8]
1     0   540     2   0 -20      0     0 rescue S<   ?          0:00 [ext4-dio-unwrit]
4     0   567     1  16  -4  26224  1076 epoll_ S<sl ?          0:00 /sbin/auditd -n SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/b
0     0   578     1  20   0 122728  1220 poll_s Ss   ?          0:00 /usr/sbin/abrtd -d -s SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:
0     0   588     1  20   0 120620   924 inotif Ss   ?          0:00 /usr/bin/abrt-watch-log -F BUG corruption stack overflow protection fault WARNING
5     0   589     1  20   0   7408   316 hrtime Ss   ?          0:00 /usr/sbin/gpm -m /dev/input/mice -t exps2 SYSFONT=True PATH=/usr/local/sbin:/usr/
4     0   592     1  20   0  19464  2096 hrtime Ss   ?          0:00 /usr/sbin/smartd -n -q never SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/us
4     0   598     1  20   0 266248  5296 poll_s Ssl  ?          0:00 /usr/sbin/NetworkManager --no-daemon SYSFONT=True PATH=/usr/local/sbin:/usr/local
4     0   600     1  20   0 452596  7920 poll_s Ssl  ?          0:00 /usr/sbin/libvirtd SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/us
1     0   619     2   0 -20      0     0 rescue S<   ?          0:00 [iscsi_eh]
0     0   625     1  20   0  13692   328 inotif Ss   ?          0:00 /usr/bin/system-setup-keyboard SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/
1     0   626     1  20   0   4288   576 poll_s Ss   ?          0:00 /usr/sbin/acpid SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/b
4     0   631     1  20   0  28252  1556 epoll_ Ss   ?          0:00 /usr/lib/systemd/systemd-logind SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:
4     0   645     1  20   0   6436   840 poll_s Ss   ?          0:00 /usr/sbin/mcelog --ignorenodev --daemon --foreground SYSFONT=True PATH=/usr/local
4     0   646     1  20   0  21188   928 pause  Ss   ?          0:00 /usr/sbin/atd -f SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/
4     0   647     1  20   0 211812  2228 poll_s Ssl  ?          0:00 /usr/sbin/gdm-binary -nodaemon HOSTNAME=akshay HISTSIZE=1000 SYSFONT=True QT_GRAPH
4     0   657     1  20   0 118392  1512 hrtime Ss   ?          0:00 /usr/sbin/crond -n SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/us
4     0   660     1  20   0 251540  1696 poll_s Ssl  ?          0:00 /sbin/rsyslogd -n -c 5 SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin
4     0   661   567  12  -8  80172   840 futex_ S<sl ?          0:00 /sbin/audispd SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin
4     0   663   661  16  -4  21424  1052 unix_s S<   ?          0:00 /usr/sbin/sedispatch
1     0   666     1  20   0 114192   824 wait   S    ?          0:00 /bin/bash /usr/sbin/ksmtuned SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/us
1     0   677     2   0 -20      0     0 rescue S<   ?          0:00 [ib_mcast]
1     0   685     2   0 -20      0     0 rescue S<   ?          0:00 [ib_cm]
1     0   694     2   0 -20      0     0 rescue S<   ?          0:00 [iw_cm_wq]
1     0   697     2   0 -20      0     0 rescue S<   ?          0:00 [ib_addr]
1     0   700     2  20   0      0     0 bdi_wr S    ?          0:00 [flush-253:2]
1     0   703     2   0 -20      0     0 rescue S<   ?          0:00 [rdma_cm]
1     0   733     2   0 -20      0     0 rescue S<   ?          0:00 [cnic_wq]
1     0   734     2   0 -20      0     0 bnx2i_ S<   ?          0:00 [bnx2i_thread/0]
1     0   735     2   0 -20      0     0 bnx2i_ S<   ?          0:00 [bnx2i_thread/1]
4     0   743     1  20   0 321996 39124 poll_s Sl   ?          0:01 /usr/bin/python -Es /usr/sbin/setroubleshootd -f  DBUS_STARTER_ADDRESS=systemd:,g
4     0   746     1  20   0 198040  6580 poll_s Sl   ?          0:00 /usr/libexec/polkit-1/polkitd --no-debug DBUS_STARTER_ADDRESS=systemd:,guid=4d740
4     0   755     1  20   0  71152  2680 poll_s S    ?          0:00 /usr/sbin/modem-manager DBUS_STARTER_ADDRESS=systemd:,guid=4d7404479af995f0c28d2c
4     0   756     1  20   0  23168  1832 poll_s Ss   ?          0:00 /usr/sbin/bluetoothd -n SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/usr/sbi
5     0   762     1  20   0  98784   328 skb_re Ssl  ?          0:00 iscsiuio SYSFONT=True PATH=/sbin:/usr/sbin:/bin:/usr/bin PWD=/ LANG=en_US.UTF-8 K
4     0   769   647  20   0 249604  3796 poll_s Sl   ?          0:00 /usr/libexec/gdm-simple-slave --display-id /org/gnome/DisplayManager/Display1 HOS
1     0   772     1  20   0   5052   432 hrtime Ss   ?          0:00 iscsid SYSFONT=True PATH=/sbin:/usr/sbin:/bin:/usr/bin PWD=/ LANG=en_US.UTF-8 KEY
5     0   773     1  10 -10   5552  3388 poll_s S<Ls ?          0:00 iscsid SYSFONT=True PATH=/sbin:/usr/sbin:/bin:/usr/bin PWD=/ LANG=en_US.UTF-8 KEY
4     0   779   769  20   0  99488 12464 poll_s Ss+  tty1       0:35 /usr/bin/Xorg :0 -background none -logverbose 7 -auth /var/run/gdm/auth-for-gdm-Z
4     0   840     1  20   0 295248  3212 poll_s Ssl  ?          0:00 /usr/libexec/accounts-daemon SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/us
4     0   849     1  20   0 1042964 3400 poll_s Ssl  ?          0:00 /usr/sbin/console-kit-daemon --no-daemon SYSFONT=True PATH=/usr/local/sbin:/usr/l
0     0   934     1  20   0 230180  3556 poll_s Ssl  ?          0:00 /usr/libexec/upowerd SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/
4     0  1005   769  20   0 360848  4304 poll_s Sl   ?          0:00 gdm-session-worker [pam/gdm-password] DISPLAY=:0 HOSTNAME=akshay HISTSIZE=1000 QT_
4     0  1311     1  20   0 204408  3956 epoll_ Ss   ?          0:00 /usr/sbin/cupsd -f SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/us
0     0  1320     1  20   0 349532  4552 poll_s Ssl  ?          0:00 /usr/lib/udisks2/udisksd --no-debug SYSFONT=True PATH=/usr/local/sbin:/usr/local/
5     0  1504     1  20   0  19160   892 poll_s Ss   ?          0:00 /sbin/rpcbind -w SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/
4     0  1505     1  20   0  77608  3240 poll_s Ss   ?          0:00 /usr/sbin/sshd -D SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr
1     0  1513     2   0 -20      0     0 rescue S<   ?          0:00 [rpciod]
1     0  1638     2  20   0      0     0 scsi_e S    ?          0:00 [scsi_eh_4]
1     0  1639     2  20   0      0     0 usb_st S    ?          0:00 [usb-storage]
5     0  1640   350  20   0  29644  3968 epoll_ S    ?          0:00 /usr/lib/udev/udevd SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/u
5     0  1642   350  20   0  29740  3784 epoll_ S    ?          0:00 /usr/lib/udev/udevd SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/u
5     0  1673     1  20   0  97676  2228 poll_s Ss   ?          0:00 sendmail: accepting connections ons                                             
1     0  1931     2  20   0      0     0 worker S    ?          0:00 [kworker/1:2]
1     0  2211     2  20   0      0     0 bdi_wr S    ?          0:00 [flush-8:16]
1     0  2670     2  20   0      0     0 worker S    ?          0:00 [kworker/0:2]
1     0  2722     2  20   0      0     0 worker S    ?          0:00 [kworker/1:1]
4     0  2724  2723  20   0 186392  4956 wait   S    pts/0      0:00 su root XDG_VTNR=1 XDG_SESSION_ID=2 HOSTNAME=akshay IMSETTINGS_INTEGRATE_DESKTOP=y
4     0  2732  2724  20   0 116180  3764 wait   S    pts/0      0:00 bash XDG_VTNR=1 XDG_SESSION_ID=2 HOSTNAME=akshay IMSETTINGS_INTEGRATE_DESKTOP=yes
1     0  2897     2  20   0      0     0 worker S    ?          0:00 [kworker/1:0]
0     0  2932   666  20   0 106844   500 hrtime S    ?          0:00 sleep 60 SYSFONT=True PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin PWD=
1     0  2940     2  20   0      0     0 worker S    ?          0:00 [kworker/0:0]
4     0  2945  2732  20   0 112096  1288 wait   S+   pts/0      0:00 sh ass3.sh XDG_VTNR=1 XDG_SESSION_ID=2 HOSTNAME=akshay IMSETTINGS_INTEGRATE_DESKTO
4     0  2946  2945  20   0 113636   824 -      R+   pts/0      0:00 ps -exl XDG_VTNR=1 XDG_SESSION_ID=2 HOSTNAME=akshay IMSETTINGS_INTEGRATE_DESKTOP=y
[root@akshay akshay]# sh ass3.sh
1.ps
2.ps -l
3.ps -a
4.ps -d
5.ps -e
6.ps -ecl
7.ps -exl
8.ps -c
9.ps -x
10.ps -aclx
11.nice -n 82 bash
12.renice -n 4418
13.kill 4540 
14.kill -9 4540 
15.su root

Enter the choice8
  PID CLS PRI TTY          TIME CMD
 2724 TS   19 pts/0    00:00:00 su
 2732 TS   19 pts/0    00:00:00 bash
 2947 TS   19 pts/0    00:00:00 sh
 2948 TS   19 pts/0    00:00:00 ps
[root@akshay akshay]# sh ass3.sh
1.ps
2.ps -l
3.ps -a
4.ps -d
5.ps -e
6.ps -ecl
7.ps -exl
8.ps -c
9.ps -x
10.ps -aclx
11.nice -n 82 bash
12.renice -n 4418
13.kill 4540 
14.kill -9 4540 
15.su root

Enter the choice9
Warning: bad syntax, perhaps a bogus '-'? See /usr/share/doc/procps-3.2.8/FAQ
  PID TTY      STAT   TIME COMMAND
    1 ?        Ss     0:01 /usr/lib/systemd/systemd
    2 ?        S      0:00 [kthreadd]
    3 ?        S      0:00 [ksoftirqd/0]
    6 ?        S      0:00 [migration/0]
    7 ?        S      0:00 [watchdog/0]
    8 ?        S      0:00 [migration/1]
   10 ?        S      0:00 [ksoftirqd/1]
   11 ?        S      0:00 [kworker/0:1]
   12 ?        S      0:00 [watchdog/1]
   13 ?        S<     0:00 [cpuset]
   14 ?        S<     0:00 [khelper]
   15 ?        S      0:00 [kdevtmpfs]
   16 ?        S<     0:00 [netns]
   17 ?        S      0:00 [sync_supers]
   18 ?        S      0:00 [bdi-default]
   19 ?        S<     0:00 [kintegrityd]
   20 ?        S<     0:00 [kblockd]
   21 ?        S<     0:00 [ata_sff]
   22 ?        S      0:00 [khubd]
   23 ?        S<     0:00 [md]
   26 ?        S      0:00 [kswapd0]
   27 ?        SN     0:00 [ksmd]
   28 ?        SN     0:00 [khugepaged]
   29 ?        S      0:00 [fsnotify_mark]
   30 ?        S<     0:00 [crypto]
   36 ?        S<     0:00 [kthrotld]
   38 ?        S      0:00 [scsi_eh_0]
   39 ?        S      0:00 [scsi_eh_1]
   41 ?        S      0:00 [scsi_eh_2]
   42 ?        S      0:00 [scsi_eh_3]
   43 ?        S      0:00 [kworker/u:3]
   44 ?        S      0:00 [kworker/u:4]
   45 ?        S<     0:00 [kpsmoused]
  265 ?        S<     0:00 [kdmflush]
  267 ?        S<     0:00 [kdmflush]
  315 ?        S      0:00 [jbd2/dm-1-8]
  316 ?        S<     0:00 [ext4-dio-unwrit]
  344 ?        Ss     0:00 /usr/lib/systemd/systemd-journald
  345 ?        S      0:00 [kauditd]
  350 ?        Ss     0:00 /usr/lib/udev/udevd
  376 ?        S      0:00 [flush-253:1]
  386 ?        S<     0:00 [kvm-irqfd-clean]
  469 ?        S<     0:00 [hd-audio0]
  503 ?        S      0:00 [jbd2/sda8-8]
  504 ?        S<     0:00 [ext4-dio-unwrit]
  519 ?        S<     0:00 [kdmflush]
  539 ?        S      0:00 [jbd2/dm-2-8]
  540 ?        S<     0:00 [ext4-dio-unwrit]
  567 ?        S<sl   0:00 /sbin/auditd -n
  578 ?        Ss     0:00 /usr/sbin/abrtd -d -s
  588 ?        Ss     0:00 /usr/bin/abrt-watch-log -F BUG corruption stack overflow protection fault WARNING: at nable to handle ouble fault: RTNL: as
  589 ?        Ss     0:00 /usr/sbin/gpm -m /dev/input/mice -t exps2
  592 ?        Ss     0:00 /usr/sbin/smartd -n -q never
  598 ?        Ssl    0:00 /usr/sbin/NetworkManager --no-daemon
  600 ?        Ssl    0:00 /usr/sbin/libvirtd
  619 ?        S<     0:00 [iscsi_eh]
  625 ?        Ss     0:00 /usr/bin/system-setup-keyboard
  626 ?        Ss     0:00 /usr/sbin/acpid
  631 ?        Ss     0:00 /usr/lib/systemd/systemd-logind
  645 ?        Ss     0:00 /usr/sbin/mcelog --ignorenodev --daemon --foreground
  646 ?        Ss     0:00 /usr/sbin/atd -f
  647 ?        Ssl    0:00 /usr/sbin/gdm-binary -nodaemon
  657 ?        Ss     0:00 /usr/sbin/crond -n
  660 ?        Ssl    0:00 /sbin/rsyslogd -n -c 5
  661 ?        S<sl   0:00 /sbin/audispd
  663 ?        S<     0:00 /usr/sbin/sedispatch
  666 ?        S      0:00 /bin/bash /usr/sbin/ksmtuned
  677 ?        S<     0:00 [ib_mcast]
  685 ?        S<     0:00 [ib_cm]
  694 ?        S<     0:00 [iw_cm_wq]
  697 ?        S<     0:00 [ib_addr]
  700 ?        S      0:00 [flush-253:2]
  703 ?        S<     0:00 [rdma_cm]
  733 ?        S<     0:00 [cnic_wq]
  734 ?        S<     0:00 [bnx2i_thread/0]
  735 ?        S<     0:00 [bnx2i_thread/1]
  743 ?        Sl     0:01 /usr/bin/python -Es /usr/sbin/setroubleshootd -f 
  746 ?        Sl     0:00 /usr/libexec/polkit-1/polkitd --no-debug
  755 ?        S      0:00 /usr/sbin/modem-manager
  756 ?        Ss     0:00 /usr/sbin/bluetoothd -n
  762 ?        Ssl    0:00 iscsiuio
  769 ?        Sl     0:00 /usr/libexec/gdm-simple-slave --display-id /org/gnome/DisplayManager/Display1
  772 ?        Ss     0:00 iscsid
  773 ?        S<Ls   0:00 iscsid
  779 tty1     Rs+    0:35 /usr/bin/Xorg :0 -background none -logverbose 7 -auth /var/run/gdm/auth-for-gdm-Ziq3qo/database -seat seat0 -nolisten tcp v
  840 ?        Ssl    0:00 /usr/libexec/accounts-daemon
  849 ?        Ssl    0:00 /usr/sbin/console-kit-daemon --no-daemon
  934 ?        Ssl    0:00 /usr/libexec/upowerd
 1005 ?        Sl     0:00 gdm-session-worker [pam/gdm-password]
 1311 ?        Ss     0:00 /usr/sbin/cupsd -f
 1320 ?        Ssl    0:00 /usr/lib/udisks2/udisksd --no-debug
 1504 ?        Ss     0:00 /sbin/rpcbind -w
 1505 ?        Ss     0:00 /usr/sbin/sshd -D
 1513 ?        S<     0:00 [rpciod]
 1638 ?        S      0:00 [scsi_eh_4]
 1639 ?        S      0:00 [usb-storage]
 1640 ?        S      0:00 /usr/lib/udev/udevd
 1642 ?        S      0:00 /usr/lib/udev/udevd
 1673 ?        Ss     0:00 sendmail: accepting connections
 1931 ?        S      0:00 [kworker/1:2]
 2211 ?        S      0:00 [flush-8:16]
 2670 ?        S      0:00 [kworker/0:2]
 2722 ?        S      0:00 [kworker/1:1]
 2724 pts/0    S      0:00 su root
 2732 pts/0    S      0:00 bash
 2897 ?        S      0:00 [kworker/1:0]
 2940 ?        S      0:00 [kworker/0:0]
 2954 ?        S      0:00 sleep 60
 2955 pts/0    S+     0:00 sh ass3.sh
 2956 pts/0    R+     0:00 ps -x
[root@akshay akshay]# sh ass3.sh
1.ps
2.ps -l
3.ps -a
4.ps -d
5.ps -e
6.ps -ecl
7.ps -exl
8.ps -c
9.ps -x
10.ps -aclx
11.nice -n 82 bash
12.renice -n 4418
13.kill 4540 
14.kill -9 4540 
15.su root

Enter the choice10
Warning: bad syntax, perhaps a bogus '-'? See /usr/share/doc/procps-3.2.8/FAQ
F   UID   PID  PPID PRI  NI    VSZ   RSS WCHAN  STAT TTY        TIME COMMAND
4     0     1     0  20   0  62172 25084 epoll_ Ss   ?          0:01 systemd
1     0     2     0  20   0      0     0 kthrea S    ?          0:00 kthreadd
1     0     3     2  20   0      0     0 run_ks S    ?          0:00 ksoftirqd/0
1     0     6     2 -100  -      0     0 cpu_st S    ?          0:00 migration/0
5     0     7     2 -100  -      0     0 watchd S    ?          0:00 watchdog/0
1     0     8     2 -100  -      0     0 cpu_st S    ?          0:00 migration/1
1     0    10     2  20   0      0     0 run_ks S    ?          0:00 ksoftirqd/1
1     0    11     2  20   0      0     0 worker S    ?          0:00 kworker/0:1
5     0    12     2 -100  -      0     0 watchd S    ?          0:00 watchdog/1
1     0    13     2   0 -20      0     0 rescue S<   ?          0:00 cpuset
1     0    14     2   0 -20      0     0 rescue S<   ?          0:00 khelper
5     0    15     2  20   0      0     0 devtmp S    ?          0:00 kdevtmpfs
1     0    16     2   0 -20      0     0 rescue S<   ?          0:00 netns
1     0    17     2  20   0      0     0 bdi_sy S    ?          0:00 sync_supers
1     0    18     2  20   0      0     0 bdi_fo S    ?          0:00 bdi-default
1     0    19     2   0 -20      0     0 rescue S<   ?          0:00 kintegrityd
1     0    20     2   0 -20      0     0 rescue S<   ?          0:00 kblockd
1     0    21     2   0 -20      0     0 rescue S<   ?          0:00 ata_sff
1     0    22     2  20   0      0     0 hub_th S    ?          0:00 khubd
1     0    23     2   0 -20      0     0 rescue S<   ?          0:00 md
1     0    26     2  20   0      0     0 kswapd S    ?          0:00 kswapd0
1     0    27     2  25   5      0     0 ksm_sc SN   ?          0:00 ksmd
1     0    28     2  39  19      0     0 khugep SN   ?          0:00 khugepaged
1     0    29     2  20   0      0     0 fsnoti S    ?          0:00 fsnotify_mark
1     0    30     2   0 -20      0     0 rescue S<   ?          0:00 crypto
1     0    36     2   0 -20      0     0 rescue S<   ?          0:00 kthrotld
1     0    38     2  20   0      0     0 scsi_e S    ?          0:00 scsi_eh_0
1     0    39     2  20   0      0     0 scsi_e S    ?          0:00 scsi_eh_1
1     0    41     2  20   0      0     0 scsi_e S    ?          0:00 scsi_eh_2
1     0    42     2  20   0      0     0 scsi_e S    ?          0:00 scsi_eh_3
1     0    43     2  20   0      0     0 worker S    ?          0:00 kworker/u:3
1     0    44     2  20   0      0     0 worker S    ?          0:00 kworker/u:4
1     0    45     2   0 -20      0     0 rescue S<   ?          0:00 kpsmoused
1     0   265     2   0 -20      0     0 rescue S<   ?          0:00 kdmflush
1     0   267     2   0 -20      0     0 rescue S<   ?          0:00 kdmflush
1     0   315     2  20   0      0     0 kjourn S    ?          0:00 jbd2/dm-1-8
1     0   316     2   0 -20      0     0 rescue S<   ?          0:00 ext4-dio-unwrit
4     0   344     1  20   0  31300  1584 epoll_ Ss   ?          0:00 systemd-journal
1     0   345     2  20   0      0     0 kaudit S    ?          0:00 kauditd
4     0   350     1  20   0  29744  4436 epoll_ Ss   ?          0:00 udevd
1     0   376     2  20   0      0     0 bdi_wr S    ?          0:00 flush-253:1
1     0   386     2   0 -20      0     0 rescue S<   ?          0:00 kvm-irqfd-clean
1     0   469     2   0 -20      0     0 rescue S<   ?          0:00 hd-audio0
1     0   503     2  20   0      0     0 kjourn S    ?          0:00 jbd2/sda8-8
1     0   504     2   0 -20      0     0 rescue S<   ?          0:00 ext4-dio-unwrit
1     0   519     2   0 -20      0     0 rescue S<   ?          0:00 kdmflush
1     0   539     2  20   0      0     0 kjourn S    ?          0:00 jbd2/dm-2-8
1     0   540     2   0 -20      0     0 rescue S<   ?          0:00 ext4-dio-unwrit
4     0   567     1  16  -4  26224  1076 epoll_ S<sl ?          0:00 auditd
0     0   578     1  20   0 122728  1220 poll_s Ss   ?          0:00 abrtd
0     0   588     1  20   0 120620   924 inotif Ss   ?          0:00 abrt-watch-log
5     0   589     1  20   0   7408   316 hrtime Ss   ?          0:00 gpm
4     0   592     1  20   0  19464  2096 hrtime Ss   ?          0:00 smartd
4     0   598     1  20   0 266248  5296 poll_s Ssl  ?          0:00 NetworkManager
4     0   600     1  20   0 452596  7920 poll_s Ssl  ?          0:00 libvirtd
4    70   607     1  20   0  28000  1736 poll_s Ss   ?          0:00 avahi-daemon
1    70   609   607  20   0  27880   228 unix_s S    ?          0:00 avahi-daemon
1     0   619     2   0 -20      0     0 rescue S<   ?          0:00 iscsi_eh
0     0   625     1  20   0  13692   328 inotif Ss   ?          0:00 system-setup-ke
1     0   626     1  20   0   4288   576 poll_s Ss   ?          0:00 acpid
4     0   631     1  20   0  28252  1556 epoll_ Ss   ?          0:00 systemd-logind
4     0   645     1  20   0   6436   840 poll_s Ss   ?          0:00 mcelog
4     0   646     1  20   0  21188   928 pause  Ss   ?          0:00 atd
4     0   647     1  20   0 211812  2228 poll_s Ssl  ?          0:00 gdm-binary
4     0   657     1  20   0 118392  1512 hrtime Ss   ?          0:00 crond
4     0   660     1  20   0 251540  1696 poll_s Ssl  ?          0:00 rsyslogd
4     0   661   567  12  -8  80172   840 futex_ S<sl ?          0:00 audispd
4     0   663   661  16  -4  21424  1052 unix_s S<   ?          0:00 sedispatch
1     0   666     1  20   0 114192   824 wait   S    ?          0:00 ksmtuned
1     0   677     2   0 -20      0     0 rescue S<   ?          0:00 ib_mcast
4    81   679     1  20   0  31320  2736 poll_s Ssl  ?          0:00 dbus-daemon
1     0   685     2   0 -20      0     0 rescue S<   ?          0:00 ib_cm
1     0   694     2   0 -20      0     0 rescue S<   ?          0:00 iw_cm_wq
1     0   697     2   0 -20      0     0 rescue S<   ?          0:00 ib_addr
1     0   700     2  20   0      0     0 bdi_wr S    ?          0:00 flush-253:2
1     0   703     2   0 -20      0     0 rescue S<   ?          0:00 rdma_cm
1     0   733     2   0 -20      0     0 rescue S<   ?          0:00 cnic_wq
1     0   734     2   0 -20      0     0 bnx2i_ S<   ?          0:00 bnx2i_thread/0
1     0   735     2   0 -20      0     0 bnx2i_ S<   ?          0:00 bnx2i_thread/1
4     0   743     1  20   0 321996 39124 poll_s Sl   ?          0:01 setroubleshootd
4     0   746     1  20   0 198040  6580 poll_s Sl   ?          0:00 polkitd
5    99   753     1  20   0  13096   600 poll_s S    ?          0:00 dnsmasq
4     0   755     1  20   0  71152  2680 poll_s S    ?          0:00 modem-manager
4     0   756     1  20   0  23168  1832 poll_s Ss   ?          0:00 bluetoothd
5     0   762     1  20   0  98784   328 skb_re Ssl  ?          0:00 iscsiuio
4     0   769   647  20   0 249604  3796 poll_s Sl   ?          0:00 gdm-simple-slav
1     0   772     1  20   0   5052   432 hrtime Ss   ?          0:00 iscsid
5     0   773     1  10 -10   5552  3388 poll_s S<Ls ?          0:00 iscsid
4     0   779   769  20   0  99488 12464 poll_s Ss+  tty1       0:35 Xorg
4     0   840     1  20   0 295248  3212 poll_s Ssl  ?          0:00 accounts-daemon
4     0   849     1  20   0 1042964 3400 poll_s Ssl  ?          0:00 console-kit-dae
0     0   934     1  20   0 230180  3556 poll_s Ssl  ?          0:00 upowerd
4   172   988     1  21   1 164560  1212 poll_s SNsl ?          0:00 rtkit-daemon
4     0  1005   769  20   0 360848  4304 poll_s Sl   ?          0:00 gdm-session-wor
1  1000  1113     1  20   0 514568  3560 poll_s Sl   ?          0:00 gnome-keyring-d
4  1000  1117  1005  20   0 503356  9772 poll_s Ssl  ?          0:00 gnome-session
1  1000  1128     1  20   0  20216   496 poll_s S    ?          0:00 dbus-launch
1  1000  1129     1  20   0  32144  2520 poll_s Ssl  ?          0:00 dbus-daemon
0  1000  1191     1  20   0 327776  4356 poll_s Sl   ?          0:00 imsettings-daem
0  1000  1194     1  20   0 161160  2244 poll_s S    ?          0:00 gvfsd
0  1000  1196     1  20   0 277800  4548 futex_ Sl   ?          0:00 gvfs-fuse-daemo
0  1000  1200     1  20   0  29120  1848 poll_s S    ?          0:00 xfconfd
0  1000  1288  1117  20   0 806428 20328 poll_s Sl   ?          0:01 gnome-settings-
1  1000  1299     1   9 -11 474960  6932 poll_s S<l  ?          0:00 pulseaudio
4     0  1311     1  20   0 204408  3956 epoll_ Ss   ?          0:00 cupsd
0  1000  1313     1  20   0 467864  3236 poll_s Sl   ?          0:00 gsd-printer
0  1000  1318     1  20   0 397896  6984 poll_s Sl   ?          0:00 gvfs-udisks2-vo
0     0  1320     1  20   0 349532  4552 poll_s Ssl  ?          0:00 udisksd
0  1000  1326     1  20   0 169784  2072 poll_s S    ?          0:00 gvfs-gphoto2-vo
0  1000  1328     1  20   0 245984  1856 poll_s Sl   ?          0:00 gvfs-afc-volume
4   997  1330     1  20   0 322148  4648 poll_s Ssl  ?          0:00 colord
0  1000  1333  1117  20   0 1756136 79676 poll_s Sl  ?          0:57 gnome-shell
0  1000  1343  1117  20   0 249264  6964 poll_s S    ?          0:00 seapplet
0  1000  1344  1117  39  19 531336 10804 poll_s SNl  ?          0:00 tracker-miner-f
0  1000  1348  1117  20   0 792944 13536 poll_s Sl   ?          0:00 nm-applet
0  1000  1349  1117  20   0 487112 12324 poll_s Sl   ?          0:00 tracker-store
0  1000  1351  1117  20   0 548728 10776 poll_s Sl   ?          0:00 evolution-alarm
0  1000  1369  1117  20   0 293112  5896 poll_s Sl   ?          0:00 deja-dup-monito
0  1000  1387  1117  20   0 413320  5252 poll_s Sl   ?          0:08 zeitgeist-datah
0  1000  1407  1117  20   0 247376  5228 poll_s S    ?          0:00 abrt-applet
0  1000  1413  1117  20   0 424828  8860 poll_s Sl   ?          0:00 gnome-screensav
0  1000  1416     1  20   0 257756  4352 poll_s Sl   ?          0:00 dconf-service
0  1000  1422     1  20   0 263072 16084 poll_s S    ?          0:00 zeitgeist-daemo
0  1000  1426     1  20   0 138672  2532 poll_s S    ?          0:00 gconfd-2
4   997  1439     1  20   0 532068  7876 poll_s Ssl  ?          0:00 colord-sane
0  1000  1444     1  20   0 551776  9568 poll_s Sl   ?          0:00 gnome-shell-cal
0  1000  1446     1  20   0 321648  5604 poll_s Sl   ?          0:00 mission-control
0  1000  1450     1  20   0 413576  5708 poll_s Sl   ?          0:00 goa-daemon
0  1000  1480     1  20   0 315396 13576 poll_s Sl   ?          0:00 libsocialweb-co
5     0  1504     1  20   0  19160   892 poll_s Ss   ?          0:00 rpcbind
4     0  1505     1  20   0  77608  3240 poll_s Ss   ?          0:00 sshd
1     0  1513     2   0 -20      0     0 rescue S<   ?          0:00 rpciod
5    29  1516     1  20   0  23532  1392 poll_s Ss   ?          0:00 rpc.statd
0  1000  1625     1  20   0 152352  1984 poll_s S    ?          0:00 gvfsd-metadata
1     0  1638     2  20   0      0     0 scsi_e S    ?          0:00 scsi_eh_4
1     0  1639     2  20   0      0     0 usb_st S    ?          0:00 usb-storage
5     0  1640   350  20   0  29644  3968 epoll_ S    ?          0:00 udevd
5     0  1642   350  20   0  29740  3784 epoll_ S    ?          0:00 udevd
0  1000  1660     1  20   0 1390440 27704 poll_s Sl  ?          0:06 nautilus
0  1000  1667     1  20   0 163704  3232 poll_s S    ?          0:00 gvfsd-trash
0  1000  1671     1  20   0 161160  2324 poll_s S    ?          0:00 gvfsd-burn
5     0  1673     1  20   0  97676  2228 poll_s Ss   ?          0:00 sendmail
1    51  1722     1  20   0  82728  1828 pause  Ss   ?          0:00 sendmail
1     0  1931     2  20   0      0     0 worker S    ?          0:00 kworker/1:2
1     0  2211     2  20   0      0     0 bdi_wr S    ?          0:00 flush-8:16
0  1000  2301  1333  20   0 744776 15632 -      Rl   ?          0:05 gnome-terminal
0  1000  2306  2301  20   0   8412   696 unix_s S    ?          0:00 gnome-pty-helpe
0  1000  2307  2301  20   0 116176  3776 wait   Ss   pts/0      0:00 bash
1     0  2670     2  20   0      0     0 worker S    ?          0:00 kworker/0:2
1     0  2722     2  20   0      0     0 worker S    ?          0:00 kworker/1:1
0  1000  2723  2307  20   0 112096  1288 wait   S    pts/0      0:00 sh
4     0  2724  2723  20   0 186392  4956 wait   S    pts/0      0:00 su
4     0  2732  2724  20   0 116180  3764 wait   S    pts/0      0:00 bash
1     0  2897     2  20   0      0     0 worker S    ?          0:00 kworker/1:0
0  1000  2922     1  20   0 707932 27816 poll_s Sl   ?          0:01 gedit
1     0  2940     2  20   0      0     0 worker S    ?          0:00 kworker/0:0
0     0  2954   666  20   0 106844   504 hrtime S    ?          0:00 sleep
4     0  2957  2732  20   0 112096  1284 wait   S+   pts/0      0:00 sh
4     0  2958  2957  20   0 113636   824 -      R+   pts/0      0:00 ps
Enter the choice11
[root@akshay akshay]# sh ass3.sh
1.ps
2.ps -l
3.ps -a
4.ps -d
5.ps -e
6.ps -ecl
7.ps -exl
8.ps -c
9.ps -x
10.ps -aclx
11.nice -n 82 bash
12.renice -n 4418
13.kill 4540 
14.kill -9 4540 
15.su root

Enter the choice2
F S   UID   PID  PPID  C PRI  NI ADDR SZ WCHAN  TTY          TIME CMD
4 S     0  3813  3812  0  80   0 - 46598 wait   pts/0    00:00:00 su
4 S     0  3821  3813  0  80   0 - 29045 wait   pts/0    00:00:00 bash
4 S     0  3910  3821  0  80   0 - 28024 wait   pts/0    00:00:00 sh
4 S     0  3911  3910  0  99  19 - 29045 wait   pts/0    00:00:00 bash
4 S     0  3997  3911  0  99  19 - 28024 wait   pts/0    00:00:00 sh
0 R     0  3998  3997  0  99  19 - 28409 -      pts/0    00:00:00 ps

[root@akshay akshay]# sh ass3.sh
1.ps
2.ps -l
3.ps -a
4.ps -d
5.ps -e
6.ps -ecl
7.ps -exl
8.ps -c
9.ps -x
10.ps -aclx
11.nice -n 82 bash
12.renice -n 3910
13.kill 4540 
14.kill -9 4540 
15.su root

Enter the choice12
[root@akshay akshay]# sh ass3.sh
1.ps
2.ps -l
3.ps -a
4.ps -d
5.ps -e
6.ps -ecl
7.ps -exl
8.ps -c
9.ps -x
10.ps -aclx
11.nice -n 82 bash
12.renice -n 3910
13.kill 4126 
14.kill -9 4126 
15.su root

Enter the choice13
[root@akshay akshay]# sh ass3.sh
1.ps
2.ps -l
3.ps -a
4.ps -d
5.ps -e
6.ps -ecl
7.ps -exl
8.ps -c
9.ps -x
10.ps -aclx
11.nice -n 82 bash
12.renice -n 3910
13.kill 4126 
14.kill -9 4126 
15.su root

Enter the choice14
[root@akshay akshay]# 
