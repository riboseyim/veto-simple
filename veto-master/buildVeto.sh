#!/bin/sh
#buildVeto.sh
# ���ܣ�����Veto

os=`uname`

me="`/usr/bin/whoami`"


#��root����ʱ��Ҫָ���û�homeĿ¼
if [ $me != "root" ]
then
    echo "[error]:u need su root to run this script!!"
    exit 1
fi

#�Ƚ�ԭ�����ļ�ɾ�������±���
make -f Makefile clean

if [ $os = "Linux" ]
then
	echo it seem to be a linux
	make -f Makefile.linux
elif [ $os = "SunOS" ]
then
	echo it seems to be a solaris
	make -f Makefile
else
	echo it seems to be a other :$os
	make -f Makefile
fi

echo Veto build finished!