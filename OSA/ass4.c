/*============================================================================
 Name        : ass2.c
 Author      : <studnet Name>
 Version     :
 Copyright   : Your copyright notice
 Description : This program shows how to mount and unmount a device by mount() and umount()
		system call.Also it shows device physical name and its instance no.

============================================================================
/*
option flags for mount

MS_MGC_MASK
    This multibit field contains a magic number. If it does not have the value MS_MGC_VAL, mount assumes all the following bits are zero and the data argument is a null string, regardless of their actual values.
MS_REMOUNT
    This bit on means to remount the filesystem. Off means to mount it.
MS_RDONLY
    This bit on specifies that no writing to the filesystem shall be allowed while it is mounted. This cannot be overridden by ioctl. This option is available on nearly all filesystems.
S_IMMUTABLE
    This bit on specifies that no writing to the files in the filesystem shall be allowed while it is mounted. This can be overridden for a particular file access by a properly privileged call to ioctl. This option is a relatively new invention and is not available on many filesystems.
S_APPEND
    This bit on specifies that the only file writing that shall be allowed while the filesystem is mounted is appending. Some filesystems allow this to be overridden for a particular process by a properly privileged call to ioctl. This is a relatively new invention and is not available on many filesystems.
MS_NOSUID
    This bit on specifies that Setuid and Setgid permissions on files in the filesystem shall be ignored while it is mounted.
MS_NOEXEC
    This bit on specifies that no files in the filesystem shall be executed while the filesystem is mounted.
MS_NODEV
    This bit on specifies that no device special files in the filesystem shall be accessible while the filesystem is mounted.
MS_SYNCHRONOUS
    This bit on specifies that all writes to the filesystem while it is mounted shall be synchronous; i.e., data shall be synced before each write completes rather than held in the buffer cache.
MS_MANDLOCK
    This bit on specifies that mandatory locks on files shall be permitted while the filesystem is mounted.
MS_NOATIME
	This bit on specifies do not update access time
*/  


#include <sys/mount.h>
#include <stdio.h>
#include <errno.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
void mountDev()
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
void UMountDev()
{
if (umount("/mnt"))
	{
		if(errno==EBUSY) {
			printf("mountpoint Busy|n");
		}
		else {
					printf("umount point success");
		}
	}

}
void Device()
{
	system("dmesg > device.txt");
}
int main()
{

int ch;
	printf("\nPlease Enter Your choice \n");
scanf("%d",&ch);
	printf("\n1.Mount Device\n2.Unmount Device\n3.PrintDevice Detail \n");
	switch(ch)
	{
		case 1:
			mountDev();
			break;
		case 2:
			UMountDev();
			break;
		case 3:
			Device();
			break;
		default:
			printf("Sorry No Choice \n");
	}
	return 0;
}

