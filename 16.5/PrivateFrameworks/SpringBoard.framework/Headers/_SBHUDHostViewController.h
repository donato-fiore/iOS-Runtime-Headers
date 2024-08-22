// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBHUDHOSTVIEWCONTROLLER_H
#define _SBHUDHOSTVIEWCONTROLLER_H

@class SBFTouchPassThroughViewController, NSMutableArray, NSMutableSet, NSString;
@protocol SBViewControllerTransitionContextDelegate, _SBHUDHostViewControllerDelegate;


#import "SBHUDController.h"

@interface _SBHUDHostViewController : SBFTouchPassThroughViewController <SBViewControllerTransitionContextDelegate>

 {
    NSMutableArray *_activeTransitionContexts;
    NSMutableSet *_presentedHUDs;
    NSMutableSet *_presentingHUDs;
    NSMutableSet *_executingDismissalHUDs;
    NSMutableSet *_presentingHUDsTransitionContexts;
    NSMutableSet *_dismissingHUDsTransitionContexts;
    SBHUDController *_HUDController;
    id<_SBHUDHostViewControllerDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_buildTransitionContextToPresentHUD:(id)arg0 dismissHUD:(id)arg1 animated:(BOOL)arg2 delegate:(id)arg3 containerView:(id)arg4 completion:(id)arg5 ;
-(id)_transitionContextMatchingHUD:(id)arg0 withinContainer:(id)arg1 ;
-(void)_executeDismissHUD:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_executePresentNewHUD:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_executeViewControllerTransitionContext:(id)arg0 ;
-(void)transitionDidFinish:(id)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif