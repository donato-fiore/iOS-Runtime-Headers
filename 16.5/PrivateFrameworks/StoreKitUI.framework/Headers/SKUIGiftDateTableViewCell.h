// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIGIFTDATETABLEVIEWCELL_H
#define SKUIGIFTDATETABLEVIEWCELL_H

@class UITableViewCell, UIView, UIImageView, UIDatePicker, UILabel, NSDate, NSString;
@protocol SKUIGiftDateTableViewCellDelegate;


#import "SKUIGiftConfiguration.h"

@interface SKUIGiftDateTableViewCell : UITableViewCell {
    UIView *_bottomBorderView;
    UIImageView *_checkmarkView;
    UIDatePicker *_datePicker;
    UILabel *_labelLabel;
    UILabel *_placeholderLabel;
    UIView *_topBorderView;
}


@property (nonatomic, getter=isChecked) BOOL checked; // ivar: _checked
@property (retain, nonatomic) NSDate *date;
@property (weak, nonatomic) NSObject<SKUIGiftDateTableViewCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) SKUIGiftConfiguration *giftConfiguration; // ivar: _giftConfiguration
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL leftToRight; // ivar: _leftToRight
@property (copy, nonatomic) NSString *placeholder;


-(id)_labelForDate:(id)arg0 ;
-(id)_newLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif