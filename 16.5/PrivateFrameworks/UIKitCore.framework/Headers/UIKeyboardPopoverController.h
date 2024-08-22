// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDPOPOVERCONTROLLER_H
#define UIKEYBOARDPOPOVERCONTROLLER_H



#import "UIViewController.h"
#import "UIView.h"

@interface UIKeyboardPopoverController : UIViewController

@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView


-(BOOL)_canShowWhileLocked;
-(BOOL)handleHardwareKeyboardEvent:(id)arg0 ;
-(BOOL)isPresented;
-(NSInteger)overrideUserInterfaceStyle;
-(id)init;
-(struct CGSize )preferredContentSize;
-(void)viewDidLoad;


@end


#endif