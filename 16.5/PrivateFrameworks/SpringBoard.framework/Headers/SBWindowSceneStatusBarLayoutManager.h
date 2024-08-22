// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBWINDOWSCENESTATUSBARLAYOUTMANAGER_H
#define SBWINDOWSCENESTATUSBARLAYOUTMANAGER_H

@class NSMutableOrderedSet, NSMutableDictionary, NSMutableSet, NSString;
@protocol BSDescriptionProviding, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBWindowScene.h"

@interface SBWindowSceneStatusBarLayoutManager : NSObject <BSDescriptionProviding>

 {
    NSMutableOrderedSet *_windowLevelOverrideReasons;
    NSMutableDictionary *_windowLevelOverrideMap;
    NSMutableDictionary *_edgeInsetsDictionary;
    NSMutableSet *_activeLayoutLayers;
    NSMutableDictionary *_orientationWindowDictionary;
    CGFloat _defaultWindowLevel;
    SBWindowScene *_windowScene;
    id<BSInvalidatable> *_stateCaptureAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIEdgeInsets statusBarEdgeInsets;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger topmostActiveLayoutLayer;


-(BOOL)statusBarOrientationShouldFollowWindow:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithWindowScene:(id)arg0 ;
-(id)orientationWindowForLayoutLayer:(NSUInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_applyEdgeInsetsToStatusBar;
-(void)_updateStatusBarOrientationForTopMostActiveLayer;
-(void)_updateWindowLevel;
-(void)addActiveLayoutLayer:(NSUInteger)arg0 ;
-(void)removeActiveLayoutLayer:(NSUInteger)arg0 ;
-(void)removeWindowLevelOverrideReason:(id)arg0 ;
-(void)setDefaultWindowLevel:(CGFloat)arg0 ;
-(void)setOrientationWindow:(id)arg0 forStatusBarLayoutLayer:(NSUInteger)arg1 ;
-(void)setWindowLevel:(CGFloat)arg0 forOverrideReason:(id)arg1 ;


@end


#endif