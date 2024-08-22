// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICATEGORYTABLEVIEWCELL_H
#define SKUICATEGORYTABLEVIEWCELL_H

@class UITableViewCell, UIView;



@interface SKUICategoryTableViewCell : UITableViewCell {
    UIView *_separatorView;
    BOOL _layoutNeedsLayout;
}


@property (nonatomic) CGSize expectedImageSize; // ivar: _expectedImageSize


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif