// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICRADIOCONTENTREFERENCE_H
#define ICRADIOCONTENTREFERENCE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICRadioContentReference : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger contentType;
@property (copy, nonatomic) NSString *playbackAuthorizationToken; // ivar: _playbackAuthorizationToken


+(BOOL)supportsSecureCoding;
+(id)storeItemWithIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)matchDictionaryWithSubscriptionStatus:(id)arg0 ;
-(id)rawContentDictionaryWithSubscriptionStatus:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif