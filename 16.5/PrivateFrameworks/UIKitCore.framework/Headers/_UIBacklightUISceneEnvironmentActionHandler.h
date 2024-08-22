// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBACKLIGHTUISCENEENVIRONMENTACTIONHANDLER_H
#define _UIBACKLIGHTUISCENEENVIRONMENTACTIONHANDLER_H

@class BLSBacklightFBSSceneEnvironmentActionHandler, NSString;
@protocol _UISceneBSActionResponding;

#import <Foundation/Foundation.h>


@interface _UIBacklightUISceneEnvironmentActionHandler : NSObject <_UISceneBSActionResponding>

 {
    BLSBacklightFBSSceneEnvironmentActionHandler *_fbsSceneEnvironmentDiffAction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_respondToActions:(id)arg0 forFBSScene:(id)arg1 inUIScene:(id)arg2 fromTransitionContext:(id)arg3 ;
-(id)init;


@end


#endif