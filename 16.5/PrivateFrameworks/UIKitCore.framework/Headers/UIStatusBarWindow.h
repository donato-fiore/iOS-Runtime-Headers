// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTATUSBARWINDOW_H
#define UISTATUSBARWINDOW_H



#import "UIWindow.h"
#import "UIStatusBar.h"

@interface UIStatusBarWindow : UIWindow {
    UIStatusBar *_statusBar;
    NSInteger _orientation;
}




+(BOOL)_isSystemWindow;
+(struct CGRect )_convertRect:(struct CGRect )arg0 fromSceneReferenceSpaceToSceneSpaceWithOrientation:(NSInteger)arg1 ;
+(struct CGRect )_defaultStatusBarSceneReferenceBounds;
+(struct CGRect )_defaultStatusBarSceneReferenceBoundsForOrientation:(NSInteger)arg0 ;
+(struct CGRect )statusBarWindowFrame;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg0 ;
-(BOOL)_isStatusBarWindow;
-(BOOL)_shouldAdjustSizeClassesAndResizeWindow;
-(BOOL)_shouldForceTraitPropagationThroughHierarchy;
-(NSInteger)orientation;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_defaultStatusBarSceneBoundsForOrientation:(NSInteger)arg0 ;
-(struct CGRect )_statusBarFrameForOrientation:(NSInteger)arg0 ;
-(struct CGRect )statusBarWindowFrame;
-(struct UIEdgeInsets )safeAreaInsets;
-(void)_didMoveFromScene:(id)arg0 toScene:(id)arg1 ;
-(void)_rotate;
-(void)setOrientation:(NSInteger)arg0 animationParameters:(id)arg1 ;
-(void)setStatusBar:(id)arg0 ;


@end


#endif