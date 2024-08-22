// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFADDTOSIRIVIEWCONTROLLER_H
#define WFADDTOSIRIVIEWCONTROLLER_H

@class UIViewController, WFDatabase, WFWorkflow;
@protocol _TtP10WorkflowUI43AddToSiriSwiftHostingViewControllerDelegate_, WFAddToSiriViewControllerDelegate;


#import "_TtC10WorkflowUI35AddToSiriSwiftHostingViewController.h"

@interface WFAddToSiriViewController : UIViewController <_TtP10WorkflowUI43AddToSiriSwiftHostingViewControllerDelegate_>



@property (retain, nonatomic) WFDatabase *database; // ivar: _database
@property (weak, nonatomic) NSObject<WFAddToSiriViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) _TtC10WorkflowUI35AddToSiriSwiftHostingViewController *hostedAddToSiriController; // ivar: _hostedAddToSiriController
@property (readonly, nonatomic) WFWorkflow *workflow; // ivar: _workflow


-(id)initWithWorkflow:(id)arg0 database:(id)arg1 ;
-(void)addToSiriDidCancelWithViewController:(id)arg0 ;
-(void)addToSiriWithViewController:(id)arg0 createdShortcut:(id)arg1 ;
-(void)addToSiriWithViewController:(id)arg0 deletedShortcut:(id)arg1 ;
-(void)addToSiriWithViewController:(id)arg0 savedShortcut:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif