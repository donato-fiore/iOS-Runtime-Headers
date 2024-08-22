// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONTABLEINDEXOVERLAYSELECTIONVIEWCOLLECTIONVIEWCELL_H
#define _UICOLLECTIONTABLEINDEXOVERLAYSELECTIONVIEWCOLLECTIONVIEWCELL_H

@class NSString;


#import "UICollectionViewCell.h"
#import "UIButton.h"
#import "UILabel.h"

@interface _UICollectionTableIndexOverlaySelectionViewCollectionViewCell : UICollectionViewCell {
    CGFloat _rightMargin;
    BOOL _rightMarginAdjusted;
    id *_tapTarget;
    SEL _tapAction;
}


@property (readonly) UIButton *button; // ivar: _button
@property (readonly) UILabel *label;
@property (nonatomic) CGFloat rightMargin;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif