/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, NSData, NSDictionary, GKPlayerInternal;

@interface GKInviteInternal : GKInternalRepresentation  {
    NSString *_bundleID;
    NSString *_message;
    unsigned char _version;
    NSData *_peerBlob;
    GKPlayerInternal *_player;
    NSString *_rid;
    unsigned int _playerGroup;
    unsigned int _playerAttributes;
    NSString *_inviteID;
    NSData *_peerPushToken;
    NSString *_peerID;
    NSDictionary *_localizableMessage;
    NSData *_peerNATIP;
    unsigned int _matchType;
    NSData *_sessionToken;
    NSString *_deviceID;
    int _peerNATType;
}

@property(retain) NSString * inviteID;
@property(retain) NSData * sessionToken;
@property(retain) GKPlayerInternal * player;
@property(retain) NSString * message;
@property(retain) NSDictionary * localizableMessage;
@property unsigned int matchType;
@property unsigned int playerGroup;
@property unsigned int playerAttributes;
@property(retain) NSString * peerID;
@property(retain) NSData * peerPushToken;
@property int peerNATType;
@property(retain) NSData * peerNATIP;
@property(retain) NSData * peerBlob;
@property(retain) NSString * rid;
@property unsigned char version;
@property(retain) NSString * deviceID;
@property(retain) NSString * bundleID;
@property(readonly) BOOL isNearby;

+ (id)inviteFromNearbyPlayer:(id)arg1 deviceID:(id)arg2 bundleID:(id)arg3 connectionData:(id)arg4;
+ (id)inviteWithDictionary:(id)arg1;
+ (id)nearbyInviteIDForPlayerID:(id)arg1 deviceID:(id)arg2 bundleID:(id)arg3;
+ (id)codedPropertyKeys;

- (int)peerNATType;
- (id)peerNATIP;
- (void)setLocalizableMessage:(id)arg1;
- (id)localizableMessage;
- (id)peerPushToken;
- (id)peerBlob;
- (BOOL)isNearby;
- (id)inviteID;
- (void)setDeviceID:(id)arg1;
- (void)setPeerBlob:(id)arg1;
- (void)setPeerNATIP:(id)arg1;
- (void)setPeerNATType:(int)arg1;
- (void)setPeerPushToken:(id)arg1;
- (void)setInviteID:(id)arg1;
- (void)setSessionToken:(id)arg1;
- (void)setMatchType:(unsigned int)arg1;
- (void)setPlayerAttributes:(unsigned int)arg1;
- (void)setPlayerGroup:(unsigned int)arg1;
- (id)sessionToken;
- (unsigned int)playerAttributes;
- (unsigned int)playerGroup;
- (unsigned int)matchType;
- (void)setBundleID:(id)arg1;
- (id)bundleID;
- (void)setRid:(id)arg1;
- (id)rid;
- (void)setPlayer:(id)arg1;
- (id)player;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setPeerID:(id)arg1;
- (id)peerID;
- (void)setVersion:(unsigned char)arg1;
- (id)message;
- (unsigned char)version;
- (void)setMessage:(id)arg1;
- (id)deviceID;

@end