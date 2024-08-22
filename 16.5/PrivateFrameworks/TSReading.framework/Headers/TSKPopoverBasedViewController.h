// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKPOPOVERBASEDVIEWCONTROLLER_H
#define TSKPOPOVERBASEDVIEWCONTROLLER_H

@class UIViewController, UIView, NSString;
@protocol TSKModalShieldDelegate, UIPopoverControllerDelegate, UINavigationControllerDelegate, TSKPopoverBasedViewControllerDismissible, TSKKeyboardObserver, TSKPopoverBasedViewControllerDelegate;


#import "TSKHideOnTouchOutsideViewGestureRecognizer.h"
#import "TSKModalShieldView.h"
#import "TSKPopoverController.h"

@interface TSKPopoverBasedViewController : UIViewController <TSKModalShieldDelegate, UIPopoverControllerDelegate, UINavigationControllerDelegate, TSKPopoverBasedViewControllerDismissible, TSKKeyboardObserver>

 {
    TSKHideOnTouchOutsideViewGestureRecognizer *mHideOnTouchGestureRecognizer;
    id *mHalfHeightCloseBlock;
    BOOL mHalfHeightAnimated;
    TSKModalShieldView *mHalfHeightTapShield;
    CGRect mHalfHeightOriginalFrame;
    UIView *mHalfHeightParentView;
    BOOL mViewControllerVisible;
    BOOL mUndoManagerNotificationsRegistered;
}


@property (nonatomic) BOOL allowsOutsideTouch; // ivar: mAllowsOutsideTouch
@property (readonly, nonatomic) CGSize contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissOnUndo; // ivar: mDismissOnUndo
@property (retain, nonatomic) UIViewController *halfHeightViewController; // ivar: mHalfHeightViewController
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL imposeContentSizeOnViewControllers; // ivar: mImposeContentSizeOnViewControllers
@property (readonly, nonatomic) BOOL isPopoverGestureInFlight;
@property (readonly, retain, nonatomic) TSKPopoverController *popoverController; // ivar: mPopoverController
@property (nonatomic) NSObject<TSKPopoverBasedViewControllerDelegate> *popoverDelegate; // ivar: mPopoverDelegate
@property (retain, nonatomic) UIView *popoverToggleView; // ivar: mPopoverToggleView
@property (readonly, nonatomic) BOOL shouldHideToolbar;
@property (nonatomic) BOOL staysOpenOnOutsideTouches; // ivar: mStaysOpenOnOutsideTouches
@property (readonly) Class superclass;
@property (nonatomic) BOOL useDoneButton; // ivar: mUseDoneButton
@property (nonatomic) BOOL viewResizesWithKeyboard; // ivar: mViewResizesWithKeyboard
@property (nonatomic) BOOL wrapInNavigationController; // ivar: mWrapInNavigationController


-(BOOL)isPopoverVisible;
-(BOOL)isVisible;
-(BOOL)p_shouldResizeViewWithKeyboard;
-(BOOL)wantsDismissButton;
-(CGFloat)p_originOffsetForKeyboardFrame:(struct CGRect )arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)i_contentViewController;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)navigationBar;
-(id)p_newCloseImageBarButtonWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)p_newRootViewController;
-(id)p_outsideTouchWatchView;
-(id)p_topParentViewController;
-(struct CGRect )frameForCurrentiPhoneOrientation;
-(void)clearOutsideTouchWatchView;
-(void)closeButtonPressed;
-(void)dealloc;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)dismissPopoverAnimated:(BOOL)arg0 ;
-(void)i_configureCloseItem:(id)arg0 ;
-(void)keyboardDidHideOrUndock:(id)arg0 ;
-(void)keyboardWillHideOrUndock:(id)arg0 ;
-(void)keyboardWillShowOrDock:(id)arg0 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)outsideTouch:(id)arg0 ;
-(void)p_applicationWillEnterFullScreen:(id)arg0 ;
-(void)p_didDismissPopover:(id)arg0 ;
-(void)p_dismissFullscreenModalAnimated:(BOOL)arg0 ;
-(void)p_dismissFullscreenModalFromCloseButton;
-(void)p_dismissHalfHeight;
-(void)p_dismissHalfHeightFromCloseButton;
-(void)p_dismissPopoverAnimated:(BOOL)arg0 ;
-(void)p_informDelegateOfDidDismiss;
-(void)p_informDelegateOfWillDismiss;
-(void)p_informDelegateOfWillShow;
-(void)p_installHideOnTouchGesture;
-(void)p_keyboardWillHide:(BOOL)arg0 withNotification:(id)arg1 ;
-(void)p_registerPopoverBasedViewControllerNotifications;
-(void)p_removeHideOnTouchGesture;
-(void)p_showModalInViewController:(id)arg0 withTitle:(id)arg1 animated:(BOOL)arg2 withDoneButton:(BOOL)arg3 ;
-(void)p_willPresentPopover;
-(void)presentInRect:(struct CGRect )arg0 inView:(id)arg1 animated:(BOOL)arg2 modal:(BOOL)arg3 closeBlock:(id)arg4 ;
// -(void)presentInRect:(struct CGRect )arg0 inView:(id)arg1 animated:(BOOL)arg2 modal:(BOOL)arg3 closeBlock:(id)arg4 animations:(unk)arg5  ;
-(void)presentModallyFromBarItem:(id)arg0 viewController:(id)arg1 ;
-(void)presentModallyFromRect:(struct CGRect )arg0 inView:(id)arg1 viewController:(id)arg2 ;
-(void)presentModallyFromRect:(struct CGRect )arg0 inView:(id)arg1 viewController:(id)arg2 arrowDirection:(NSUInteger)arg3 animated:(BOOL)arg4 ;
-(void)presentModallyFromRect:(struct CGRect )arg0 inView:(id)arg1 viewController:(id)arg2 arrowDirection:(NSUInteger)arg3 animated:(BOOL)arg4 withDoneButton:(BOOL)arg5 ;
-(void)presentModallyFromRect:(struct CGRect )arg0 inView:(id)arg1 viewController:(id)arg2 arrowDirection:(NSUInteger)arg3 animated:(BOOL)arg4 withDoneButton:(BOOL)arg5 constrainToView:(BOOL)arg6 withPadding:(CGFloat)arg7 fromToolbar:(BOOL)arg8 ;
-(void)presentModallyFromRect:(struct CGRect )arg0 inView:(id)arg1 viewController:(id)arg2 withDoneButton:(BOOL)arg3 ;
-(void)presentModallyWithTitle:(id)arg0 viewController:(id)arg1 animated:(BOOL)arg2 withDoneButton:(BOOL)arg3 ;
-(void)resetOutsideTouchWatchView;
-(void)shieldViewReceivedTap;
-(void)showPopoverFromBarItem:(id)arg0 ;
-(void)showPopoverFromRect:(struct CGRect )arg0 inView:(id)arg1 ;
-(void)showPopoverFromRect:(struct CGRect )arg0 inView:(id)arg1 arrowDirection:(NSUInteger)arg2 animated:(BOOL)arg3 ;
-(void)showPopoverFromRect:(struct CGRect )arg0 inView:(id)arg1 arrowDirection:(NSUInteger)arg2 animated:(BOOL)arg3 constrainToView:(BOOL)arg4 withPadding:(CGFloat)arg5 fromToolbar:(BOOL)arg6 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif