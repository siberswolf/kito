#ifndef __MagixNetworkDefines_h_
#define __MagixNetworkDefines_h_

#define MAX_CLIENTS 250
#define MAX_SERVERS 10
#define MAX_EQUIP 8
#define MAX_STASH 20
#define MAX_PARTYMEMBERS 6

#define SERVER_PORT 40000
#define MAIN_SERVER_PORT 40010
#define MAIN_SERVER_IP "server1.staunhansen.dk"
//#define SERVER_IP1 "rpserver.impressivetitle.co.uk"
//#define SERVER_IP2 "game.impressivetitle.co.uk"
#define SERVER_PASSWORD "defe764c8ab9c6d19e5db599736d3e02"
#define SERVER_ID 255

#define ID_DEBUGTEXT 100
#define ID_NEWPLAYER 101
//#define ID_NEWPLAYERCOLOURS 102
#define ID_CHAT 103
#define ID_POSITION 104
#define ID_NEWPLAYERUPDATE 105
#define ID_PLAYERDISCONNECTED 106
#define ID_MOVEPOSITION 107
#define ID_LOOKQUATERNION 108
#define ID_FACEDIRECTION 109
#define ID_ACTIONFLAGS 110
#define ID_EMOTE 111
#define ID_WORLDINFO 112
#define ID_REQUESTMAPINFO 113
#define ID_ATTACK 114
#define ID_PLAYERMAPCHANGE 115
#define ID_VALIDATENAME 116
#define ID_PLAYERDATA 117
#define ID_BIO 118
#define ID_KICK 119
#define ID_ITEMDROP 120
#define ID_ITEMPICKUP 121
#define ID_ITEMEQUIP 122
#define ID_ITEMUNEQUIP 123
#define ID_IMREADY 124
#define ID_EVENT 125
#define ID_INFO 126
#define ID_ACKNOWLEDGE 127
#define ID_DENIED 128
#define ID_CRITTEROWNAGE 129
#define ID_CRITTERINFO 130
#define ID_CRITTERTARGETEDINFO 131
#define ID_UNITOWNAGE 132
#define ID_UNITINFO 133
#define ID_UNITTARGETEDINFO 134
#define ID_OBJECTOWNAGE 135
#define ID_OBJECTINFO 136
#define ID_OBJECTTARGETEDINFO 137
#define ID_UPDATESKILLS 138
#define ID_UPDATEPET 139
#define ID_UPDATEHP 140
#define ID_PLAYERINFO 141
#define ID_PLAYERTARGETEDINFO 142
#define ID_ITEMSTASH 143
#define ID_FINDPLAYER 144
#define ID_CRITTERINFOONEWAY 145

#define ID_LOGON 200
#define ID_CREATEACCOUNT 201
#define ID_LOADCHAR 202
#define ID_CREATECHAR 203
#define ID_DELETECHAR 204
#define ID_EDITCHAR 205
#define ID_EDITACCOUNT 206
#define ID_SAVEITEM 207
#define ID_GODSPEAK 208
#define ID_FORCELOGOUT 209
#define ID_MAINTENANCE 210
#define ID_VIOLATION 211

#define ID_SERVERUPDATE 247
#define ID_REQUESTPLAYERDATA 248
#define ID_TOKENCONNECTED 249
#define ID_TOKENDISCONNECTED 250
#define ID_SERVERLIST 251
#define ID_SERVERCONNECTED 252
#define ID_IMASERVER 253

#define TOKEN_NULL 254

typedef unsigned char OwnerToken;

enum ACKNOWLEDGE
{
	ACK_ITEMDROPPED,
	ACK_ITEMPICKED,
	ACK_OBJECTOWNED,
	ACK_UNITOWNED,
	ACK_CRITTERCREATED
};
enum NETWORKINFO
{
	INFO_MODON,
	INFO_MODOFF,
	INFO_YOURBLOCKED,
	INFO_YOURUNBLOCKED,
	INFO_PARTYREQUEST,
	INFO_PARTYINVITE,
	INFO_PARTYACCEPTED,
	INFO_PARTYJOINED,
	INFO_PARTYKICK,
	INFO_PARTYLEAVE,
	INFO_PARTYALREADY,
	INFO_PARTYINVITEACCEPTED
};
enum NETWORKEVENT
{
	EVENT_EARTHQUAKE,
	EVENT_MASSBLOCK
};

#endif