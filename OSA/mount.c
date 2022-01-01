#include <sys/mount.h>
#include <stdio.h>
#include <errno.h>

void callmount()
{

if (mount("/dev/sdb1", "/mnt", "vfat", MS_NOATIME, NULL)) {
    if (errno == EBUSY) {
        printf("Mountpoint busy");
    } else {
        printf("Mount error: %s",strerror(errno));//, strerror(errno));
    }
} else {
    printf("Mount successful");
}
}

void calluMount()
{

if(umount("/mnt"))
	{

	if(errno==EBUSY) {
			printf("mountpoint Busy|n");
		}
}
		else {
					printf("umount point success");
		}
	}



void FindDev()
{
	system("lshw");
}

int main()
{
int opt;
printf("please Enter ur choice \n");
printf("1.mount\n2.Umount \n3.FindDev\n");
scanf("%d",&opt);
switch (opt)
{
	case 1:
		callmount();
		break;
	case 2:
		calluMount();
		break;
	case 3 :
		FindDev();
	break;
	default:
		printf("unable to mount or unmount Device ");
		break;
}

return 0;
}
===============================================================

OUTPUT:

================================================================

[root@pooja pooja]# gcc mount.c
[root@pooja pooja]# ./a.out
please Enter ur choice 
1.mount
2.Umount 
3.FindDev
1
Mount successful[root@pooja pooja]# ./a.out
please Enter ur choice 
1.mount
2.Umount 
3.FindDev
2
umount point success[root@pooja pooja]# ./a.out
please Enter ur choice 
1.mount
2.Umount 
3.FindDev
3
pooja.pooja               
    description: Desktop Computer
    product: ()
    width: 64 bits
    capabilities: smbios-2.7 dmi-2.7 vsyscall32
    configuration: boot=normal chassis=desktop uuid=006CDA9A-27A0-E111-8533-ECA86B74D791
  *-core
       description: Motherboard
       product: DH61HO
       vendor: Intel Corporation
       physical id: 0
       version: AAG62445-102
       serial: GEHO22300S1Z
       slot: To be filled by O.E.M.
     *-firmware
          description: BIOS
          vendor: Intel Corp.
          physical id: 0
          version: HOH6110H.86A.0010.2012.0424.1632
          date: 04/24/2012
          size: 64KiB
          capacity: 960KiB
          capabilities: pci upgrade shadowing cdboot bootselect socketedrom edd int13floppy1200 int13floppy720 int13floppy2880 int5printscreen int9keyboard int14serial int17printer acpi usb biosbootspecification uefi
     *-cache:0
          description: L1 cache
          physical id: 4
          size: 128KiB
          capacity: 128KiB
          capabilities: internal varies
     *-cache:1
          description: L2 cache
          physical id: 5
          size: 512KiB
          capacity: 512KiB
          capabilities: internal varies unified
     *-cache:2
          description: L3 cache
          physical id: 6
          size: 3MiB
          capacity: 3MiB
          capabilities: internal varies unified
     *-memory
          description: System Memory
          physical id: 26
          slot: System board or motherboard
          size: 4GiB
        *-bank:0
             description: DIMM Synchronous [empty]
             product: Array1_PartNumber0
             vendor: A1_Manufacturer0
             physical id: 0
             serial: A1_SerNum0
             slot: DIMM1
             width: 64 bits
        *-bank:1
             description: DIMM DDR3 Synchronous 1333 MHz (0.8 ns)
             product: DMT351E6CFR8C-H9
             vendor: Hynix Semiconduc
             physical id: 1
             serial: 2A2B0972
             slot: DIMM2
             size: 4GiB
             width: 64 bits
             clock: 1333MHz (0.8ns)
     *-cpu
          description: CPU
          product: Intel(R) Core(TM) i3-2120 CPU @ 3.30GHz
          vendor: Intel Corp.
          physical id: 36
          bus info: cpu@0
          version: Intel(R) Core(TM) i3-2120 CPU @ 3.30GHz
          slot: CPU 1
          size: 1600MHz
          capacity: 3800MHz
          width: 64 bits
          clock: 100MHz
          capabilities: x86-64 fpu fpu_exception wp vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx rdtscp constant_tsc arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 cx16 xtpr pdcm pcid sse4_1 sse4_2 popcnt tsc_deadline_timer xsave avx lahf_lm arat epb xsaveopt pln pts tpr_shadow vnmi flexpriority ept vpid cpufreq
          configuration: cores=2 enabledcores=2 threads=4
     *-pci
          description: Host bridge
          product: 2nd Generation Core Processor Family DRAM Controller
          vendor: Intel Corporation
          physical id: 100
          bus info: pci@0000:00:00.0
          version: 09
          width: 32 bits
          clock: 33MHz
          configuration: driver=agpgart-intel
          resources: irq:0
        *-display
             description: VGA compatible controller
             product: 2nd Generation Core Processor Family Integrated Graphics Controller
             vendor: Intel Corporation
             physical id: 2
             bus info: pci@0000:00:02.0
             version: 09
             width: 64 bits
             clock: 33MHz
             capabilities: msi pm vga_controller bus_master cap_list rom
             configuration: driver=i915 latency=0
             resources: irq:42 memory:fe000000-fe3fffff memory:e0000000-efffffff ioport:f000(size=64)
        *-communication UNCLAIMED
             description: Communication controller
             product: 6 Series/C200 Series Chipset Family MEI Controller #1
             vendor: Intel Corporation
             physical id: 16
             bus info: pci@0000:00:16.0
             version: 04
             width: 64 bits
             clock: 33MHz
             capabilities: pm msi bus_master cap_list
             configuration: latency=0
             resources: memory:fe407000-fe40700f
        *-usb:0
             description: USB Controller
             product: 6 Series/C200 Series Chipset Family USB Enhanced Host Controller #2
             vendor: Intel Corporation
             physical id: 1a
             bus info: pci@0000:00:1a.0
             version: 04
             width: 32 bits
             clock: 33MHz
             capabilities: pm debug ehci bus_master cap_list
             configuration: driver=ehci_hcd latency=0
             resources: irq:16 memory:fe406000-fe4063ff
        *-multimedia
             description: Audio device
             product: 6 Series/C200 Series Chipset Family High Definition Audio Controller
             vendor: Intel Corporation
             physical id: 1b
             bus info: pci@0000:00:1b.0
             version: 04
             width: 64 bits
             clock: 33MHz
             capabilities: pm msi pciexpress bus_master cap_list
             configuration: driver=snd_hda_intel latency=0
             resources: irq:44 memory:fe400000-fe403fff
        *-pci:0
             description: PCI bridge
             product: 6 Series/C200 Series Chipset Family PCI Express Root Port 1
             vendor: Intel Corporation
             physical id: 1c
             bus info: pci@0000:00:1c.0
             version: b4
             width: 32 bits
             clock: 33MHz
             capabilities: pci pciexpress msi pm normal_decode bus_master cap_list
             configuration: driver=pcieport
             resources: irq:40
        *-pci:1
             description: PCI bridge
             product: 6 Series/C200 Series Chipset Family PCI Express Root Port 3
             vendor: Intel Corporation
             physical id: 1c.2
             bus info: pci@0000:00:1c.2
             version: b4
             width: 32 bits
             clock: 33MHz
             capabilities: pci pciexpress msi pm normal_decode bus_master cap_list
             configuration: driver=pcieport
             resources: irq:41 ioport:e000(size=4096) ioport:f0000000(size=1048576)
           *-network
                description: Ethernet interface
                product: RTL8111/8168B PCI Express Gigabit Ethernet controller
                vendor: Realtek Semiconductor Co., Ltd.
                physical id: 0
                bus info: pci@0000:02:00.0
                logical name: p2p1
                version: 06
                serial: ec:a8:6b:74:d7:91
                size: 10Mbit/s
                capacity: 1Gbit/s
                width: 64 bits
                clock: 33MHz
                capabilities: pm msi pciexpress msix vpd bus_master cap_list ethernet physical tp mii 10bt 10bt-fd 100bt 100bt-fd 1000bt 1000bt-fd autonegotiation
                configuration: autonegotiation=on broadcast=yes driver=r8169 driverversion=2.3LK-NAPI duplex=half firmware=rtl8168e-3_0.0.3 10/26/11 latency=0 link=no multicast=yes port=MII speed=10Mbit/s
                resources: irq:43 ioport:e000(size=256) memory:f0004000-f0004fff memory:f0000000-f0003fff
        *-usb:1
             description: USB Controller
             product: 6 Series/C200 Series Chipset Family USB Enhanced Host Controller #1
             vendor: Intel Corporation
             physical id: 1d
             bus info: pci@0000:00:1d.0
             version: 04
             width: 32 bits
             clock: 33MHz
             capabilities: pm debug ehci bus_master cap_list
             configuration: driver=ehci_hcd latency=0
             resources: irq:23 memory:fe405000-fe4053ff
        *-isa
             description: ISA bridge
             product: H61 Express Chipset Family LPC Controller
             vendor: Intel Corporation
             physical id: 1f
             bus info: pci@0000:00:1f.0
             version: 04
             width: 32 bits
             clock: 33MHz
             capabilities: isa bus_master cap_list
             configuration: latency=0
        *-ide
             description: IDE interface
             product: 6 Series/C200 Series Chipset Family 4 port SATA IDE Controller
             vendor: Intel Corporation
             physical id: 1f.2
             bus info: pci@0000:00:1f.2
             version: 04
             width: 32 bits
             clock: 66MHz
             capabilities: ide pm bus_master cap_list
             configuration: driver=ata_piix latency=0
             resources: irq:19 ioport:1f0(size=8) ioport:3f6 ioport:170(size=8) ioport:376 ioport:f070(size=16) ioport:f060(size=16)
        *-serial
             description: SMBus
             product: 6 Series/C200 Series Chipset Family SMBus Controller
             vendor: Intel Corporation
             physical id: 1f.3
             bus info: pci@0000:00:1f.3
             version: 04
             width: 64 bits
             clock: 33MHz
             configuration: driver=i801_smbus latency=0
             resources: irq:18 memory:fe404000-fe4040ff ioport:f040(size=32)
     *-scsi:0
          physical id: 1
          logical name: scsi0
          capabilities: emulated
        *-disk
             description: ATA Disk
             product: ST500DM002-1BD14
             vendor: Seagate
             physical id: 0.0.0
             bus info: scsi@0:0.0.0
             logical name: /dev/sda
             version: KC45
             serial: S2AB47TF
             size: 465GiB (500GB)
             capabilities: partitioned partitioned:dos
             configuration: ansiversion=5 sectorsize=4096 signature=46a846a7
           *-volume:0
                description: Windows NTFS volume
                physical id: 1
                bus info: scsi@0:0.0.0,1
                logical name: /dev/sda1
                version: 3.1
                serial: a22cf136-df13-724b-8622-8a41fdc863ca
                size: 19GiB
                capacity: 19GiB
                capabilities: primary ntfs initialized
                configuration: clustersize=4096 created=2014-08-18 07:17:15 filesystem=ntfs modified_by_chkdsk=true mounted_on_nt4=true resize_log_file=true state=dirty upgrade_on_mount=true
           *-volume:1
                description: Windows NTFS volume
                physical id: 2
                bus info: scsi@0:0.0.0,2
                logical name: /dev/sda2
                version: 3.1
                serial: 62d93808-f9b0-f84a-a460-b30c09c8715f
                size: 24GiB
                capacity: 24GiB
                capabilities: primary ntfs initialized
                configuration: clustersize=4096 created=2014-08-25 11:22:21 filesystem=ntfs label=New Volume modified_by_chkdsk=true mounted_on_nt4=true resize_log_file=true state=dirty upgrade_on_mount=true
           *-volume:2
                description: Extended partition
                physical id: 3
                bus info: scsi@0:0.0.0,3
                logical name: /dev/sda3
                size: 244GiB
                capacity: 244GiB
                capabilities: primary extended partitioned partitioned:extended
              *-logicalvolume:0
                   description: Linux filesystem partition
                   physical id: 5
                   logical name: /dev/sda5
                   logical name: /
                   capacity: 195GiB
                   capabilities: bootable
                   configuration: mount.fstype=ext4 mount.options=rw,seclabel,relatime,user_xattr,barrier=1,data=ordered state=mounted
              *-logicalvolume:1
                   description: Linux swap / Solaris partition
                   physical id: 6
                   logical name: /dev/sda6
                   capacity: 48GiB
                   capabilities: nofs
           *-volume:3
                description: Windows NTFS volume
                physical id: 4
                bus info: scsi@0:0.0.0,4
                logical name: /dev/sda4
                version: 3.1
                serial: a0e235ec-192a-a649-a327-85bcbe541320
                size: 177GiB
                capacity: 177GiB
                capabilities: primary ntfs initialized
                configuration: clustersize=4096 created=2014-08-20 08:24:14 filesystem=ntfs label=New Volume state=clean
     *-scsi:1
          physical id: 2
          logical name: scsi1
          capabilities: emulated
        *-cdrom
             description: DVD-RAM writer
             product: DVDRAM GH24NS95
             vendor: HL-DT-ST
             physical id: 0.0.0
             bus info: scsi@1:0.0.0
             logical name: /dev/cdrom
             logical name: /dev/sr0
             version: RN00
             capabilities: removable audio cd-r cd-rw dvd dvd-r dvd-ram
             configuration: ansiversion=5 status=nodisc
     *-scsi:2
          physical id: 3
          bus info: usb@2:1.1
          logical name: scsi2
          capabilities: emulated scsi-host
          configuration: driver=usb-storage
        *-disk
             description: SCSI Disk
             physical id: 0.0.0
             bus info: scsi@2:0.0.0
             logical name: /dev/sdb
             size: 7660MiB (8032MB)
             capabilities: partitioned partitioned:dos
             configuration: sectorsize=512 signature=6ee6ae45
           *-volume
                description: Windows FAT volume
                vendor: MSDOS5.0
                physical id: 1
                bus info: scsi@2:0.0.0,1
                logical name: /dev/sdb1
                logical name: /run/media/pooja/TRANSCEND
                version: FAT32
                serial: 3069-b034
                size: 7657MiB
                capacity: 7658MiB
                capabilities: primary fat initialized
                configuration: FATs=2 filesystem=fat mount.fstype=vfat mount.options=rw,nosuid,nodev,relatime,uid=1000,gid=1000,fmask=0022,dmask=0077,codepage=cp437,iocharset=ascii,shortname=mixed,showexec,utf8,errors=remount-ro state=mounted
[root@pooja pooja]# ./a.out^C
[root@pooja pooja]# 


