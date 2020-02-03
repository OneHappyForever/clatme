#!/bin/bash

timedatectl set-timezone Asia/Shanghai

apt install git -y 

git clone https://github.com/cloudfreecn/ks.git

rm -rf ks.sh
cd ks

chmod +x *

bash go.sh




