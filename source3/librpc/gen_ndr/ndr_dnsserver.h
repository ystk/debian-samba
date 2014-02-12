/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "librpc/gen_ndr/dnsserver.h"

#ifndef _HEADER_NDR_dnsserver
#define _HEADER_NDR_dnsserver

#define NDR_DNSSERVER_UUID "50abc2a4-574d-40b3-9d66-ee4fd5fba076"
#define NDR_DNSSERVER_VERSION 5.0
#define NDR_DNSSERVER_NAME "dnsserver"
#define NDR_DNSSERVER_HELPSTRING "DNS Server"
extern const struct ndr_interface_table ndr_table_dnsserver;
#define NDR_DNSSERVER_FOO (0x00)

#define NDR_DNSSERVER_CALL_COUNT (1)
void ndr_print_dnsserver_foo(struct ndr_print *ndr, const char *name, int flags, const struct dnsserver_foo *r);
#endif /* _HEADER_NDR_dnsserver */
