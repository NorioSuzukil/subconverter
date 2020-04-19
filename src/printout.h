#ifndef PRINTOUT_H_INCLUDED
#define PRINTOUT_H_INCLUDED

#include <string>
#include <vector>
#include <unistd.h>

#include "misc.h"
#include "nodeinfo.h"

enum
{
    SPEEDTEST_ERROR_UNDEFINED = -13,
    SPEEDTEST_ERROR_WSAERR,
    SPEEDTEST_ERROR_SOCKETERR,
    SPEEDTEST_ERROR_NORECOGLINK,
    SPEEDTEST_ERROR_NOCONNECTION,
    SPEEDTEST_ERROR_INVALIDSUB,
    SPEEDTEST_ERROR_NONODES,
    SPEEDTEST_ERROR_NORESOLVE,
    SPEEDTEST_ERROR_RETEST,
    SPEEDTEST_ERROR_NOSPEED,
    SPEEDTEST_ERROR_UNRECOGFILE,
    SPEEDTEST_ERROR_SUBFETCHERR,
    SPEEDTEST_ERROR_GEOIPERR,
    SPEEDTEST_ERROR_NONE
};

enum
{
    SPEEDTEST_MESSAGE_FOUNDVMESS = 1,
    SPEEDTEST_MESSAGE_FOUNDSS,
    SPEEDTEST_MESSAGE_FOUNDSSR,
    SPEEDTEST_MESSAGE_FOUNDTROJAN,
    SPEEDTEST_MESSAGE_WELCOME,
    SPEEDTEST_MESSAGE_FOUNDSUB,
    SPEEDTEST_MESSAGE_GOTSERVER,
    SPEEDTEST_MESSAGE_STARTPING,
    SPEEDTEST_MESSAGE_GOTPING,
    SPEEDTEST_MESSAGE_STARTSPEED,
    SPEEDTEST_MESSAGE_GOTSPEED,
    SPEEDTEST_MESSAGE_GOTRESULT,
    SPEEDTEST_MESSAGE_TRAFFIC,
    SPEEDTEST_MESSAGE_PICSAVING,
    SPEEDTEST_MESSAGE_PICSAVED,
    SPEEDTEST_MESSAGE_GROUP,
    SPEEDTEST_MESSAGE_FETCHSUB,
    SPEEDTEST_MESSAGE_BEGIN,
    SPEEDTEST_MESSAGE_FOUNDLOCAL,
    SPEEDTEST_MESSAGE_PARSING,
    SPEEDTEST_MESSAGE_FOUNDUPD,
    SPEEDTEST_MESSAGE_PICDATA,
    SPEEDTEST_MESSAGE_STARTGPING,
    SPEEDTEST_MESSAGE_GOTGPING,
    SPEEDTEST_MESSAGE_FOUNDSOCKS,
    SPEEDTEST_MESSAGE_STARTGEOIP,
    SPEEDTEST_MESSAGE_GOTGEOIP,
    SPEEDTEST_MESSAGE_FOUNDSSCONF,
    SPEEDTEST_MESSAGE_MULTILINK,
    SPEEDTEST_MESSAGE_PICSAVINGMULTI,
    SPEEDTEST_MESSAGE_PICSAVEDMULTI,
    SPEEDTEST_MESSAGE_STARTUPD,
    SPEEDTEST_MESSAGE_GOTUPD,
    SPEEDTEST_MESSAGE_FOUNDSSTAP,
    SPEEDTEST_MESSAGE_FOUNDNETCH,
    SPEEDTEST_MESSAGE_FOUNDHTTP,
    SPEEDTEST_MESSAGE_EOF
};

#define SS_DEFAULT_GROUP "SSProvider"
#define SSR_DEFAULT_GROUP "SSRProvider"
#define V2RAY_DEFAULT_GROUP "V2RayProvider"
#define SOCKS_DEFAULT_GROUP "SocksProvider"
#define HTTP_DEFAULT_GROUP "HTTPProvider"
#define TROJAN_DEFAULT_GROUP "TrojanProvider"

void printMsg(int index, nodeInfo *node, bool rpcmode);
void printMsgWithDict(int index, bool rpcmode, std::vector<std::string> dict, std::vector<std::string> trans);
void printMsgDirect(int index, bool rpcmode);

#endif // PRINTOUT_H_INCLUDED
