// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCONVERSATIONPARTICIPANT_H
#define TUCONVERSATIONPARTICIPANT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TUConversationParticipantAssociation.h"
#import "TUConversationParticipantCapabilities.h"
#import "TUHandle.h"

@interface TUConversationParticipant : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *activeIDSDestination; // ivar: _activeIDSDestination
@property (copy, nonatomic) TUConversationParticipantAssociation *association; // ivar: _association
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled; // ivar: _audioEnabled
@property (nonatomic, getter=isAudioPaused) BOOL audioPaused; // ivar: _audioPaused
@property (nonatomic) NSInteger audioPriority; // ivar: _audioPriority
@property (nonatomic) NSUInteger audioVideoMode; // ivar: _audioVideoMode
@property (copy, nonatomic) NSString *avcIdentifier; // ivar: _avcIdentifier
@property (copy, nonatomic) TUConversationParticipantCapabilities *capabilities; // ivar: _capabilities
@property (nonatomic) NSInteger captionsToken; // ivar: _captionsToken
@property (nonatomic, getter=isGuestModeEnabled) BOOL guestModeEnabled; // ivar: _guestModeEnabled
@property (readonly, copy, nonatomic) TUHandle *handle; // ivar: _handle
@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (nonatomic, getter=isLightweight) BOOL lightweight; // ivar: _lightweight
@property (nonatomic, getter=isLocalAccountHandle) BOOL localAccountHandle; // ivar: _localAccountHandle
@property (nonatomic, getter=isMuted) BOOL muted; // ivar: _muted
@property (nonatomic, getter=isRemoteAudioEnabled) BOOL remoteAudioEnabled; // ivar: _remoteAudioEnabled
@property (nonatomic, getter=isRemoteVideoEnabled) BOOL remoteVideoEnabled; // ivar: _remoteVideoEnabled
@property (nonatomic, getter=isScreenEnabled) BOOL screenEnabled; // ivar: _screenEnabled
@property (nonatomic) NSInteger screenToken; // ivar: _screenToken
@property (readonly, copy, nonatomic) NSString *senderCorrelationIdentifier; // ivar: _senderCorrelationIdentifier
@property (nonatomic) NSInteger streamToken; // ivar: _streamToken
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // ivar: _videoEnabled
@property (nonatomic) NSInteger videoPriority; // ivar: _videoPriority


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToParticipant:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConversationParticipant:(id)arg0 ;
-(id)initWithIdentifier:(NSUInteger)arg0 handle:(id)arg1 ;
-(id)initWithIdentifier:(NSUInteger)arg0 handle:(id)arg1 senderCorrelationIdentifier:(id)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif