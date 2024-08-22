// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINPUTSWITCHERTABLECELLSEGMENTVIEW_H
#define UIINPUTSWITCHERTABLECELLSEGMENTVIEW_H



#import "UIView.h"
#import "UIInputSwitcherTableCellBackgroundView.h"
#import "UIImageView.h"
#import "UILabel.h"

@interface UIInputSwitcherTableCellSegmentView : UIView

@property (readonly, nonatomic) UIInputSwitcherTableCellBackgroundView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (nonatomic) BOOL usesDarkTheme; // ivar: _usesDarkTheme


+(id)_fontForBiasLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;


@end


#endif