// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUSEGMENTEDCOLORVIEW_H
#define TUSEGMENTEDCOLORVIEW_H

@class UIView, UIColor;



@interface TUSegmentedColorView : UIView

@property (nonatomic) NSInteger direction; // ivar: direction
@property (nonatomic, retain) UIColor *endColor; // ivar: endColor
@property (nonatomic) NSInteger numberOfSegments; // ivar: numberOfSegments
@property (nonatomic, retain) UIColor *startColor; // ivar: startColor


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif