// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFOOPCONTROLLEREXITINGSTATE_H
#define WFOOPCONTROLLEREXITINGSTATE_H

@class NSString;
@protocol WFState;


#import "WFOOPControllerState.h"

@interface WFOOPControllerExitingState : WFOOPControllerState <WFState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canTransitionToState:(id)arg0 ;
-(NSUInteger)stage;


@end


#endif