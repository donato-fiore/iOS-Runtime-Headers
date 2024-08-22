// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFALWAYSONLIVERENDERINGASSERTION_H
#define SBFALWAYSONLIVERENDERINGASSERTION_H

@class NSString, NSDate;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBFAlwaysOnLiveRenderingAssertion : NSObject <BSInvalidatable>

 {
    id *_invalidationHandler;
    NSString *_reason;
    NSDate *_createdAt;
    BOOL _valid;
    CGFloat _timeout;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isValid;
-(id)createdAt;
-(id)initWithReason:(id)arg0 invalidationHandler:(id)arg1 ;
-(id)initWithReason:(id)arg0 timeout:(CGFloat)arg1 invalidationHandler:(id)arg2 ;
-(id)reason;
-(void)_startAutoInvalidationTimer;
-(void)dealloc;
-(void)invalidate;


@end


#endif