// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIITEMBROWSECELLLAYOUT_H
#define SKUIITEMBROWSECELLLAYOUT_H

@class UIColor, NSString;


#import "SKUIItemCellLayout.h"
#import "_SKUIItemBrowseCellContentView.h"

@interface SKUIItemBrowseCellLayout : SKUIItemCellLayout {
    _SKUIItemBrowseCellContentView *_cellContentView;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
}


@property (copy, nonatomic) NSString *category;
@property (nonatomic) CGSize imageBoundingSize; // ivar: _imageBoundingSize
@property (copy, nonatomic) NSString *indexNumberString;
@property (nonatomic, getter=isLargeSpacing) BOOL largeSpacing; // ivar: _largeSpacing
@property (nonatomic) NSInteger numberOfUserRatings; // ivar: _numberOfUserRatings
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) CGFloat userRating; // ivar: _userRating


-(id)_decimalNumberFormatter;
-(id)initWithCollectionViewCell:(id)arg0 ;
-(id)initWithParentView:(id)arg0 ;
-(id)initWithTableViewCell:(id)arg0 ;
-(void)_initSKUIItemBrowseCellLayout;
-(void)_reloadUserRatingViews;
-(void)layoutForItemOfferChange;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setColoringWithColorScheme:(id)arg0 ;
-(void)setIconImage:(id)arg0 ;


@end


#endif