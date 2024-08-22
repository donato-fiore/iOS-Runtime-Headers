// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKEYWINDOWEVALUATOR_H
#define _UIKEYWINDOWEVALUATOR_H

@class NSString;
@protocol BSDebugDescriptionProviding, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "_UIKeyWindowSceneStack.h"
#import "UIWindow.h"

@interface _UIKeyWindowEvaluator : NSObject <BSDebugDescriptionProviding>

 {
    NSUInteger _countOfFBSSceneBackedScenesByShiftedIdiom;
    NSUInteger _defaultEvaluationStrategyByShiftedIdiom;
    _UIKeyWindowSceneStack *_keyWindowSceneStack;
    _UIKeyWindowSceneStack *_excludedSceneStack;
    UIWindow *_applicationKeyWindow;
    id<BSInvalidatable> *_stateCaptureToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedEvaluator;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;


@end


#endif