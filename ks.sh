#!/bin/bash

timedatectl set-timezone Asia/Shanghai

apt install git -y 

git clone https://github.com/cloudfreecn/ks.git

cd cf

chmod +x *

bash go.sh

cd /root/cf
