// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIP2PAWDLSTATE_H
#define WIFIP2PAWDLSTATE_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "WiFiMACAddress.h"
#import "WiFiChannel.h"

@interface WiFiP2PAWDLState : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSArray *channelSequence; // ivar: _channelSequence
@property (readonly, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (readonly, nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) WiFiMACAddress *macAddress; // ivar: _macAddress
@property (readonly, nonatomic) WiFiChannel *peerMasterChannel; // ivar: _peerMasterChannel
@property (readonly, nonatomic) WiFiChannel *peerPrimaryPreferredChannel; // ivar: _peerPrimaryPreferredChannel
@property (readonly, nonatomic) WiFiChannel *peerSecondaryPreferredChannel; // ivar: _peerSecondaryPreferredChannel
@property (readonly, nonatomic) unsigned int substate; // ivar: _substate
@property (readonly, nonatomic) BOOL supportsDataTransfer; // ivar: _supportsDataTransfer
@property (readonly, nonatomic) BOOL supportsSoloMode; // ivar: _supportsSoloMode


+(BOOL)supportsSecureCoding;
+(id)currentState;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInterfaceName:(id)arg0 supportsSoloMode:(BOOL)arg1 supportsDataTransfer:(BOOL)arg2 channelSequence:(id)arg3 isEnabled:(BOOL)arg4 substate:(unsigned int)arg5 macAddress:(id)arg6 peerMasterChannel:(id)arg7 peerPrimaryPreferredChannel:(id)arg8 peerSecondaryPreferredChannel:(id)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif