// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSHUTDOWNCONTEXT_H
#define SBSHUTDOWNCONTEXT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SBShutdownContext : NSObject <NSCopying>



@property (nonatomic) BOOL fromUserPowerDown; // ivar: _fromUserPowerDown
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithReason:(id)arg0 ;


@end


#endif