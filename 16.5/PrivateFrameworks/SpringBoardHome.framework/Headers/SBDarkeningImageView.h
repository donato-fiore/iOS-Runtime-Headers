// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDARKENINGIMAGEVIEW_H
#define SBDARKENINGIMAGEVIEW_H

@class UIImageView, CAFilter;



@interface SBDarkeningImageView : UIImageView {
    CAFilter *_multiplyFilter;
}


@property (nonatomic) CGFloat brightness; // ivar: _brightness


-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif