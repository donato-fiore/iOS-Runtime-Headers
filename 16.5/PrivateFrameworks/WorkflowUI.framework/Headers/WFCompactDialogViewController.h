// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCOMPACTDIALOGVIEWCONTROLLER_H
#define WFCOMPACTDIALOGVIEWCONTROLLER_H

@class NSArray, WFDialogRequest;
@protocol WFCompactDialogViewControllerDelegate;


#import "WFCompactPlatterViewController.h"
#import "WFCompactDialogAction.h"

@interface WFCompactDialogViewController : WFCompactPlatterViewController

@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (retain, nonatomic) WFCompactDialogAction *cancelAction; // ivar: _cancelAction
@property (weak, nonatomic) NSObject<WFCompactDialogViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) WFCompactDialogAction *preferredAction; // ivar: _preferredAction
@property (readonly, nonatomic) WFDialogRequest *request; // ivar: _request


-(BOOL)allowsInteractiveDismiss;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canHandleFollowUpRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)keyCommands;
-(id)responseForInteractiveDismissal;
-(void)cancelKeyPressed;
-(void)configureActionGroupWithActions:(id)arg0 ;
-(void)doneKeyPressed;
-(void)finishWithResponse:(id)arg0 ;
-(void)finishWithResponse:(id)arg0 waitForFollowUpRequest:(BOOL)arg1 ;
-(void)handleFollowUpRequest:(id)arg0 ;
-(void)loadView;
-(void)platterInteractionRequestedDismissal;
-(void)prepareForPresentationWithCompletionHandler:(id)arg0 ;
-(void)systemDismissedBanner;


@end


#endif