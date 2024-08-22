// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITABLECELLACCESSORYBUTTON_H
#define _UITABLECELLACCESSORYBUTTON_H



#import "UIButton.h"
#import "UIColor.h"

@interface _UITableCellAccessoryButton : UIButton

@property (retain, nonatomic) UIColor *accessoryTintColor; // ivar: _accessoryTintColor
@property (copy, nonatomic) id *backgroundImageProvider; // ivar: _backgroundImageProvider


-(id)initWithFrame:(struct CGRect )arg0 backgroundImageProvider:(id)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_reloadBackgroundImage;


@end


#endif