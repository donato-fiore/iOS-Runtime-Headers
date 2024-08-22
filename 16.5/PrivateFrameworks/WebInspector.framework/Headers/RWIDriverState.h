// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIDRIVERSTATE_H
#define RWIDRIVERSTATE_H

@class NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RWIDriverState : NSObject <NSCopying>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (copy, nonatomic) NSSet *sessionIdentifiers; // ivar: _sessionIdentifiers


+(BOOL)isValidPayload:(id)arg0 ;
+(id)active;
+(id)decodeFromPayload:(id)arg0 ;
+(id)inactive;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)encodeToPayload:(id)arg0 ;


@end


#endif