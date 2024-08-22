// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINPUTSWITCHERTABLEVIEW_H
#define UIINPUTSWITCHERTABLEVIEW_H



#import "UITableView.h"
#import "UIKeyboardMenuView.h"

@interface UIInputSwitcherTableView : UITableView

@property (nonatomic) UIKeyboardMenuView *menu; // ivar: _menu


-(void)deselectRowAtIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)selectRowAtIndexPath:(id)arg0 animated:(BOOL)arg1 scrollPosition:(NSInteger)arg2 ;


@end


#endif