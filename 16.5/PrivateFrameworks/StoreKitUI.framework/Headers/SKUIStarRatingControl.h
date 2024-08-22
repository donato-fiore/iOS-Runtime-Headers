// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISTARRATINGCONTROL_H
#define SKUISTARRATINGCONTROL_H

@class UIControl, UIImageView, UIImage;



@interface SKUIStarRatingControl : UIControl {
    NSInteger _previousUserRating;
    UIImageView *_emptyStarsImageView;
    UIImageView *_filledStarsImageView;
}


@property (retain, nonatomic) UIImage *emptyStarsImage;
@property (retain, nonatomic) UIImage *filledStarsImage;
@property (nonatomic) float starSpacing; // ivar: _starSpacing
@property (nonatomic) float starWidth; // ivar: _starWidth
@property (nonatomic) NSInteger userRating; // ivar: _userRating


-(BOOL)_isRTL;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_unfilledStarsMinX;
-(CGFloat)_unfilledStarsWidth;
-(NSUInteger)_firstStar;
-(NSUInteger)_lastStar;
-(NSUInteger)_ratingForUIDirection:(NSUInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateUserRatingWithTouch:(id)arg0 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif