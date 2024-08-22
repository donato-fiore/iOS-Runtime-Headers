// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFOLDERPRESENTINGVIEWCONTROLLER_H
#define SBFOLDERPRESENTINGVIEWCONTROLLER_H

@protocol SBFolderControllerBackgroundViewDelegate, UIViewControllerAnimatedTransitioning, SBFolderPresentingViewControllerDelegate;


#import "SBNestingViewController.h"
#import "SBFolderController.h"
#import "SBFolderContainerView.h"

@interface SBFolderPresentingViewController : SBNestingViewController <SBFolderControllerBackgroundViewDelegate>



@property (nonatomic) NSUInteger backgroundEffect; // ivar: _backgroundEffect
@property (retain, nonatomic) NSObject<UIViewControllerAnimatedTransitioning> *currentFolderAnimator; // ivar: _currentFolderAnimator
@property (weak, nonatomic) NSObject<SBFolderPresentingViewControllerDelegate> *folderPresentationDelegate; // ivar: _folderPresentationDelegate
@property (readonly, nonatomic) SBFolderController *presentedFolderController;
@property (readonly, nonatomic) SBFolderContainerView *view;


-(BOOL)_canShowWhileLocked;
-(CGFloat)minimumHomeScreenScaleForFolderControllerBackgroundView:(id)arg0 ;
-(id)nestingViewController:(id)arg0 animationControllerForOperation:(NSInteger)arg1 onViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)nestingViewController:(id)arg0 interactionControllerForAnimationController:(id)arg1 ;
-(id)nestingViewController:(id)arg0 sourceViewForPresentingViewController:(id)arg1 ;
-(void)dismissPresentedFolderControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)loadView;
-(void)nestingViewController:(id)arg0 willPerformOperation:(NSInteger)arg1 onViewController:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)presentFolderController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif