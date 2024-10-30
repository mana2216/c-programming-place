FROM gcc:14.2.0

RUN apt-get update && \
    apt-get install -y locales git procps gdb make binutils libc6-dev
RUN locale-gen ja_JP.UTF-8
RUN localedef -f UTF-8 -i ja_JP ja_JP
ENV LANG=ja_JP.UTF-8
ENV TZ=Asia/Tokyo
WORKDIR /c-programming-place