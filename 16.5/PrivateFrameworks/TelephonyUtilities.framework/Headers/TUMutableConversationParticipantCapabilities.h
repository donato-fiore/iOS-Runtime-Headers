// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUMUTABLECONVERSATIONPARTICIPANTCAPABILITIES_H
#define TUMUTABLECONVERSATIONPARTICIPANTCAPABILITIES_H



#import "TUConversationParticipantCapabilities.h"

@interface TUMutableConversationParticipantCapabilities : TUConversationParticipantCapabilities

@property (nonatomic, getter=isGFTDowngradeToOneToOneAvailable) BOOL gftDowngradeToOneToOneAvailable;
@property (nonatomic, getter=isGondolaCallingAvailable) BOOL gondolaCallingAvailable;
@property (nonatomic, getter=isMirageAvailable) BOOL mirageAvailable;
@property (nonatomic, getter=isMomentsAvailable) BOOL momentsAvailable;
@property (nonatomic, getter=isScreenSharingAvailable) BOOL screenSharingAvailable;
@property (nonatomic) NSUInteger sharePlayProtocolVersion;
@property (nonatomic) BOOL supportsLeaveContext;
@property (nonatomic, getter=isUPlusNDowngradeAvailable) BOOL uPlusNDowngradeAvailable;
@property (nonatomic, getter=isUPlusOneScreenShareAvailable) BOOL uPlusOneScreenShareAvailable;




@end


#endif