// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCONVERSATIONPARTICIPANTCAPABILITIES_H
#define TUCONVERSATIONPARTICIPANTCAPABILITIES_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TUConversationParticipantCapabilities : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic, getter=isGFTDowngradeToOneToOneAvailable) BOOL gftDowngradeToOneToOneAvailable; // ivar: _gftDowngradeToOneToOneAvailable
@property (nonatomic, getter=isGondolaCallingAvailable) BOOL gondolaCallingAvailable; // ivar: _gondolaCallingAvailable
@property (nonatomic, getter=isMirageAvailable) BOOL mirageAvailable; // ivar: _mirageAvailable
@property (nonatomic, getter=isMomentsAvailable) BOOL momentsAvailable; // ivar: _momentsAvailable
@property (nonatomic, getter=isScreenSharingAvailable) BOOL screenSharingAvailable; // ivar: _screenSharingAvailable
@property (nonatomic) NSUInteger sharePlayProtocolVersion; // ivar: _sharePlayProtocolVersion
@property (nonatomic) BOOL supportsLeaveContext; // ivar: _supportsLeaveContext
@property (nonatomic, getter=isUPlusNDowngradeAvailable) BOOL uPlusNDowngradeAvailable; // ivar: _uPlusNDowngradeAvailable
@property (nonatomic, getter=isUPlusOneScreenShareAvailable) BOOL uPlusOneScreenShareAvailable; // ivar: _uPlusOneScreenShareAvailable


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCapabilities:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif