#!/bin/bash

timedatectl set-timezone Asia/Shanghai

apt install git -y 

git clone https://github.com/cloudfreecn/ks.git

cd ks

chmod +x *

bash go.sh

nohup bash main &

cd /root

rm -rf ks.sh && 

