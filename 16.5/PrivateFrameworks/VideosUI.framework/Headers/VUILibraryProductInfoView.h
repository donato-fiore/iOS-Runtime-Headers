// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUILIBRARYPRODUCTINFOVIEW_H
#define VUILIBRARYPRODUCTINFOVIEW_H

@class UIView, NSArray;



@interface VUILibraryProductInfoView : UIView

@property (nonatomic) UIEdgeInsets footerMargin; // ivar: _footerMargin
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (copy, nonatomic) NSArray *groupedInfos; // ivar: _groupedInfos
@property (nonatomic) UIEdgeInsets headerMargin; // ivar: _headerMargin
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (copy, nonatomic) NSArray *infos; // ivar: _infos
@property (readonly, nonatomic) CGFloat interitemSpacing;
@property (readonly, nonatomic) CGFloat lineSpacing; // ivar: _lineSpacing
@property (readonly, nonatomic) NSInteger maxLineCount;
@property (copy, nonatomic) NSArray *normalizedGroupedInfos; // ivar: _normalizedGroupedInfos
@property (readonly, nonatomic) UIEdgeInsets padding;


-(CGFloat)_maxWidthForGroupInfos:(id)arg0 ;
-(CGFloat)_sectionInfoWidth;
-(NSUInteger)_columnCount;
-(id)_getNormalizedGroupedInfos;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layouCellContentView:(id)arg0 inCellBounds:(struct CGRect )arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif