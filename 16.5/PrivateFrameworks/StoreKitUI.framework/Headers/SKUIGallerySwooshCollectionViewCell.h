// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIGALLERYSWOOSHCOLLECTIONVIEWCELL_H
#define SKUIGALLERYSWOOSHCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIColor, UILabel, UIView, NSString;



@interface SKUIGallerySwooshCollectionViewCell : UICollectionViewCell {
    UIColor *_titleColor;
    UILabel *_titleLabel;
}


@property (retain, nonatomic) UIView *contentChildView; // ivar: _contentChildView
@property (copy, nonatomic) NSString *title;


-(void)layoutSubviews;
-(void)setColoringWithColorScheme:(id)arg0 ;


@end


#endif