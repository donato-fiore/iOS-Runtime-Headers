// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISCREENBASEDSCENESPECIFICATION_H
#define _UISCREENBASEDSCENESPECIFICATION_H



#import "UIApplicationSceneSpecification.h"

@interface _UIScreenBasedSceneSpecification : UIApplicationSceneSpecification



-(BOOL)isInternal;
-(BOOL)isUIKitManaged;
-(Class)lifecycleMonitorClass;
-(Class)sceneSubstrateClass;
-(Class)uiSceneMinimumClass;
-(id)baseSceneComponentClassDictionary;
-(id)connectionHandlers;
-(id)disconnectionHandlers;
-(id)uiSceneSessionRole;


@end


#endif