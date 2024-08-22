// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHUSHORTCUTSTRIGGERVIEWACCESSORYVIEWCONTROLLER_H
#define WFHUSHORTCUTSTRIGGERVIEWACCESSORYVIEWCONTROLLER_H

@class UIViewController;
@protocol WFHUShortcutsTriggerViewAccessoryViewControllerDelegate;



@interface WFHUShortcutsTriggerViewAccessoryViewController : UIViewController

@property (readonly, nonatomic) UIViewController *accessoryPickerViewController; // ivar: _accessoryPickerViewController
@property (weak, nonatomic) NSObject<WFHUShortcutsTriggerViewAccessoryViewControllerDelegate> *delegate; // ivar: _delegate


-(id)initWithHome:(id)arg0 services:(id)arg1 ;
-(void)cancelEditor;
-(void)dismissEditor;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif