// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIAPPLICATIONROTATIONFOLLOWINGWINDOW_H
#define UIAPPLICATIONROTATIONFOLLOWINGWINDOW_H



#import "UIWindow.h"

@interface UIApplicationRotationFollowingWindow : UIWindow

@property (nonatomic) BOOL limitToWindowLevel; // ivar: _limitToWindowLevel
@property (nonatomic) NSInteger priorityLevel; // ivar: _priorityLevel


+(BOOL)_isSystemWindow;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_shouldControlAutorotation;
-(BOOL)isInterfaceAutorotationDisabled;
-(id)__autorotationSanityCheckObjectFromSource:(id)arg0 selector:(SEL)arg1 ;
-(id)_initWithFrame:(struct CGRect )arg0 attached:(BOOL)arg1 ;
-(id)_initWithFrame:(struct CGRect )arg0 debugName:(id)arg1 attached:(BOOL)arg2 ;
-(id)_initWithFrame:(struct CGRect )arg0 debugName:(id)arg1 displayConfiguration:(id)arg2 ;
-(id)_initWithFrame:(struct CGRect )arg0 debugName:(id)arg1 scene:(id)arg2 attached:(BOOL)arg3 ;
-(id)_initWithFrame:(struct CGRect )arg0 debugName:(id)arg1 windowScene:(id)arg2 ;
-(id)_topMostWindow;
-(id)init;
-(id)initWithWindowScene:(id)arg0 ;
-(void)_commonApplicationRotationFollowingWindowInit;
-(void)_handleStatusBarOrientationChange:(id)arg0 ;
-(void)applicationWindow:(id)arg0 didRotateWithOrientation:(NSInteger)arg1 duration:(CGFloat)arg2 ;


@end


#endif