FROM gcr.io/oss-fuzz-base/base-builder

RUN apt-get update && apt-get install -y make autoconf automake libtool
RUN git clone https://github.com/ezik117/test01.git
COPY build.sh $SRC/build.sh
WORKDIR $SRC/test01