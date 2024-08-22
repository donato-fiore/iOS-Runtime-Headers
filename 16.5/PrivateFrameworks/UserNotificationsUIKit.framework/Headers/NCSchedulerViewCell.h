// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCSCHEDULERVIEWCELL_H
#define NCSCHEDULERVIEWCELL_H

@class UICollectionViewCell, UILabel, UIDatePicker, NSLayoutConstraint, UIView;
@protocol NCSchedulerViewCellDelegate;


#import "NCSymbolButton.h"

@interface NCSchedulerViewCell : UICollectionViewCell {
    NCSymbolButton *_button;
    UILabel *_label;
    UIDatePicker *_datePicker;
    NSLayoutConstraint *_backgroundViewTopConstraint;
    NSLayoutConstraint *_backgroundViewBottomConstraint;
    NSLayoutConstraint *_labelLeadingConstraint;
    NSLayoutConstraint *_labelTrailingConstraint;
    UIView *_topCornersView;
    UIView *_backgroundView;
    UIView *_bottomCornersView;
    UIView *_bottomLineView;
}


@property (weak, nonatomic) NSObject<NCSchedulerViewCellDelegate> *delegate; // ivar: _delegate


+(CGFloat)_widthForHour:(NSUInteger)arg0 ;
+(CGFloat)preferredHeightForText:(id)arg0 width:(CGFloat)arg1 ;
+(id)_drawingContext;
+(id)_font;
+(id)reuseIdentifier;
-(CGFloat)_buttonSymbolSize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_buttonPressed:(id)arg0 ;
-(void)_timeChanged:(id)arg0 ;
-(void)configureWithSymbolName:(id)arg0 symbolColor:(id)arg1 title:(id)arg2 timeOfDay:(id)arg3 delegate:(id)arg4 top:(BOOL)arg5 bottom:(BOOL)arg6 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif