// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSHORTCUTICONEDITORVIEWCONTROLLER_H
#define WFSHORTCUTICONEDITORVIEWCONTROLLER_H

@class UIViewController;
@protocol WFShortcutIconEditorViewControllerDelegate;



@interface WFShortcutIconEditorViewController : UIViewController {
    ? workflow;
}


@property (nonatomic, weak) NSObject<WFShortcutIconEditorViewControllerDelegate> *delegate; // ivar: delegate
@property (nonatomic) BOOL showsDoneButton; // ivar: showsDoneButton


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithWorkflow:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif