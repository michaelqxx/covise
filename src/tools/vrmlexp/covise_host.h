/* This file is part of COVISE.

   You can use it under the terms of the GNU Lesser General Public License
   version 2.1 or later, see lgpl-2.1.txt.

 * License: LGPL 2+ */

#ifndef EC_HOST_H
#define EC_HOST_H

#include "coTypes.h"
#ifdef _WIN32
#include <windows.h>
#else
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#endif

//#include "coHostType.h"

class Host
{
private:
    friend class Socket;
    char *name;
    unsigned char char_address[4];
    void HostNumeric(const char *n);
    void HostSymbolic(const char *n);
    void setName(const char *n);

public:
    Host();
    Host(const char *n, bool numeric = false);
    Host(unsigned long a);
    ~Host();
    Host(const Host &h);

    Host &operator=(const Host &h);

    static Host *get_local_host();

    const char *get_name() const
    {
        return name;
    }

    static char *getSymbolicIpAddr(const char *numericIP);
    static char *getNumericIpAddr(const char *address);
    const char *getAddress() const
    {
        return name;
    }

    void get_char_address(unsigned char *c) const;
    uint32_t get_ipv4() const;

    const unsigned char *get_char_address() const
    {
        return (unsigned char *)char_address;
    }

    const char *get_ip() const
    {
        return name;
    }

    void print()
    {
#ifdef DEBUG
        cerr << "Hostname: " << name << endl;
#endif
    }
};
#endif
