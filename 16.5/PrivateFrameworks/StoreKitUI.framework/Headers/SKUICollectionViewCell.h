// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICOLLECTIONVIEWCELL_H
#define SKUICOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView, UIColor;



@interface SKUICollectionViewCell : UICollectionViewCell {
    UIView *_bottomBorderView;
    NSInteger _position;
    UIView *_leftBorderView;
    UIView *_rightBorderView;
    UIView *_topBorderView;
}


@property (retain, nonatomic) UIColor *separatorColor; // ivar: _separatorColor
@property (nonatomic) UIEdgeInsets separatorInsets; // ivar: _separatorInsets
@property (nonatomic) NSInteger separatorStyle; // ivar: _separatorStyle
@property (nonatomic) UIEdgeInsets separatorWidths; // ivar: _separatorWidths
@property (nonatomic) BOOL showsCellSeparators;


-(BOOL)_showsBottomBorder;
-(BOOL)_showsLeftBorder;
-(BOOL)_showsRightBorder;
-(BOOL)_showsTopBorder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setPosition:(NSInteger)arg0 ;
-(void)_updateBorderVisibility;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif