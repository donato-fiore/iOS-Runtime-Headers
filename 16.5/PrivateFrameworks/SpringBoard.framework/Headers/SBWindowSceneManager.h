// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBWINDOWSCENEMANAGER_H
#define SBWINDOWSCENEMANAGER_H

@class NSSet, NSString, NSMutableSet;
@protocol SBMultiDisplayUserInteractionCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "SBWindowScene.h"
#import "_SBActiveDisplayKeyboardFocusTracker.h"
#import "SBMultiDisplayUserInteractionCoordinator.h"

@interface SBWindowSceneManager : NSObject <SBMultiDisplayUserInteractionCoordinatorDelegate>



@property (readonly, nonatomic) SBWindowScene *activeDisplayWindowScene;
@property (readonly, nonatomic) SBWindowScene *activeDisplayWindowSceneFollowingKeyboard;
@property (readonly, nonatomic) SBWindowScene *activeDisplayWindowSceneFollowingUserInteraction;
@property (readonly, copy, nonatomic) NSSet *connectedWindowScenes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _SBActiveDisplayKeyboardFocusTracker *keyboardFocusTracker; // ivar: _keyboardFocusTracker
@property (readonly, nonatomic) NSMutableSet *mutableConnectedWindowScenes; // ivar: _mutableConnectedWindowScenes
@property (readonly) Class superclass;
@property (retain, nonatomic) SBMultiDisplayUserInteractionCoordinator *userInteractionCoordinator; // ivar: _userInteractionCoordinator


-(id)_embeddedDisplayWindowScene;
-(id)_validateSuggestedActiveWindowScene:(id)arg0 usingMethodology:(NSInteger)arg1 ;
-(id)embeddedDisplayWindowScene;
-(id)initWithUserInteractionCoordinator:(id)arg0 ;
-(id)windowSceneForDisplayIdentity:(id)arg0 ;
-(id)windowSceneForPersistentIdentifier:(id)arg0 ;
-(id)windowSceneForSceneHandle:(id)arg0 ;
-(id)windowSceneForSceneIdentifier:(id)arg0 ;
-(void)_sceneDidDisconnect:(id)arg0 ;
-(void)_sceneWillConnect:(id)arg0 ;


@end


#endif