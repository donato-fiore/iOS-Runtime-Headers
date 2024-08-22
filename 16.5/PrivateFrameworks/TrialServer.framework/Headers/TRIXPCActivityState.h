// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIXPCACTIVITYSTATE_H
#define TRIXPCACTIVITYSTATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIXPCActivityState : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger capabilities; // ivar: _capabilities
@property (readonly, nonatomic) NSUInteger futureCompletionStatus; // ivar: _futureCompletionStatus


+(id)xPCActivityStateWithFutureCompletionStatus:(NSUInteger)arg0 capabilities:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToXPCActivityState:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementCapabilities:(NSUInteger)arg0 ;
-(id)copyWithReplacementFutureCompletionStatus:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithFutureCompletionStatus:(NSUInteger)arg0 capabilities:(NSUInteger)arg1 ;


@end


#endif