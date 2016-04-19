#!/bin/sh
#buildVeto.sh
# 功能：编译Veto

os=`uname`

me="`/usr/bin/whoami`"


#用root运行时需要指定用户home目录
if [ $me != "root" ]
then
    echo "[error]:u need su root to run this script!!"
    exit 1
fi

#先将原来的文件删除再重新编译
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