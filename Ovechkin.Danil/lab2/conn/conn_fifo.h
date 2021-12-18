#ifndef LAB2_CONN_FIFO_H
#define LAB2_CONN_FIFO_H

#include "conn.h"

class ConnFifo : public Conn {

public:
    bool open(size_t hostPid, bool isCreator) override;

    bool read(void* buf, size_t count) override;

    bool write(void* buf, size_t count) override;

    bool close() override;

private:

    bool _isCreator;

    std::string _hostName;

    int fd;

    void* shm;
};

#endif //LAB2_CONN_FIFO_H