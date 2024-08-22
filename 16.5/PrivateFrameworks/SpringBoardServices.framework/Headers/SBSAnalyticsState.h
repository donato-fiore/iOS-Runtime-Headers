// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSANALYTICSSTATE_H
#define SBSANALYTICSSTATE_H

@class NSDictionary, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBSAnalyticsState : NSObject <BSDescriptionProviding>

 {
    NSDictionary *_payload;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


+(id)withTimestamp:(CGFloat)arg0 ;
+(id)withTimestamp:(CGFloat)arg0 payload:(id)arg1 ;
-(id)coreAnalyticsRepresentation;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 payload:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif