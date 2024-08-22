// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHOMEWORKFLOWEDITORVIEWCONTROLLER_H
#define WFHOMEWORKFLOWEDITORVIEWCONTROLLER_H

@class UIViewController, WFComposeViewController, NSString;
@protocol WFComposeViewControllerDelegate, WFHomeWorkflowEditorViewControllerDelegate;



@interface WFHomeWorkflowEditorViewController : UIViewController <WFComposeViewControllerDelegate>



@property (readonly, nonatomic) WFComposeViewController *composeViewController; // ivar: _composeViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFHomeWorkflowEditorViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)preloadActionRegistryIfNeeded;
+(void)preloadHomeManager;
-(id)doneBarButtonItem;
-(id)initWithHomeWorkflow:(id)arg0 actionSetBuilder:(id)arg1 home:(id)arg2 ;
-(void)composeViewControllerRequestsDismissal:(id)arg0 forTutorial:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)didTapDone;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif