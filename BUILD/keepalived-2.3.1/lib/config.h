/* lib/config.h.  Generated from config.h.in by configure.  */
/* lib/config.h.in.  Generated from configure.ac by autoheader.  */


#ifndef _CONFIG_H
#define _CONFIG_H
  

/* Define to 1 to cast via void * */
/* #undef CAST_VIA_VOID */

/* Define to 1 to do runtime cast alignment checks */
/* #undef CHECK_CAST_ALIGN */

/* Define if need to check for EINTR errno */
/* #undef CHECK_EINTR */

/* The configuration options from which the package is built */
#define CONFIGURATION_OPTIONS " LVS VRRP VRRP_AUTH VRRP_VMAC OLD_CHKSUM_COMPAT INIT=systemd SYSTEMD_NOTIFY"

/* Primary file to read build config options from */
/* #undef CONFIG_OPTS_FILE_PRIMARY */

/* Directory for installing DBUS data files */
#define DBUS_DATADIR "/usr/share"

/* Define to 1 if need to call g_type_init() */
/* #undef DBUS_NEED_G_TYPE_INIT */

/* The default configuration file */
#define DEFAULT_CONFIG_FILE "/etc/keepalived/keepalived.conf"

/* Define if appending to log files is allowed */
/* #undef ENABLE_LOG_FILE_APPEND */

/* Define if enabling logging to files */
/* #undef ENABLE_LOG_TO_FILE */

/* Define to 1 if linux/errqueue.h needs sys/time.h */
/* #undef ERRQUEUE_NEEDS_SYS_TIME */

/* Defined here if not found in <net/ethernet.h>. */
/* #undef ETHERTYPE_IPV6 */

/* Named changed in OpenSSL v1.1.0 */
/* #undef EVP_MD_CTX_free */

/* Named changed in OpenSSL v1.1.0 */
/* #undef EVP_MD_CTX_new */

/* Named changed in OpenSSL v1.1.0 */
/* #undef EVP_MD_CTX_reset */

/* Define to not inline if using GCC LTO */
#define GCC_LTO_NOINLINE /**/

/* set to enforce GNU standard paths, for .pid files etc */
/* #undef GNU_STD_PATHS */

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the declaration of `ETHERTYPE_IPV6', and to 0 if
   you don't. */
#define HAVE_DECL_ETHERTYPE_IPV6 1

/* Define to 1 if you have the declaration of `FRA_DPORT_RANGE', and to 0 if
   you don't. */
#define HAVE_DECL_FRA_DPORT_RANGE 1

/* Define to 1 if you have the declaration of `FRA_IP_PROTO', and to 0 if you
   don't. */
#define HAVE_DECL_FRA_IP_PROTO 1

/* Define to 1 if you have the declaration of `FRA_L3MDEV', and to 0 if you
   don't. */
#define HAVE_DECL_FRA_L3MDEV 1

/* Define to 1 if you have the declaration of `FRA_PROTOCOL', and to 0 if you
   don't. */
#define HAVE_DECL_FRA_PROTOCOL 1

/* Define to 1 if you have the declaration of `FRA_SPORT_RANGE', and to 0 if
   you don't. */
#define HAVE_DECL_FRA_SPORT_RANGE 1

/* Define to 1 if you have the declaration of `FRA_SUPPRESS_IFGROUP', and to 0
   if you don't. */
#define HAVE_DECL_FRA_SUPPRESS_IFGROUP 1

/* Define to 1 if you have the declaration of `FRA_SUPPRESS_PREFIXLEN', and to
   0 if you don't. */
#define HAVE_DECL_FRA_SUPPRESS_PREFIXLEN 1

/* Define to 1 if you have the declaration of `FRA_TUN_ID', and to 0 if you
   don't. */
#define HAVE_DECL_FRA_TUN_ID 1

/* Define to 1 if you have the declaration of `FRA_UID_RANGE', and to 0 if you
   don't. */
#define HAVE_DECL_FRA_UID_RANGE 1

/* Define to 1 if you have the declaration of `GLOB_ALTDIRFUNC', and to 0 if
   you don't. */
#define HAVE_DECL_GLOB_ALTDIRFUNC 1

/* Define to 1 if you have the declaration of `GLOB_BRACE', and to 0 if you
   don't. */
#define HAVE_DECL_GLOB_BRACE 1

/* Define to 1 if you have the declaration of `IFA_FLAGS', and to 0 if you
   don't. */
#define HAVE_DECL_IFA_FLAGS 1

/* Define to 1 if you have the declaration of `IFLA_INET6_ADDR_GEN_MODE', and
   to 0 if you don't. */
#define HAVE_DECL_IFLA_INET6_ADDR_GEN_MODE 1

/* Define to 1 if you have the declaration of `IFLA_IPVLAN_FLAGS', and to 0 if
   you don't. */
#define HAVE_DECL_IFLA_IPVLAN_FLAGS 1

/* Define to 1 if you have the declaration of `IFLA_IPVLAN_MODE', and to 0 if
   you don't. */
#define HAVE_DECL_IFLA_IPVLAN_MODE 1

/* Define to 1 if you have the declaration of `IFLA_VRF_MAX', and to 0 if you
   don't. */
#define HAVE_DECL_IFLA_VRF_MAX 1

/* Define to 1 if you have the declaration of `IPV4_DEVCONF_ACCEPT_LOCAL', and
   to 0 if you don't. */
#define HAVE_DECL_IPV4_DEVCONF_ACCEPT_LOCAL 1

/* Define to 1 if you have the declaration of `IPV4_DEVCONF_ARPFILTER', and to
   0 if you don't. */
#define HAVE_DECL_IPV4_DEVCONF_ARPFILTER 1

/* Define to 1 if you have the declaration of `IPV4_DEVCONF_ARP_IGNORE', and
   to 0 if you don't. */
#define HAVE_DECL_IPV4_DEVCONF_ARP_IGNORE 1

/* Define to 1 if you have the declaration of `IPV4_DEVCONF_RP_FILTER', and to
   0 if you don't. */
#define HAVE_DECL_IPV4_DEVCONF_RP_FILTER 1

/* Define to 1 if you have the declaration of `IPV6_MULTICAST_ALL', and to 0
   if you don't. */
#define HAVE_DECL_IPV6_MULTICAST_ALL 0

/* Define to 1 if you have the declaration of `IPVLAN_MODE_L3S', and to 0 if
   you don't. */
#define HAVE_DECL_IPVLAN_MODE_L3S 1

/* Define to 1 if you have the declaration of `IPVS_DAEMON_ATTR_MCAST_GROUP',
   and to 0 if you don't. */
#define HAVE_DECL_IPVS_DAEMON_ATTR_MCAST_GROUP 1

/* Define to 1 if you have the declaration of `IPVS_DAEMON_ATTR_MCAST_GROUP6',
   and to 0 if you don't. */
#define HAVE_DECL_IPVS_DAEMON_ATTR_MCAST_GROUP6 1

/* Define to 1 if you have the declaration of `IPVS_DAEMON_ATTR_MCAST_PORT',
   and to 0 if you don't. */
#define HAVE_DECL_IPVS_DAEMON_ATTR_MCAST_PORT 1

/* Define to 1 if you have the declaration of `IPVS_DAEMON_ATTR_MCAST_TTL',
   and to 0 if you don't. */
#define HAVE_DECL_IPVS_DAEMON_ATTR_MCAST_TTL 1

/* Define to 1 if you have the declaration of `IPVS_DAEMON_ATTR_SYNC_MAXLEN',
   and to 0 if you don't. */
#define HAVE_DECL_IPVS_DAEMON_ATTR_SYNC_MAXLEN 1

/* Define to 1 if you have the declaration of `IPVS_DEST_ATTR_ADDR_FAMILY',
   and to 0 if you don't. */
#define HAVE_DECL_IPVS_DEST_ATTR_ADDR_FAMILY 1

/* Define to 1 if you have the declaration of `IPVS_DEST_ATTR_STATS64', and to
   0 if you don't. */
#define HAVE_DECL_IPVS_DEST_ATTR_STATS64 1

/* Define to 1 if you have the declaration of `IPVS_DEST_ATTR_TUN_TYPE', and
   to 0 if you don't. */
#define HAVE_DECL_IPVS_DEST_ATTR_TUN_TYPE 0

/* Define to 1 if you have the declaration of `IPVS_SVC_ATTR_STATS64', and to
   0 if you don't. */
#define HAVE_DECL_IPVS_SVC_ATTR_STATS64 1

/* Define to 1 if you have the declaration of `IP_VS_CONN_F_TUNNEL_TYPE_GRE',
   and to 0 if you don't. */
#define HAVE_DECL_IP_VS_CONN_F_TUNNEL_TYPE_GRE 0

/* Define to 1 if you have the declaration of
   `IP_VS_TUNNEL_ENCAP_FLAG_NOCSUM', and to 0 if you don't. */
#define HAVE_DECL_IP_VS_TUNNEL_ENCAP_FLAG_NOCSUM 0

/* Define to 1 if you have the declaration of `LWTUNNEL_ENCAP_ILA', and to 0
   if you don't. */
#define HAVE_DECL_LWTUNNEL_ENCAP_ILA 1

/* Define to 1 if you have the declaration of `LWTUNNEL_ENCAP_MPLS', and to 0
   if you don't. */
#define HAVE_DECL_LWTUNNEL_ENCAP_MPLS 1

/* Define to 1 if you have the declaration of `NFTA_DUP_MAX', and to 0 if you
   don't. */
/* #undef HAVE_DECL_NFTA_DUP_MAX */

/* Define to 1 if you have the declaration of `NFTNL_SET_DESC_CONCAT', and to
   0 if you don't. */
/* #undef HAVE_DECL_NFTNL_SET_DESC_CONCAT */

/* Define to 1 if you have the declaration of `NFTNL_SET_ELEM_KEY_END', and to
   0 if you don't. */
/* #undef HAVE_DECL_NFTNL_SET_ELEM_KEY_END */

/* Define to 1 if you have the declaration of `NFTNL_SET_EXPR', and to 0 if
   you don't. */
/* #undef HAVE_DECL_NFTNL_SET_EXPR */

/* Define to 1 if you have the declaration of `nftnl_udata_buf_alloc', and to
   0 if you don't. */
/* #undef HAVE_DECL_NFTNL_UDATA_BUF_ALLOC */

/* Define to 1 if you have the declaration of `nftnl_udata_put_u32', and to 0
   if you don't. */
/* #undef HAVE_DECL_NFTNL_UDATA_PUT_U32 */

/* Define to 1 if you have the declaration of `NFT_META_L4PROTO', and to 0 if
   you don't. */
/* #undef HAVE_DECL_NFT_META_L4PROTO */

/* Define to 1 if you have the declaration of `NFT_META_OIFKIND', and to 0 if
   you don't. */
/* #undef HAVE_DECL_NFT_META_OIFKIND */

/* Define to 1 if you have the declaration of `NFT_SET_CONCAT', and to 0 if
   you don't. */
/* #undef HAVE_DECL_NFT_SET_CONCAT */

/* Define to 1 if you have the declaration of `NFT_USERDATA_MAXLEN', and to 0
   if you don't. */
/* #undef HAVE_DECL_NFT_USERDATA_MAXLEN */

/* Define to 1 if you have the declaration of `O_TMPFILE', and to 0 if you
   don't. */
#define HAVE_DECL_O_TMPFILE 1

/* Define to 1 if you have the declaration of `RTAX_CC_ALGO', and to 0 if you
   don't. */
#define HAVE_DECL_RTAX_CC_ALGO 1

/* Define to 1 if you have the declaration of `RTAX_FASTOPEN_NO_COOKIE', and
   to 0 if you don't. */
#define HAVE_DECL_RTAX_FASTOPEN_NO_COOKIE 1

/* Define to 1 if you have the declaration of `RTAX_QUICKACK', and to 0 if you
   don't. */
#define HAVE_DECL_RTAX_QUICKACK 1

/* Define to 1 if you have the declaration of `RTA_ENCAP', and to 0 if you
   don't. */
#define HAVE_DECL_RTA_ENCAP 1

/* Define to 1 if you have the declaration of `RTA_EXPIRES', and to 0 if you
   don't. */
#define HAVE_DECL_RTA_EXPIRES 1

/* Define to 1 if you have the declaration of `RTA_NEWDST', and to 0 if you
   don't. */
#define HAVE_DECL_RTA_NEWDST 1

/* Define to 1 if you have the declaration of `RTA_PREF', and to 0 if you
   don't. */
#define HAVE_DECL_RTA_PREF 1

/* Define to 1 if you have the declaration of `RTA_TTL_PROPAGATE', and to 0 if
   you don't. */
#define HAVE_DECL_RTA_TTL_PROPAGATE 1

/* Define to 1 if you have the declaration of `RTA_VIA', and to 0 if you
   don't. */
#define HAVE_DECL_RTA_VIA 1

/* Define to 1 if you have the declaration of `RTEXT_FILTER_SKIP_STATS', and
   to 0 if you don't. */
#define HAVE_DECL_RTEXT_FILTER_SKIP_STATS 1

/* Define to 1 if you have the declaration of `SO_MARK', and to 0 if you
   don't. */
#define HAVE_DECL_SO_MARK 1

/* Define to 1 if you have the declaration of `__NR_memfd_create', and to 0 if
   you don't. */
/* #undef HAVE_DECL___NR_MEMFD_CREATE */

/* Define to 1 if you have the `dup2' function. */
#define HAVE_DUP2 1

/* Define to 1 if you have the `dup3' function. */
#define HAVE_DUP3 1

/* Define to 1 if you have the `ERR_get_error_all' function. */
/* #undef HAVE_ERR_GET_ERROR_ALL */

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if IFLA_LINK_NETNSID supported */
#define HAVE_IFLA_LINK_NETNSID 1 

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `crypto' library (-lcrypto). */
#define HAVE_LIBCRYPTO 1

/* Define to 1 if you have the <libipset/data.h> header file. */
/* #undef HAVE_LIBIPSET_DATA_H */

/* Define to 1 if you have the <libipset/linux_ip_set.h> header file. */
/* #undef HAVE_LIBIPSET_LINUX_IP_SET_H */

/* Define to 1 if you have the <libipset/session.h> header file. */
/* #undef HAVE_LIBIPSET_SESSION_H */

/* Define to 1 if you have the <libipset/types.h> header file. */
/* #undef HAVE_LIBIPSET_TYPES_H */

/* Define to 1 if you have the <libiptc/libip6tc.h> header file. */
#define HAVE_LIBIPTC_LIBIP6TC_H 1

/* Define to 1 if you have the <libiptc/libiptc.h> header file. */
#define HAVE_LIBIPTC_LIBIPTC_H 1

/* Define to 1 if you have the <libiptc/libxtc.h> header file. */
#define HAVE_LIBIPTC_LIBXTC_H 1

/* Define to 1 if you have the `ssl' library (-lssl). */
#define HAVE_LIBSSL 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <linux/errqueue.h> header file. */
#define HAVE_LINUX_ERRQUEUE_H 1

/* Define to 1 if you have the <linux/ethtool.h> header file. */
#define HAVE_LINUX_ETHTOOL_H 1

/* Define to 1 if you have the <linux/fib_rules.h> header file. */
#define HAVE_LINUX_FIB_RULES_H 1

/* Define to 1 if you have the <linux/icmpv6.h> header file. */
#define HAVE_LINUX_ICMPV6_H 1

/* Define to 1 if you have the <linux/icmp.h> header file. */
#define HAVE_LINUX_ICMP_H 1

/* Define to 1 if you have the <linux/if_addr.h> header file. */
#define HAVE_LINUX_IF_ADDR_H 1

/* Define to 1 if you have the <linux/if_ether.h> header file. */
#define HAVE_LINUX_IF_ETHER_H 1

/* Define to 1 if you have the <linux/if_link.h> header file. */
#define HAVE_LINUX_IF_LINK_H 1

/* Define to 1 if you have the <linux/if_packet.h> header file. */
#define HAVE_LINUX_IF_PACKET_H 1

/* Define to 1 if you have the <linux/ip.h> header file. */
#define HAVE_LINUX_IP_H 1

/* Define to 1 if you have the <linux/rtnetlink.h> header file. */
#define HAVE_LINUX_RTNETLINK_H 1

/* Define to 1 if you have the <linux/sockios.h> header file. */
#define HAVE_LINUX_SOCKIOS_H 1

/* Define to 1 if you have the <linux/types.h> header file. */
#define HAVE_LINUX_TYPES_H 1

/* Define to 1 if you have the `malloc' function. */
#define HAVE_MALLOC 1

/* Define to 1 if you have the `memfd_create' function. */
#define HAVE_MEMFD_CREATE 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <netlink/genl/ctrl.h> header file. */
#define HAVE_NETLINK_GENL_CTRL_H 1

/* Define to 1 if you have the <netlink/genl/genl.h> header file. */
#define HAVE_NETLINK_GENL_GENL_H 1

/* Define to 1 if you have the <netlink/netlink.h> header file. */
#define HAVE_NETLINK_NETLINK_H 1

/* Define to 1 if you have the `netsnmp_enable_subagent' function. */
/* #undef HAVE_NETSNMP_ENABLE_SUBAGENT */

/* Define to 1 if you have the <net/if_arp.h> header file. */
#define HAVE_NET_IF_ARP_H 1

/* Define to 1 if you have the <net-snmp/agent/agent_sysORTable.h> header
   file. */
/* #undef HAVE_NET_SNMP_AGENT_AGENT_SYSORTABLE_H */

/* Define to 1 if you have the <net-snmp/agent/snmp_vars.h> header file. */
/* #undef HAVE_NET_SNMP_AGENT_SNMP_VARS_H */

/* Define to 1 if you have the <net-snmp/agent/util_funcs.h> header file. */
/* #undef HAVE_NET_SNMP_AGENT_UTIL_FUNCS_H */

/* Define to 1 if NFTNL_EXPR_LOOKUP_FLAGS and NFT_LOOKUP_F_INV defined */
/* #undef HAVE_NFTNL_EXPR_LOOKUP_FLAG_INV */

/* Define to 1 if have nftnl udata support */
/* #undef HAVE_NFTNL_UDATA */

/* Define to 1 if you have the <openssl/err.h> header file. */
#define HAVE_OPENSSL_ERR_H 1

/* Define to 1 if you have the <openssl/evp.h> header file. */
#define HAVE_OPENSSL_EVP_H 1

/* Define to 1 if you have the `OPENSSL_init_crypto' function. */
#define HAVE_OPENSSL_INIT_CRYPTO 1

/* Define to 1 if OPENSSL_init_crypto(OPENSSL_INIT_NO_LOAD_CONFIG) bug) */
/* #undef HAVE_OPENSSL_INIT_NO_LOAD_CONFIG_BUG */

/* Define to 1 if you have the <openssl/md5.h> header file. */
#define HAVE_OPENSSL_MD5_H 1

/* Define to 1 if you have the <openssl/ssl.h> header file. */
#define HAVE_OPENSSL_SSL_H 1

/* Define to 1 if you have the `realloc' function. */
#define HAVE_REALLOC 1

/* Define to 1 if you have the `sd_pid_notify` function */
#define HAVE_SD_PID_NOTIFY 1 

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `socket' function. */
#define HAVE_SOCKET 1

/* Define to 1 if you have the `SSL_CTX_set_verify_depth' function. */
#define HAVE_SSL_CTX_SET_VERIFY_DEPTH 1

/* Define to 1 if you have the `SSL_set0_rbio' function. */
#define HAVE_SSL_SET0_RBIO 1

/* Define to 1 if you have the `SSL_set0_wbio' function. */
#define HAVE_SSL_SET0_WBIO 1

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strpbrk' function. */
#define HAVE_STRPBRK 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if you have the `strtoul' function. */
#define HAVE_STRTOUL 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/prctl.h> header file. */
#define HAVE_SYS_PRCTL_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if have timegm() */
#define HAVE_TIMEGM 1 

/* Define to 1 if you have the `TLS_method' function. */
#define HAVE_TLS_METHOD 1

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `vfork' function. */
#define HAVE_VFORK 1

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if you have the `vsyslog' function. */
#define HAVE_VSYSLOG 1

/* Define to 1 if `fork' works. */
#define HAVE_WORKING_FORK 1

/* Define to 1 if `vfork' works. */
#define HAVE_WORKING_VFORK 1

/* Define to 1 if have struct xt_set_info_match_v4 */
/* #undef HAVE_XT_SET_INFO_MATCH_V4 */

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define the ip4tc library name */
/* #undef IP4TC_LIB_NAME */

/* Define the ip6tc library name */
/* #undef IP6TC_LIB_NAME */

/* Define the ipset library name */
/* #undef IPSET_LIB_NAME */

/* Defined in linux/in6.h but not in netinet/in.h */
/* #undef IPV6_MULTICAST_ALL */

/* Location for temporary files */
#define KA_TMP_DIR "/tmp"

/* configure options specified */
#define KEEPALIVED_CONFIGURE_OPTIONS "--build=x86_64-redhat-linux-gnu --host=x86_64-redhat-linux-gnu --program-prefix= --disable-dependency-tracking --prefix=/usr --exec-prefix=/usr --bindir=/usr/bin --sbindir=/usr/sbin --sysconfdir=/etc --datadir=/usr/share --includedir=/usr/include --libdir=/usr/lib64 --libexecdir=/usr/libexec --localstatedir=/var --sharedstatedir=/var/lib --mandir=/usr/share/man --infodir=/usr/share/info --disable-nftables --disable-libipset --with-init=systemd build_alias=x86_64-redhat-linux-gnu host_alias=x86_64-redhat-linux-gnu PKG_CONFIG_PATH=:/usr/lib64/pkgconfig:/usr/share/pkgconfig CFLAGS=-O2 -g -pipe -Wall -Werror=format-security -Wp,-D_FORTIFY_SOURCE=2 -Wp,-D_GLIBCXX_ASSERTIONS -fexceptions -fstack-protector-strong -grecord-gcc-switches -specs=/usr/lib/rpm/redhat/redhat-hardened-cc1 -specs=/usr/lib/rpm/redhat/redhat-annobin-cc1 -m64 -mtune=generic -fasynchronous-unwind-tables -fstack-clash-protection -fcf-protection LDFLAGS=-Wl,-z,relro -Wl,-z,now -specs=/usr/lib/rpm/redhat/redhat-hardened-ld"

/* Define to 1 if libipset library version prior to v7 */
/* #undef LIBIPSET_PRE_V7_COMPAT */

/* Define to 1 if libipvs can use netlink */
#define LIBIPVS_USE_NL 1 

/* libnftnl version in hex */
/* #undef LIBNFTNL_VERSION */

/* The type of parameter __line passed to __assert_fail() */
#define LINE_type unsigned int

/* Define if using VERY old (i.e. pre 2.19 - 2014) glibc */
/* #undef NEED_FAVOR_BSD */

/* Define to 1 if can use concats with ranges in nftables */
/* #undef NFT_RANGE_CONCATS */

/* Define the nl-genl-3.0 library name */
/* #undef NL3_GENL_LIB_NAME */

/* Define the nl-3 library name */
/* #undef NL3_LIB_NAME */

/* Define the nl library name */
/* #undef NL_LIB_NAME */

/* The old default configuration file */
/* #undef OLD_DEFAULT_CONFIG_FILE */

/* Name of package */
#define PACKAGE "keepalived"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "keepalived-users@groups.io"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Keepalived"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Keepalived 2.3.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "keepalived"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://www.keepalived.org/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.3.1"

/* Define to zu if msghdr.msg_controllen is size_t, else u */
#define PRI_MSG_CONTROLLEN "zu" 

/* Define printf format specifier for rlim_t */
#define PRI_rlim_t "lu"

/* Directory for runtime state files */
#define RUNSTATEDIR "/run"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* The system options from which the package is built */
#define SYSTEM_OPTIONS " VSYSLOG MEMFD_CREATE LIBKMOD IPV4_DEVCONF LIBNL3 RTA_ENCAP RTA_EXPIRES RTA_NEWDST RTA_PREF FRA_SUPPRESS_PREFIXLEN FRA_SUPPRESS_IFGROUP FRA_TUN_ID RTAX_CC_ALGO RTAX_QUICKACK RTEXT_FILTER_SKIP_STATS FRA_L3MDEV FRA_UID_RANGE RTAX_FASTOPEN_NO_COOKIE RTA_VIA FRA_PROTOCOL FRA_IP_PROTO FRA_SPORT_RANGE FRA_DPORT_RANGE RTA_TTL_PROPAGATE IFA_FLAGS LWTUNNEL_ENCAP_MPLS LWTUNNEL_ENCAP_ILA IPTABLES NET_LINUX_IF_H_COLLISION LIBIPVS_NETLINK IPVS_DEST_ATTR_ADDR_FAMILY IPVS_SYNCD_ATTRIBUTES IPVS_64BIT_STATS VRRP_IPVLAN IFLA_LINK_NETNSID GLOB_BRACE GLOB_ALTDIRFUNC INET6_ADDR_GEN_MODE VRF SO_MARK"

/* Define to 1 to build with thread dumping support */
/* #undef THREAD_DUMP */

/* Define to 1 if sizeof(time_t) is 4 bytes */
/* #undef TIME_T_ADD_OVERFLOWS */

/* Use syscall for memfd_create */
/* #undef USE_MEMFD_CREATE_SYSCALL */

/* Define to 1 if use sockaddr_storage */
/* #undef USE_SOCKADDR_STORAGE */

/* Version number of package */
#define VERSION "2.3.1"

/* default options for ASAN */
/* #undef _ASAN_DEFAULT_OPTIONS_ */

/* Define to enable checker debugging */
/* #undef _CHECKER_DEBUG_ */

/* Define to enable checksum debugging */
/* #undef _CHECKSUM_DEBUG_ */

/* Define to enable keyword dumping */
/* #undef _DUMP_KEYWORDS_ */

/* Define to test for and log errno == EINTR when no asynchronous signal
   handlers */
/* #undef _EINTR_DEBUG_ */

/* Define to 1 to enable asserts */
/* #undef _ENABLE_ASSERT_ */

/* Define to 1 to build with epoll_wait() debugging support */
/* #undef _EPOLL_DEBUG_ */

/* Define to 1 to build with epoll thread dumping support */
/* #undef _EPOLL_THREAD_DUMP_ */

/* Consider ${with_fixed_if_type} interfaces to be unchangeable */
/* #undef _FIXED_IF_TYPE_ */

/* Define to 1 if can have _Pragma GCC diagnostic push/pop */
#define _HAVE_DIAGNOSTIC_PUSH_POP_PRAGMAS_ 1 

/* Define to 1 if function __attribute__((error(msg))) supported */
/* #undef _HAVE_FUNCTION_ATTRIBUTE_ERROR_ */

/* Define to 1 if can have _Pragma GCC diagnostic in functions */
#define _HAVE_FUNCTION_DIAGNOSTIC_PRAGMAS_ 1 

/* Define to 1 if function __attribute__((warn_unused_results)) supported */
#define _HAVE_FUNCTION_WARN_UNUSED_RESULTS_ 1 

/* Define to 1 if have IPv4 netlink device configuration */
#define _HAVE_IPV4_DEVCONF_ 1 

/* Define to 1 if have IPVS syncd attributes */
#define _HAVE_IPVS_SYNCD_ATTRIBUTES_ 1 

/* Define to 1 if have IPVS tunnel checksum options */
/* #undef _HAVE_IPVS_TUN_CSUM_ */

/* Define to 1 if have IPVS gre tunnel */
/* #undef _HAVE_IPVS_TUN_GRE_ */

/* Define to 1 if have IPVS tunnel type */
/* #undef _HAVE_IPVS_TUN_TYPE_ */

/* Define to 1 if have ipset library */
/* #undef _HAVE_LIBIPSET_ */

/* Define to 1 if have libiptc/libiptc.h linux/if.h and net/if.h namespace
   collision */
/* #undef _HAVE_LIBIPTC_LINUX_NET_IF_H_COLLISION_ */

/* Define to 1 if have libkmod */
#define _HAVE_LIBKMOD_ 1 

/* Define to 1 if have magic library */
/* #undef _HAVE_LIBMAGIC_ */

/* Define to 1 if using libnl-1 */
/* #undef _HAVE_LIBNL1_ */

/* Define to 1 if using libnl-3 */
#define _HAVE_LIBNL3_ 1 

/* Define to 1 to use libnm */
/* #undef _HAVE_LIBNM_ */

/* Define to 1 if have linux/if_ether.h then netinet/in.h then linux/in.h
   namespace collision */
/* #undef _HAVE_LINUX_IF_ETHER_H_COLLISION_ */

/* Define to 1 if have linux/if_ether.h then netinet/if_ether.h namespace
   collision */
/* #undef _HAVE_NETINET_LINUX_IF_ETHER_H_COLLISION_ */

/* Define to 1 if have linux/if.h followed by net/if.h namespace collision */
#define _HAVE_NET_LINUX_IF_H_COLLISION_ 1 

/* Define to 1 if _Pragma("GCC diagnostic warning \"-Wstrict-overflow=1\"")
   supported */
#define _HAVE_PRAGMA_WARN_STRICT_OVERFLOW_1_ 1 

/* Define to 1 if have SSL_set_tlsext_host_name() */
#define _HAVE_SSL_SET_TLSEXT_HOST_NAME_ 1 

/* Define to 1 if have kernel VRF support */
#define _HAVE_VRF_ 1 

/* Define to 1 if have IP VLAN support */
#define _HAVE_VRRP_IPVLAN_ 1 

/* Define to 1 if have MAC VLAN support */
#define _HAVE_VRRP_VMAC_ 1 

/* default options for HWASAN */
/* #undef _HWASAN_DEFAULT_OPTIONS_ */

/* Define to 1 if building with libipset dynamic linking */
/* #undef _LIBIPSET_DYNAMIC_ */

/* Define to 1 if building with libiptc dynamic linking */
/* #undef _LIBIPTC_DYNAMIC_ */

/* Define to 1 if building with libnl dynamic linking */
/* #undef _LIBNL_DYNAMIC_ */

/* default options for LSAN */
/* #undef _LSAN_DEFAULT_OPTIONS_ */

/* Define to 1 to build with malloc failure checks */
/* #undef _MALLOC_CHECK_ */

/* Define to 1 to build with malloc/free checks */
/* #undef _MEM_CHECK_ */

/* Define to 1 to log malloc/free checks to syslog */
/* #undef _MEM_CHECK_LOG_ */

/* Define to enable memory alloc/free error debugging */
/* #undef _MEM_ERR_DEBUG_ */

/* default options for MSAN */
/* #undef _MSAN_DEFAULT_OPTIONS_ */

/* Define to 1 to build with netlink command timers support */
/* #undef _NETLINK_TIMERS_ */

/* Define to 1 to build with network timestamp support */
/* #undef _NETWORK_TIMESTAMP_ */

/* Define to 1 if unaligned memory access not supported */
/* #undef _NO_UNALIGNED_ACCESS_ */

/* Define to 1 to build with debugging support */
/* #undef _ONE_PROCESS_DEBUG_ */

/* Define to 1 to build with malloc/free checks */
/* #undef _OPENSSL_MEM_CHECK_ */

/* Define to enable parser debugging */
/* #undef _PARSER_DEBUG_ */

/* Define to add VRRP recvmsg() debugging code */
/* #undef _RECVMSG_DEBUG_ */

/* Define to 1 to build with regex debugging support */
/* #undef _REGEX_DEBUG_ */

/* Make the build reproducible */
/* #undef _REPRODUCIBLE_BUILD_ */

/* Define to enable script debugging support */
/* #undef _SCRIPT_DEBUG_ */

/* default options for SCUDO */
/* #undef _SCUDO_DEFAULT_OPTIONS_ */

/* Define to 1 to build with smtp-alert debugging support */
/* #undef _SMTP_ALERT_DEBUG_ */

/* Define to enable SMTP connection debugging */
/* #undef _SMTP_CONNECT_DEBUG_ */

/* Define to 1 to have keepalived send RFC6527 SNMP responses for VRRPv2
   instances */
/* #undef _SNMP_REPLY_V3_FOR_V2_ */

/* Define to 1 if want stricter configuration checking */
/* #undef _STRICT_CONFIG_ */

/* Define to 1 to build with set time logging */
/* #undef _TIMER_CHECK_ */

/* Define to enable logging all process connector events */
/* #undef _TRACK_PROCESS_DEBUG_ */

/* Define to 1 to build with TSM debugging support */
/* #undef _TSM_DEBUG_ */

/* default options for UBSAN */
/* #undef _UBSAN_DEFAULT_OPTIONS_ */

/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT32_T */

/* Define for Solaris 2.5.1 so the uint64_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT64_T */

/* Define for Solaris 2.5.1 so the uint8_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT8_T */

/* Define to 1 if want systemd notify support */
#define _USE_SYSTEMD_NOTIFY_ 1 

/* Define to 1 to build with vrrp fd debugging support */
/* #undef _VRRP_FD_DEBUG_ */

/* Define to 1 if have BFD support */
/* #undef _WITH_BFD_ */

/* Define to 1 to have DBUS support */
/* #undef _WITH_DBUS_ */

/* Define to 1 to have DBus create instance support */
/* #undef _WITH_DBUS_CREATE_INSTANCE_ */

/* Define to 1 to build with thread dumping support */
/* #undef _WITH_DUMP_THREADS_ */

/* Define to 1 if using iptables or nftables */
#define _WITH_FIREWALL_ 1 

/* Define to 1 if want iptables support */
#define _WITH_IPTABLES_ 1 

/* Define to 1 to build with JSON output support */
/* #undef _WITH_JSON_ */

/* Define to 1 if have linkbeat support */
#define _WITH_LINKBEAT_ 1 

/* Define to 1 if have IPVS support */
#define _WITH_LVS_ 1 

/* Define to 1 if have IPVS 64 bit stats */
#define _WITH_LVS_64BIT_STATS_ 1 

/* Define to 1 if want nftables support */
/* #undef _WITH_NFTABLES_ */

/* Define to 1 to build with perf support */
/* #undef _WITH_PERF_ */

/* Define to 1 to build with profiling support */
/* #undef _WITH_PROFILING_ */

/* Define to 1 if using pthreads */
/* #undef _WITH_PTHREADS_ */

/* Define to 1 to build with HTTP_GET regex checking */
/* #undef _WITH_REGEX_CHECK_ */

/* Define to 1 to include regex timers */
/* #undef _WITH_REGEX_TIMERS_ */

/* Define to 1 if any sanitizer is enabled */
/* #undef _WITH_SANITIZER_ */

/* Define to 1 to build with sanitize=address support */
/* #undef _WITH_SANITIZE_ADDRESS_ */

/* Define to 1 to build with sanitize=hwaddress support */
/* #undef _WITH_SANITIZE_HWADDRESS_ */

/* Define to 1 to build with sanitize=leak support */
/* #undef _WITH_SANITIZE_LEAK_ */

/* Define to 1 to build with sanitize=memory support */
/* #undef _WITH_SANITIZE_MEMORY_ */

/* Define to 1 to build with sanitize=scudo support */
/* #undef _WITH_SANITIZE_SCUDO_ */

/* Define to 1 to build with sanitize=undefined support */
/* #undef _WITH_SANITIZE_UNDEFINED_ */

/* Define to 1 to have SNMP support */
/* #undef _WITH_SNMP_ */

/* Define to 1 to have keepalived SNMP checker support */
/* #undef _WITH_SNMP_CHECKER_ */

/* Define to 1 to have keepalived SNMP support */
/* #undef _WITH_SNMP_KEEPALIVED_ */

/* Define to 1 to have RFCv2 SNMP support */
/* #undef _WITH_SNMP_RFCV2_ */

/* Define to 1 to have RFCv3 SNMP support */
/* #undef _WITH_SNMP_RFCV3_ */

/* Define to 1 to have RFC SNMP support */
/* #undef _WITH_SNMP_RFC_ */

/* Define to 1 to have keepalived SNMP VRRP support */
/* #undef _WITH_SNMP_VRRP_ */

/* Define to 1 if have SO_MARK */
#define _WITH_SO_MARK_ 1 

/* Define to 1 to build with stacktrace support */
/* #undef _WITH_STACKTRACE_ */

/* Define to 1 if track-process not disabled */
#define _WITH_TRACK_PROCESS_ 1 

/* Define to 1 to enable v1.3.6 and earlier VRRPv3 unicast checksum
   compatibility */
#define _WITH_UNICAST_CHKSUM_COMPAT_ 1 

/* Define to 1 if have VRRP support */
#define _WITH_VRRP_ 1 

/* Define to 1 if want ARRP authentication support */
#define _WITH_VRRP_AUTH_ 1 

/* Define __always_inline if libc does not define it */
/* #undef __always_inline */

/* Define fallthrough attribute */
#define __fallthrough __attribute__((fallthrough)) 

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to the type of a signed integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int64_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to the type of an unsigned integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint16_t */

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint32_t */

/* Define to the type of an unsigned integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint64_t */

/* Define to the type of an unsigned integer type of width exactly 8 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint8_t */

/* Define as `fork' if `vfork' does not work. */
/* #undef vfork */


#include "config_warnings.h"

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

#endif
