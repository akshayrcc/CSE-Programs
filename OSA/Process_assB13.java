---------------------------------------------------
Name:Akshay Chaudhari
Class:SE  Div:A
Roll no.: 32
---------------------------------------------------
ASSIGNMENT NO.B3
---------------------------------------------------
import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;


public class Process_assB13{
	Process p;
	InputStream in;
	BufferedReader br;
	String str;
	public void listprocess()
	{
		try{
				p=Runtime.getRuntime().exec("ps");
in = p.getInputStream();
br =	new BufferedReader(new InputStreamReader(in));
str=br.readLine();
while(str!=null)
{
					System.out.println(str);
str=br.readLine();
}
}catch(Exception e)
{
System.out.println(e.getMessage());
}
finally
	{
		try
		{
			p=null;
			in.close();
			br.close();
			str=null;
			}catch(Exception e1)
			{
		System.out.println(e1.getMessage());
			}
		}

}
public void DisGlobal()
	{
		try{
	p=Runtime.getRuntime().exec("ps -ecl");
	in = p.getInputStream();
br =	new BufferedReader(new InputStreamReader(in));
			str=br.readLine();
			while(str!=null)
				{
			System.out.println(str);
			str=br.readLine();

				}
			}catch(Exception e)
			{
		System.out.println(e.getMessage());
			}
		finally
			{
			try
				{
				p=null;
				in.close();
				br.close();
				str=null;
				}catch(Exception e1)
				{
		System.out.println(e1.getMessage());
				}
		}
	}
	public void chprio(int ...args)
	{
	int pri = 0;
	    if (args.length > 0) {
    	try
    	{
	p=Runtime.getRuntime().exec(new String[] {
	        "sh","-c","renice "+pri+" ppid $$"});
	    		DisGlobal();

	    		in=p.getInputStream();
	    		br=new BufferedReader(new InputStreamReader(in));
	    		str=br.readLine();
	    		System.out.println(str);
	    		while(str!=null)
	    		{
	    			System.out.println(str);
	    			str=br.readLine();
	    		}

	    	}catch(IOException e)
	    	{
	    		System.out.println(e.getMessage());
	    	}
	    }
	    if (args.length > 2) {
	     System.out.println("sorry no option");
	    }

	}
	public void show()
	{
		try{
			p=Runtime.getRuntime().exec("ps -ecl ");
		
		}catch(Exception e)
		{
			System.out.println(e.getMessage());
		}

	}
	public static void main(String[] args) {
		int ch;
		boolean flag=true;
		DataInputStream in=null;
		ass10 a=new ass10();
		while(flag)
		{
			try
			{
			in=new DataInputStream(System.in);
			System.out.println("\n1.listprocess\n2.InfoProcess\n3.DisGlobal\n4.change process Piority\n5.exit");
			System.out.println("\nplase enter ur choice");
			ch=Integer.parseInt(in.readLine());
			switch(ch)
			{
			case 1:
				a.listprocess();
					break;
			case 2:
					break;
			case 3:
				a.DisGlobal();
					break;
			case 4:
				System.out.println("\nplease Enter Process Priority");
				int pr=Integer.parseInt(in.readLine());
				a.chprio(pr);
			default:
					flag=false;
					System.out.println("\n sorry");
					break;
			}

			}catch(Exception e)
			{
				System.out.println(e.getMessage());
			}
			System.out.println("\n1.listprocess\n2.InfoProcess\n3.DisGlobal\n4.change process Piority\n5.exit");

		}


	}

}
=========================================================
Output:
=========================================================
[Akshay@Akshay ~]$ java ass10

1.listprocess
2.InfoProcess
3.DisGlobal
4.change process Piority
5.exit

plase enter ur choice


1
  PID TTY          TIME CMD
 1951 pts/0    00:00:00 bash
 2365 pts/0    00:00:00 java
 2377 pts/0    00:00:00 ps

1.listprocess
2.InfoProcess
3.DisGlobal
4.change process Piority
5.exit

1.listprocess
2.InfoProcess
3.DisGlobal
4.change process Piority
5.exit

plase enter ur choice


2

1.listprocess
2.InfoProcess
3.DisGlobal
4.change process Piority
5.exit

1.listprocess
2.InfoProcess
3.DisGlobal
4.change process Piority
5.exit

plase enter ur choice


3
F S   UID   PID  PPID CLS PRI ADDR SZ WCHAN  TTY          TIME CMD
4 S     0     1     0 TS   19 - 15507 epoll_ ?        00:00:01 systemd
1 S     0     2     0 TS   19 -     0 kthrea ?        00:00:00 kthreadd
1 S     0     3     2 TS   19 -     0 run_ks ?        00:00:00 ksoftirqd/0
1 S     0     6     2 FF  139 -     0 cpu_st ?        00:00:00 migration/0
5 S     0     7     2 FF  139 -     0 watchd ?        00:00:00 watchdog/0
1 S     0     8     2 FF  139 -     0 cpu_st ?        00:00:00 migration/1
1 S     0    10     2 TS   19 -     0 run_ks ?        00:00:00 ksoftirqd/1
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
1 S     0   309     2 TS   39 -     0 rescue ?        00:00:00 kdmflush
1 S     0   310     2 TS   39 -     0 rescue ?        00:00:00 kdmflush
1 S     0   359     2 TS   19 -     0 kjourn ?        00:00:00 jbd2/dm-1-8
1 S     0   360     2 TS   39 -     0 rescue ?        00:00:00 ext4-dio-unwrit
4 S     0   388     1 TS   19 -  7605 epoll_ ?        00:00:00 systemd-journal
1 S     0   389     2 TS   19 -     0 kaudit ?        00:00:00 kauditd
4 S     0   394     1 TS   19 -  7485 epoll_ ?        00:00:00 udevd
1 S     0   424     2 TS   19 -     0 bdi_wr ?        00:00:00 flush-253:1
1 S     0   432     2 TS   39 -     0 rescue ?        00:00:00 kvm-irqfd-clean
1 S     0   530     2 TS   39 -     0 rescue ?        00:00:00 hd-audio0
1 S     0   562     2 TS   39 -     0 rescue ?        00:00:00 kdmflush
1 S     0   577     2 TS   19 -     0 kjourn ?        00:00:00 jbd2/sda8-8
1 S     0   578     2 TS   39 -     0 rescue ?        00:00:00 ext4-dio-unwrit
1 S     0   586     2 TS   19 -     0 kjourn ?        00:00:00 jbd2/dm-2-8
1 S     0   587     2 TS   39 -     0 rescue ?        00:00:00 ext4-dio-unwrit
1 S     0   592     2 TS   19 -     0 bdi_wr ?        00:00:00 flush-253:2
4 S     0   613     1 TS   23 -  6551 epoll_ ?        00:00:00 auditd
0 S     0   628     1 TS   19 - 30682 poll_s ?        00:00:00 abrtd
0 S     0   637     1 TS   19 - 30155 inotif ?        00:00:00 abrt-watch-log
5 S     0   638     1 TS   19 -  1852 hrtime ?        00:00:00 gpm
4 S     0   639     1 TS   19 -  4866 hrtime ?        00:00:00 smartd
4 S     0   647     1 TS   19 - 66561 poll_s ?        00:00:00 NetworkManager
1 S     0   648     2 TS   39 -     0 rescue ?        00:00:00 iscsi_eh
4 S     0   655     1 TS   19 - 113149 poll_s ?       00:00:00 libvirtd
4 S    70   656     1 TS   19 -  7000 poll_s ?        00:00:00 avahi-daemon
1 S    70   659   656 TS   19 -  6970 unix_s ?        00:00:00 avahi-daemon
0 S     0   676     1 TS   19 -  3423 inotif ?        00:00:00 system-setup-ke
1 S     0   677     1 TS   19 -  1072 poll_s ?        00:00:00 acpid
4 S     0   685     1 TS   19 -  7063 epoll_ ?        00:00:00 systemd-logind
4 S     0   687     1 TS   19 -  1609 poll_s ?        00:00:00 mcelog
4 S     0   688     1 TS   19 -  5297 pause  ?        00:00:00 atd
4 S     0   689     1 TS   19 - 52953 poll_s ?        00:00:00 gdm-binary
4 S     0   695     1 TS   19 - 29599 hrtime ?        00:00:00 crond
1 S     0   698     1 TS   19 - 28548 wait   ?        00:00:00 ksmtuned
4 S     0   700     1 TS   19 - 62885 poll_s ?        00:00:00 rsyslogd
4 S    81   720     1 TS   19 -  7743 poll_s ?        00:00:00 dbus-daemon
4 S     0   726   613 TS   27 - 20043 futex_ ?        00:00:00 audispd
4 S     0   727   726 TS   23 -  5355 unix_s ?        00:00:00 sedispatch
1 S     0   739     2 TS   39 -     0 rescue ?        00:00:00 ib_mcast
1 S     0   746     2 TS   39 -     0 rescue ?        00:00:00 ib_cm
1 S     0   753     2 TS   39 -     0 rescue ?        00:00:00 iw_cm_wq
1 S     0   754     2 TS   39 -     0 rescue ?        00:00:00 ib_addr
1 S     0   755     2 TS   39 -     0 rescue ?        00:00:00 rdma_cm
1 S     0   771     2 TS   39 -     0 rescue ?        00:00:00 cnic_wq
1 S     0   782     2 TS   39 -     0 bnx2i_ ?        00:00:00 bnx2i_thread/0
1 S     0   783     2 TS   39 -     0 bnx2i_ ?        00:00:00 bnx2i_thread/1
4 S     0   790     1 TS   19 - 49510 poll_s ?        00:00:00 polkitd
5 S     0   799     1 TS   19 - 24696 skb_re ?        00:00:00 iscsiuio
5 S    99   804     1 TS   19 -  3274 poll_s ?        00:00:00 dnsmasq
1 S     0   807     1 TS   19 -  1263 hrtime ?        00:00:00 iscsid
5 S     0   808     1 TS   29 -  1388 poll_s ?        00:00:00 iscsid
4 S     0   812     1 TS   19 - 17788 poll_s ?        00:00:00 modem-manager
4 S     0   813     1 TS   19 -  5792 poll_s ?        00:00:00 bluetoothd
4 S     0   815   689 TS   19 - 62401 poll_s ?        00:00:00 gdm-simple-slav
4 S     0   825   815 TS   19 - 24932 poll_s tty1     00:00:24 Xorg
4 S     0   891     1 TS   19 - 73771 poll_s ?        00:00:00 accounts-daemon
4 S     0   897     1 TS   19 - 260741 poll_s ?       00:00:00 console-kit-dae
0 S     0   977     1 TS   19 - 57545 poll_s ?        00:00:00 upowerd
4 S   172  1031     1 TS   18 - 41140 poll_s ?        00:00:00 rtkit-daemon
4 S     0  1048   815 TS   19 - 90209 poll_s ?        00:00:00 gdm-session-wor
1 S  1000  1064     1 TS   19 - 128642 poll_s ?       00:00:00 gnome-keyring-d
4 S  1000  1066  1048 TS   19 - 125839 poll_s ?       00:00:00 gnome-session
1 S  1000  1077     1 TS   19 -  5054 poll_s ?        00:00:00 dbus-launch
1 S  1000  1078     1 TS   19 -  8058 poll_s ?        00:00:01 dbus-daemon
0 S  1000  1140     1 TS   19 - 81944 poll_s ?        00:00:00 imsettings-daem
0 S  1000  1143     1 TS   19 - 40290 poll_s ?        00:00:00 gvfsd
0 S  1000  1145     1 TS   19 - 69450 futex_ ?        00:00:00 gvfs-fuse-daemo
0 S  1000  1150     1 TS   19 -  7280 poll_s ?        00:00:00 xfconfd
0 S  1000  1238  1066 TS   19 - 201679 poll_s ?       00:00:01 gnome-settings-
1 S  1000  1241     1 TS   30 - 118740 poll_s ?       00:00:00 pulseaudio
4 S     0  1260     1 TS   19 - 51102 epoll_ ?        00:00:00 cupsd
0 S  1000  1262     1 TS   19 - 116966 poll_s ?       00:00:00 gsd-printer
0 S  1000  1267     1 TS   19 - 117893 poll_s ?       00:00:00 gvfs-udisks2-vo
0 S     0  1269     1 TS   19 - 87343 poll_s ?        00:00:00 udisksd
0 S  1000  1275     1 TS   19 - 42446 poll_s ?        00:00:00 gvfs-gphoto2-vo
0 S  1000  1277     1 TS   19 - 61496 poll_s ?        00:00:00 gvfs-afc-volume
4 S   997  1279     1 TS   19 - 80539 poll_s ?        00:00:00 colord
0 R  1000  1286  1066 TS   19 - 455445 -     ?        00:00:46 gnome-shell
0 S  1000  1292  1066 TS   19 - 62316 poll_s ?        00:00:00 seapplet
0 S  1000  1293  1066 TS    0 - 132806 poll_s ?       00:00:00 tracker-miner-f
0 S  1000  1296  1066 TS   19 - 198236 poll_s ?       00:00:00 nm-applet
0 S  1000  1298  1066 TS   19 - 122030 poll_s ?       00:00:00 tracker-store
0 S  1000  1303  1066 TS   19 - 137182 poll_s ?       00:00:00 evolution-alarm
0 S  1000  1304  1066 TS   19 - 73279 poll_s ?        00:00:00 deja-dup-monito
0 S  1000  1308  1066 TS   19 - 103331 poll_s ?       00:00:10 zeitgeist-datah
0 S  1000  1341  1066 TS   19 - 61844 poll_s ?        00:00:00 abrt-applet
0 S  1000  1361  1066 TS   19 - 106207 poll_s ?       00:00:00 gnome-screensav
0 S  1000  1363     1 TS   19 - 65772 poll_s ?        00:00:00 zeitgeist-daemo
0 S  1000  1365     1 TS   19 - 64439 poll_s ?        00:00:00 dconf-service
0 S  1000  1373     1 TS   19 - 34667 poll_s ?        00:00:00 gconfd-2
4 S   997  1374     1 TS   19 - 133018 poll_s ?       00:00:00 colord-sane
0 S  1000  1394     1 TS   19 - 137944 poll_s ?       00:00:00 gnome-shell-cal
0 S  1000  1396     1 TS   19 - 80412 poll_s ?        00:00:00 mission-control
0 S  1000  1400     1 TS   19 - 103394 poll_s ?       00:00:00 goa-daemon
0 S  1000  1425     1 TS   19 - 78848 poll_s ?        00:00:00 libsocialweb-co
5 S     0  1448     1 TS   19 -  4790 poll_s ?        00:00:00 rpcbind
4 S     0  1449     1 TS   19 - 19402 poll_s ?        00:00:00 sshd
1 S     0  1457     2 TS   39 -     0 rescue ?        00:00:00 rpciod
5 S    29  1460     1 TS   19 -  5883 poll_s ?        00:00:00 rpc.statd
1 S     0  1575     2 TS   19 -     0 scsi_e ?        00:00:00 scsi_eh_4
1 S     0  1576     2 TS   19 -     0 usb_st ?        00:00:00 usb-storage
5 S     0  1579   394 TS   19 -  7484 epoll_ ?        00:00:00 udevd
5 S     0  1580   394 TS   19 -  7484 epoll_ ?        00:00:00 udevd
0 S  1000  1606     1 TS   19 - 40926 poll_s ?        00:00:00 gvfsd-trash
0 S  1000  1611     1 TS   19 - 40321 poll_s ?        00:00:00 gvfsd-burn
5 S     0  1618     1 TS   19 - 24419 poll_s ?        00:00:00 sendmail
0 S  1000  1637     1 TS   19 - 38096 poll_s ?        00:00:00 gvfsd-metadata
1 S    51  1667     1 TS   19 - 20683 pause  ?        00:00:00 sendmail
1 S     0  1765     2 TS   19 -     0 worker ?        00:00:00 kworker/0:0
0 S  1000  1944  1286 TS   19 - 186062 poll_s ?       00:00:01 gnome-terminal
0 S  1000  1950  1944 TS   19 -  2103 unix_s ?        00:00:00 gnome-pty-helpe
0 S  1000  1951  1944 TS   19 - 29075 wait   pts/0    00:00:00 bash
0 S  1000  2040  1286 TS   19 - 246527 poll_s ?       00:00:06 nautilus
1 S     0  2086     2 TS   19 -     0 worker ?        00:00:00 kworker/1:1
1 S     0  2115     2 TS   19 -     0 worker ?        00:00:00 kworker/0:1
1 S     0  2166     2 TS   19 -     0 worker ?        00:00:00 kworker/1:2
1 S     0  2206     2 TS   19 -     0 bdi_wr ?        00:00:00 flush-8:16
1 S     0  2254     2 TS   19 -     0 worker ?        00:00:00 kworker/0:2
1 S     0  2296     2 TS   19 -     0 worker ?        00:00:00 kworker/1:0
0 S  1000  2301     1 TS   19 - 223168 poll_s ?       00:00:02 gedit
0 S     0  2344   698 TS   19 - 26711 hrtime ?        00:00:00 sleep
0 S  1000  2365  1951 TS   19 - 463770 futex_ pts/0   00:00:00 java
0 R  1000  2379  2365 TS   19 - 28409 -      pts/0    00:00:00 ps

1.listprocess
2.InfoProcess
3.DisGlobal
4.change process Piority
5.exit

1.listprocess
2.InfoProcess
3.DisGlobal
4.change process Piority
5.exit

plase enter ur choice


4

please Enter Process Priority

8
F S   UID   PID  PPID CLS PRI ADDR SZ WCHAN  TTY          TIME CMD
4 S     0     1     0 TS   19 - 15507 epoll_ ?        00:00:01 systemd
1 S     0     2     0 TS   19 -     0 kthrea ?        00:00:00 kthreadd
1 S     0     3     2 TS   19 -     0 run_ks ?        00:00:00 ksoftirqd/0
1 S     0     6     2 FF  139 -     0 cpu_st ?        00:00:00 migration/0
5 S     0     7     2 FF  139 -     0 watchd ?        00:00:00 watchdog/0
1 S     0     8     2 FF  139 -     0 cpu_st ?        00:00:00 migration/1
1 S     0    10     2 TS   19 -     0 run_ks ?        00:00:00 ksoftirqd/1
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
1 S     0   309     2 TS   39 -     0 rescue ?        00:00:00 kdmflush
1 S     0   310     2 TS   39 -     0 rescue ?        00:00:00 kdmflush
1 S     0   359     2 TS   19 -     0 kjourn ?        00:00:00 jbd2/dm-1-8
1 S     0   360     2 TS   39 -     0 rescue ?        00:00:00 ext4-dio-unwrit
4 S     0   388     1 TS   19 -  7605 epoll_ ?        00:00:00 systemd-journal
1 S     0   389     2 TS   19 -     0 kaudit ?        00:00:00 kauditd
4 S     0   394     1 TS   19 -  7485 epoll_ ?        00:00:00 udevd
1 S     0   424     2 TS   19 -     0 bdi_wr ?        00:00:00 flush-253:1
1 S     0   432     2 TS   39 -     0 rescue ?        00:00:00 kvm-irqfd-clean
1 S     0   530     2 TS   39 -     0 rescue ?        00:00:00 hd-audio0
1 S     0   562     2 TS   39 -     0 rescue ?        00:00:00 kdmflush
1 S     0   577     2 TS   19 -     0 kjourn ?        00:00:00 jbd2/sda8-8
1 S     0   578     2 TS   39 -     0 rescue ?        00:00:00 ext4-dio-unwrit
1 S     0   586     2 TS   19 -     0 kjourn ?        00:00:00 jbd2/dm-2-8
1 S     0   587     2 TS   39 -     0 rescue ?        00:00:00 ext4-dio-unwrit
1 S     0   592     2 TS   19 -     0 bdi_wr ?        00:00:00 flush-253:2
4 S     0   613     1 TS   23 -  6551 epoll_ ?        00:00:00 auditd
0 S     0   628     1 TS   19 - 30682 poll_s ?        00:00:00 abrtd
0 S     0   637     1 TS   19 - 30155 inotif ?        00:00:00 abrt-watch-log
5 S     0   638     1 TS   19 -  1852 hrtime ?        00:00:00 gpm
4 S     0   639     1 TS   19 -  4866 hrtime ?        00:00:00 smartd
4 S     0   647     1 TS   19 - 66561 poll_s ?        00:00:00 NetworkManager
1 S     0   648     2 TS   39 -     0 rescue ?        00:00:00 iscsi_eh
4 S     0   655     1 TS   19 - 113149 poll_s ?       00:00:00 libvirtd
4 S    70   656     1 TS   19 -  7000 poll_s ?        00:00:00 avahi-daemon
1 S    70   659   656 TS   19 -  6970 unix_s ?        00:00:00 avahi-daemon
0 S     0   676     1 TS   19 -  3423 inotif ?        00:00:00 system-setup-ke
1 S     0   677     1 TS   19 -  1072 poll_s ?        00:00:00 acpid
4 S     0   685     1 TS   19 -  7063 epoll_ ?        00:00:00 systemd-logind
4 S     0   687     1 TS   19 -  1609 poll_s ?        00:00:00 mcelog
4 S     0   688     1 TS   19 -  5297 pause  ?        00:00:00 atd
4 S     0   689     1 TS   19 - 52953 poll_s ?        00:00:00 gdm-binary
4 S     0   695     1 TS   19 - 29599 hrtime ?        00:00:00 crond
1 S     0   698     1 TS   19 - 28548 wait   ?        00:00:00 ksmtuned
4 S     0   700     1 TS   19 - 62885 poll_s ?        00:00:00 rsyslogd
4 S    81   720     1 TS   19 -  7743 poll_s ?        00:00:00 dbus-daemon
4 S     0   726   613 TS   27 - 20043 futex_ ?        00:00:00 audispd
4 S     0   727   726 TS   23 -  5355 unix_s ?        00:00:00 sedispatch
1 S     0   739     2 TS   39 -     0 rescue ?        00:00:00 ib_mcast
1 S     0   746     2 TS   39 -     0 rescue ?        00:00:00 ib_cm
1 S     0   753     2 TS   39 -     0 rescue ?        00:00:00 iw_cm_wq
1 S     0   754     2 TS   39 -     0 rescue ?        00:00:00 ib_addr
1 S     0   755     2 TS   39 -     0 rescue ?        00:00:00 rdma_cm
1 S     0   771     2 TS   39 -     0 rescue ?        00:00:00 cnic_wq
1 S     0   782     2 TS   39 -     0 bnx2i_ ?        00:00:00 bnx2i_thread/0
1 S     0   783     2 TS   39 -     0 bnx2i_ ?        00:00:00 bnx2i_thread/1
4 S     0   790     1 TS   19 - 49510 poll_s ?        00:00:00 polkitd
5 S     0   799     1 TS   19 - 24696 skb_re ?        00:00:00 iscsiuio
5 S    99   804     1 TS   19 -  3274 poll_s ?        00:00:00 dnsmasq
1 S     0   807     1 TS   19 -  1263 hrtime ?        00:00:00 iscsid
5 S     0   808     1 TS   29 -  1388 poll_s ?        00:00:00 iscsid
4 S     0   812     1 TS   19 - 17788 poll_s ?        00:00:00 modem-manager
4 S     0   813     1 TS   19 -  5792 poll_s ?        00:00:00 bluetoothd
4 S     0   815   689 TS   19 - 62401 poll_s ?        00:00:00 gdm-simple-slav
4 S     0   825   815 TS   19 - 24932 poll_s tty1     00:00:24 Xorg
4 S     0   891     1 TS   19 - 73771 poll_s ?        00:00:00 accounts-daemon
4 S     0   897     1 TS   19 - 260741 poll_s ?       00:00:00 console-kit-dae
0 S     0   977     1 TS   19 - 57545 poll_s ?        00:00:00 upowerd
4 S   172  1031     1 TS   18 - 41140 poll_s ?        00:00:00 rtkit-daemon
4 S     0  1048   815 TS   19 - 90209 poll_s ?        00:00:00 gdm-session-wor
1 S  1000  1064     1 TS   19 - 128642 poll_s ?       00:00:00 gnome-keyring-d
4 S  1000  1066  1048 TS   19 - 125839 poll_s ?       00:00:00 gnome-session
1 S  1000  1077     1 TS   19 -  5054 poll_s ?        00:00:00 dbus-launch
1 S  1000  1078     1 TS   19 -  8058 poll_s ?        00:00:01 dbus-daemon
0 S  1000  1140     1 TS   19 - 81944 poll_s ?        00:00:00 imsettings-daem
0 S  1000  1143     1 TS   19 - 40290 poll_s ?        00:00:00 gvfsd
0 S  1000  1145     1 TS   19 - 69450 futex_ ?        00:00:00 gvfs-fuse-daemo
0 S  1000  1150     1 TS   19 -  7280 poll_s ?        00:00:00 xfconfd
0 S  1000  1238  1066 TS   19 - 201679 poll_s ?       00:00:01 gnome-settings-
1 S  1000  1241     1 TS   30 - 118740 poll_s ?       00:00:00 pulseaudio
4 S     0  1260     1 TS   19 - 51102 epoll_ ?        00:00:00 cupsd
0 S  1000  1262     1 TS   19 - 116966 poll_s ?       00:00:00 gsd-printer
0 S  1000  1267     1 TS   19 - 117893 poll_s ?       00:00:00 gvfs-udisks2-vo
0 S     0  1269     1 TS   19 - 87343 poll_s ?        00:00:00 udisksd
0 S  1000  1275     1 TS   19 - 42446 poll_s ?        00:00:00 gvfs-gphoto2-vo
0 S  1000  1277     1 TS   19 - 61496 poll_s ?        00:00:00 gvfs-afc-volume
4 S   997  1279     1 TS   19 - 80539 poll_s ?        00:00:00 colord
0 S  1000  1286  1066 TS   19 - 455445 ring_g ?       00:00:47 gnome-shell
0 S  1000  1292  1066 TS   19 - 62316 poll_s ?        00:00:00 seapplet
0 S  1000  1293  1066 TS    0 - 132806 poll_s ?       00:00:00 tracker-miner-f
0 S  1000  1296  1066 TS   19 - 198236 poll_s ?       00:00:00 nm-applet
0 S  1000  1298  1066 TS   19 - 122030 poll_s ?       00:00:00 tracker-store
0 S  1000  1303  1066 TS   19 - 137182 poll_s ?       00:00:00 evolution-alarm
0 S  1000  1304  1066 TS   19 - 73279 poll_s ?        00:00:00 deja-dup-monito
0 S  1000  1308  1066 TS   19 - 103331 poll_s ?       00:00:10 zeitgeist-datah
0 S  1000  1341  1066 TS   19 - 61844 poll_s ?        00:00:00 abrt-applet
0 S  1000  1361  1066 TS   19 - 106207 poll_s ?       00:00:00 gnome-screensav
0 S  1000  1363     1 TS   19 - 65772 poll_s ?        00:00:00 zeitgeist-daemo
0 S  1000  1365     1 TS   19 - 64439 poll_s ?        00:00:00 dconf-service
0 S  1000  1373     1 TS   19 - 34667 poll_s ?        00:00:00 gconfd-2
4 S   997  1374     1 TS   19 - 133018 poll_s ?       00:00:00 colord-sane
0 S  1000  1394     1 TS   19 - 137944 poll_s ?       00:00:00 gnome-shell-cal
0 S  1000  1396     1 TS   19 - 80412 poll_s ?        00:00:00 mission-control
0 S  1000  1400     1 TS   19 - 103394 poll_s ?       00:00:00 goa-daemon
0 S  1000  1425     1 TS   19 - 78848 poll_s ?        00:00:00 libsocialweb-co
5 S     0  1448     1 TS   19 -  4790 poll_s ?        00:00:00 rpcbind
4 S     0  1449     1 TS   19 - 19402 poll_s ?        00:00:00 sshd
1 S     0  1457     2 TS   39 -     0 rescue ?        00:00:00 rpciod
5 S    29  1460     1 TS   19 -  5883 poll_s ?        00:00:00 rpc.statd
1 S     0  1575     2 TS   19 -     0 scsi_e ?        00:00:00 scsi_eh_4
1 S     0  1576     2 TS   19 -     0 usb_st ?        00:00:00 usb-storage
5 S     0  1579   394 TS   19 -  7484 epoll_ ?        00:00:00 udevd
5 S     0  1580   394 TS   19 -  7484 epoll_ ?        00:00:00 udevd
0 S  1000  1606     1 TS   19 - 40926 poll_s ?        00:00:00 gvfsd-trash
0 S  1000  1611     1 TS   19 - 40321 poll_s ?        00:00:00 gvfsd-burn
5 S     0  1618     1 TS   19 - 24419 poll_s ?        00:00:00 sendmail
0 S  1000  1637     1 TS   19 - 38096 poll_s ?        00:00:00 gvfsd-metadata
1 S    51  1667     1 TS   19 - 20683 pause  ?        00:00:00 sendmail
0 S  1000  1944  1286 TS   19 - 186062 poll_s ?       00:00:01 gnome-terminal
0 S  1000  1950  1944 TS   19 -  2103 unix_s ?        00:00:00 gnome-pty-helpe
0 S  1000  1951  1944 TS   19 - 29075 wait   pts/0    00:00:00 bash
0 S  1000  2040  1286 TS   19 - 246527 poll_s ?       00:00:06 nautilus
1 S     0  2086     2 TS   19 -     0 worker ?        00:00:00 kworker/1:1
1 S     0  2115     2 TS   19 -     0 worker ?        00:00:00 kworker/0:1
1 S     0  2166     2 TS   19 -     0 worker ?        00:00:00 kworker/1:2
1 S     0  2206     2 TS   19 -     0 bdi_wr ?        00:00:00 flush-8:16
1 S     0  2254     2 TS   19 -     0 worker ?        00:00:00 kworker/0:2
1 S     0  2296     2 TS   19 -     0 worker ?        00:00:00 kworker/1:0
0 S  1000  2301     1 TS   19 - 223168 poll_s ?       00:00:02 gedit
0 S  1000  2365  1951 TS   19 - 480180 futex_ pts/0   00:00:00 java
0 S     0  2385   698 TS   19 - 26711 hrtime ?        00:00:00 sleep
0 R  1000  2387  2365 TS   19 - 28409 -      pts/0    00:00:00 ps
null

1.listprocess
2.InfoProcess
3.DisGlobal
4.change process Piority
5.exit

1.listprocess
2.InfoProcess
3.DisGlobal
4.change process Piority
5.exit

plase enter ur choice


5

sorry


1.listprocess
2.InfoProcess
3.DisGlobal
4.change process Piority
5.exit
[Akshay@Akshay ~]$ 

