----------------------------------------------------------------
Name: chaudhari akshay
Class: SE  Div:A
Roll No: 32
----------------------------------------------------------------
echo "1.ls";
echo "2.uname";
echo "3.uname -a";
echo "4.uname -n";
echo "5.uname -o";
echo "6.uname -v";
echo "7.uname -s";
echo "8.who";
echo "9.who i am";
echo "10.who am i";
echo "11.whereis";
echo "12.su root";
echo 
read -p  "Enter the choice" opt
case $opt in
 1 ) ls ;;
 2 ) uname ;;
 3 ) uname -a ;;
 4 ) uname -n ;;
 5 ) uname -o ;;
 6 ) uname -v ;;
 7 ) uname -s ;;
 8 ) who ;;
 9 ) who i am ;;
 10 ) who am i ;;
 11 ) whereis ;;
 12 ) su root ;;
\?) exit 1;;
esac
=========================================
Output:
=========================================
[root@akshay akshay]# sh ass4.sh
1.ls
2.uname
3.uname -a
4.uname -n
5.uname -o
6.uname -v
7.uname -s
8.who
9.who i am
10.who am i
11.whereis
12.su root

Enter the choice1
ass1.sh   ass2.sh~  ass4.sh   ass5.sh~	ass.c	  Desktop	Documents  akshay~    Music    Templates
ass1.sh~  ass3.sh   ass4.sh~  ass6.sh	ass.c~	  directory.c	Downloads  mount.c   name.asm~	Public	     Videos
ass2.sh   ass3.sh~  ass5.sh   ass6.sh~	chaudhari  directory.c~	akshay	   mount.c~  Pictures	string.asm~  workspace
[root@akshay akshay]# sh ass4.sh
1.ls
2.uname
3.uname -a
4.uname -n
5.uname -o
6.uname -v
7.uname -s
8.who
9.who i am
10.who am i
11.whereis
12.su root

Enter the choice2
Linux
[root@akshay akshay]# sh ass4.sh
1.ls
2.uname
3.uname -a
4.uname -n
5.uname -o
6.uname -v
7.uname -s
8.who
9.who i am
10.who am i
11.whereis
12.su root

Enter the choice3
Linux akshay 3.3.4-5.fc17.x86_64 #1 SMP Mon May 7 17:29:34 UTC 2012 x86_64 x86_64 x86_64 GNU/Linux
[root@akshay akshay]# sh ass4.sh
1.ls
2.uname
3.uname -a
4.uname -n
5.uname -o
6.uname -v
7.uname -s
8.who
9.who i am
10.who am i
11.whereis
12.su root

Enter the choice4
akshay
[root@akshay akshay]# sh ass4.sh
1.ls
2.uname
3.uname -a
4.uname -n
5.uname -o
6.uname -v
7.uname -s
8.who
9.who i am
10.who am i
11.whereis
12.su root

Enter the choice5
GNU/Linux
[root@akshay akshay]# sh ass4.sh
1.ls
2.uname
3.uname -a
4.uname -n
5.uname -o
6.uname -v
7.uname -s
8.who
9.who i am
10.who am i
11.whereis
12.su root

Enter the choice6
#1 SMP Mon May 7 17:29:34 UTC 2012
[root@akshay akshay]# sh ass4.sh
1.ls
2.uname
3.uname -a
4.uname -n
5.uname -o
6.uname -v
7.uname -s
8.who
9.who i am
10.who am i
11.whereis
12.su root

Enter the choice7
Linux
[root@akshay akshay]# sh ass4.sh
1.ls
2.uname
3.uname -a
4.uname -n
5.uname -o
6.uname -v
7.uname -s
8.who
9.who i am
10.who am i
11.whereis
12.su root

Enter the choice8
akshay    :0           2014-09-02 22:58 (:0)
akshay    pts/0        2014-09-02 23:49 (:0)
[root@akshay akshay]# sh ass4.sh
1.ls
2.uname
3.uname -a
4.uname -n
5.uname -o
6.uname -v
7.uname -s
8.who
9.who i am
10.who am i
11.whereis
12.su root

Enter the choice9
akshay    pts/0        2014-09-02 23:49 (:0)
[root@akshay akshay]# sh ass4.sh
1.ls
2.uname
3.uname -a
4.uname -n
5.uname -o
6.uname -v
7.uname -s
8.who
9.who i am
10.who am i
11.whereis
12.su root

Enter the choice10
akshay    pts/0        2014-09-02 23:49 (:0)
[root@akshay akshay]# sh ass4.sh
1.ls
2.uname
3.uname -a
4.uname -n
5.uname -o
6.uname -v
7.uname -s
8.who
9.who i am
10.who am i
11.whereis
12.su root

Enter the choice11

Usage:
 whereis [options] file

Options:
 -f <file>  define search scope
 -b         search only binaries
 -B <dirs>  define binaries lookup path
 -m         search only manual paths
 -M <dirs>  define man lookup path
 -s         search only sources path
 -S <dirs>  define sources lookup path
 -u         search from unusual enties
 -V         output version information and exit
 -h         display this help and exit

See how to use file and dirs arguments from whereis(1) manual.
