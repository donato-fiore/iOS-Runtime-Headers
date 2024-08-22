// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIAPPLICATIONROTATIONFOLLOWINGCONTROLLER_H
#define UIAPPLICATIONROTATIONFOLLOWINGCONTROLLER_H



#import "UIViewController.h"

@interface UIApplicationRotationFollowingController : UIViewController

@property (nonatomic) BOOL sizesWindowToScene; // ivar: _sizesWindowToScene


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSInteger)_preferredInterfaceOrientationGivenCurrentOrientation:(NSInteger)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)__autorotationSanityCheckObjectFromSource:(id)arg0 selector:(SEL)arg1 ;
-(id)_topMostWindow;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)window:(id)arg0 setupWithInterfaceOrientation:(NSInteger)arg1 ;


@end


#endif