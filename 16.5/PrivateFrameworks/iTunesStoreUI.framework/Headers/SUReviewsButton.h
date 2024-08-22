// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUREVIEWSBUTTON_H
#define SUREVIEWSBUTTON_H

@class UIImageView, NSString;


#import "SUGradientButton.h"

@interface SUReviewsButton : SUGradientButton {
    UIImageView *_disclosureView;
}


@property (nonatomic) float userRating; // ivar: _userRating
@property (nonatomic) NSInteger userRatingCount; // ivar: _userRatingCount
@property (retain, nonatomic) NSString *userRatingCountString; // ivar: _userRatingCountString


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )contentRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )imageRectForContentRect:(struct CGRect )arg0 ;
-(struct CGRect )titleRectForContentRect:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reloadView;


@end


#endif