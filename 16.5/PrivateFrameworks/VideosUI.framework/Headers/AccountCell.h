// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACCOUNTCELL_H
#define ACCOUNTCELL_H

@class PSTableCell, UIImage;



@interface AccountCell : PSTableCell

@property (retain, nonatomic) UIImage *placeHolderImage; // ivar: _placeHolderImage


+(NSInteger)cellStyle;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_profileImageDidChange:(id)arg0 ;
-(void)_updateAccountImage;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif