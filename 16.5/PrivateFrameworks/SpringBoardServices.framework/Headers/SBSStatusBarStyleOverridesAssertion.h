// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSSTATUSBARSTYLEOVERRIDESASSERTION_H
#define SBSSTATUSBARSTYLEOVERRIDESASSERTION_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBSStatusBarStyleOverridesAssertionData.h"

@interface SBSStatusBarStyleOverridesAssertion : NSObject <BSDescriptionProviding>



@property (retain, nonatomic) SBSStatusBarStyleOverridesAssertionData *assertionData; // ivar: _assertionData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isExclusive) BOOL exclusive;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) BOOL showsWhenForeground;
@property (readonly, nonatomic) NSUInteger statusBarStyleOverrides;
@property (copy, nonatomic) NSString *statusString;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;


+(id)assertionWithStatusBarStyleOverrides:(NSUInteger)arg0 forPID:(int)arg1 exclusive:(BOOL)arg2 showsWhenForeground:(BOOL)arg3 ;
+(id)backgroundLocationAssertionForPID:(int)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithStatusBarStyleOverrides:(NSUInteger)arg0 forPID:(int)arg1 exclusive:(BOOL)arg2 showsWhenForeground:(BOOL)arg3 ;
-(id)initWithStatusBarStyleOverridesAssertionData:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
// -(void)acquireWithHandler:(id)arg0 invalidationHandler:(unk)arg1  ;
// -(void)acquireWithHandler:(id)arg0 onQueue:(unk)arg1  ;
-(void)dealloc;
-(void)invalidate;


@end


#endif