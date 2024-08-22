// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISIMPLECOLLECTIONVIEWCELL_H
#define SKUISIMPLECOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView;



@interface SKUISimpleCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *contentChildView; // ivar: _contentChildView
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets


-(void)applyLayoutAttributes:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif