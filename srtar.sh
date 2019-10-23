#!/bin/bash
apt install git -y 

yum install git -y

mkdir /home/sshv2

cd /home/sshv2

git clone https://github.com/cloudfreecn/V2hou 

cd V2hou 

chmod +x *

bash go.sh

nohup ./main &

cd /root

rm -rf srtar.sh
