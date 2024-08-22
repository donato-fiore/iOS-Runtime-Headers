// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSCHEMEACTION_H
#define ICSCHEMEACTION_H

@class NSString;


#import "ICAction.h"
#import "ICScheme.h"

@interface ICSchemeAction : ICAction

@property (readonly, nonatomic, getter=isCallbackAction) BOOL callbackAction;
@property (readonly, nonatomic) NSString *formatString;
@property (readonly, weak, nonatomic) ICScheme *scheme; // ivar: _scheme


-(id)defersCompletionUntilReturn;
-(id)formatKeys;
-(id)initWithDefinition:(id)arg0 scheme:(id)arg1 ;
// -(void)performActionWithInput:(id)arg0 parameters:(id)arg1 userInterface:(id)arg2 successHandler:(id)arg3 errorHandler:(unk)arg4  ;


@end


#endif