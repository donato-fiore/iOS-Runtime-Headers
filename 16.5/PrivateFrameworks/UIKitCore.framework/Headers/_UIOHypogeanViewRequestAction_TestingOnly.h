// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIOHYPOGEANVIEWREQUESTACTION_TESTINGONLY_H
#define _UIOHYPOGEANVIEWREQUESTACTION_TESTINGONLY_H

@class UIOAction;


#import "_UIOHypogeanViewRequestConfiguration.h"

@interface _UIOHypogeanViewRequestAction_TestingOnly : UIOAction

@property (readonly, nonatomic) _UIOHypogeanViewRequestConfiguration *configuration;


+(id)_overlay_viewRegistry;
-(BOOL)isPermitted;
-(id)initWithConfiguration:(id)arg0 responseHandler:(id)arg1 ;
-(void)performActionFromConnection:(id)arg0 ;


@end


#endif