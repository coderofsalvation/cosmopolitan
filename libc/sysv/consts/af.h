#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_AF_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_AF_H_
#include "libc/runtime/symbolic.h"
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const long AF_ALG;
extern const long AF_APPLETALK;
extern const long AF_ASH;
extern const long AF_ATMPVC;
extern const long AF_ATMSVC;
extern const long AF_AX25;
extern const long AF_BLUETOOTH;
extern const long AF_BRIDGE;
extern const long AF_CAIF;
extern const long AF_CAN;
extern const long AF_ECONET;
extern const long AF_FILE;
extern const long AF_IB;
extern const long AF_IEEE802154;
extern const long AF_INET6;
extern const long AF_INET;
extern const long AF_IPX;
extern const long AF_IRDA;
extern const long AF_ISDN;
extern const long AF_IUCV;
extern const long AF_KCM;
extern const long AF_KEY;
extern const long AF_LLC;
extern const long AF_LOCAL;
extern const long AF_MAX;
extern const long AF_MPLS;
extern const long AF_NETBEUI;
extern const long AF_NETLINK;
extern const long AF_NETROM;
extern const long AF_NFC;
extern const long AF_PACKET;
extern const long AF_PHONET;
extern const long AF_PPPOX;
extern const long AF_RDS;
extern const long AF_ROSE;
extern const long AF_ROUTE;
extern const long AF_RXRPC;
extern const long AF_SECURITY;
extern const long AF_SNA;
extern const long AF_TIPC;
extern const long AF_UNIX;
extern const long AF_UNSPEC;
extern const long AF_VSOCK;
extern const long AF_WANPIPE;
extern const long AF_X25;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */

#define AF_ALG SYMBOLIC(AF_ALG)
#define AF_APPLETALK SYMBOLIC(AF_APPLETALK)
#define AF_ASH SYMBOLIC(AF_ASH)
#define AF_ATMPVC SYMBOLIC(AF_ATMPVC)
#define AF_ATMSVC SYMBOLIC(AF_ATMSVC)
#define AF_AX25 SYMBOLIC(AF_AX25)
#define AF_BLUETOOTH SYMBOLIC(AF_BLUETOOTH)
#define AF_BRIDGE SYMBOLIC(AF_BRIDGE)
#define AF_CAIF SYMBOLIC(AF_CAIF)
#define AF_CAN SYMBOLIC(AF_CAN)
#define AF_ECONET SYMBOLIC(AF_ECONET)
#define AF_FILE SYMBOLIC(AF_FILE)
#define AF_IB SYMBOLIC(AF_IB)
#define AF_IEEE802154 SYMBOLIC(AF_IEEE802154)
#define AF_INET LITERALLY(2)
#define AF_INET6 SYMBOLIC(AF_INET6)
#define AF_IPX SYMBOLIC(AF_IPX)
#define AF_IRDA SYMBOLIC(AF_IRDA)
#define AF_ISDN SYMBOLIC(AF_ISDN)
#define AF_IUCV SYMBOLIC(AF_IUCV)
#define AF_KCM SYMBOLIC(AF_KCM)
#define AF_KEY SYMBOLIC(AF_KEY)
#define AF_LLC SYMBOLIC(AF_LLC)
#define AF_LOCAL SYMBOLIC(AF_LOCAL)
#define AF_MAX SYMBOLIC(AF_MAX)
#define AF_MPLS SYMBOLIC(AF_MPLS)
#define AF_NETBEUI SYMBOLIC(AF_NETBEUI)
#define AF_NETLINK SYMBOLIC(AF_NETLINK)
#define AF_NETROM SYMBOLIC(AF_NETROM)
#define AF_NFC SYMBOLIC(AF_NFC)
#define AF_PACKET SYMBOLIC(AF_PACKET)
#define AF_PHONET SYMBOLIC(AF_PHONET)
#define AF_PPPOX SYMBOLIC(AF_PPPOX)
#define AF_RDS SYMBOLIC(AF_RDS)
#define AF_ROSE SYMBOLIC(AF_ROSE)
#define AF_ROUTE SYMBOLIC(AF_ROUTE)
#define AF_RXRPC SYMBOLIC(AF_RXRPC)
#define AF_SECURITY SYMBOLIC(AF_SECURITY)
#define AF_SNA SYMBOLIC(AF_SNA)
#define AF_TIPC SYMBOLIC(AF_TIPC)
#define AF_UNIX LITERALLY(1)
#define AF_UNSPEC LITERALLY(0)
#define AF_VSOCK SYMBOLIC(AF_VSOCK)
#define AF_WANPIPE SYMBOLIC(AF_WANPIPE)
#define AF_X25 SYMBOLIC(AF_X25)

#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_AF_H_ */
