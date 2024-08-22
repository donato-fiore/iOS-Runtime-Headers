// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICLIGHTWEIGHTMUSICSUBSCRIPTIONSTATUSRESPONSE_H
#define ICLIGHTWEIGHTMUSICSUBSCRIPTIONSTATUSRESPONSE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICLightweightMusicSubscriptionStatus.h"

@interface ICLightweightMusicSubscriptionStatusResponse : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) ICLightweightMusicSubscriptionStatus *lightweightSubscriptionStatus; // ivar: _lightweightSubscriptionStatus


+(BOOL)supportsSecureCoding;
-(id)_initWithExtendedSubscriptionStatusResponse:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif