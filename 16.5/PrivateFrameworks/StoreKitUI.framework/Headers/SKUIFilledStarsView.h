// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIFILLEDSTARSVIEW_H
#define SKUIFILLEDSTARSVIEW_H

@class UIView, NSMutableArray;



@interface SKUIFilledStarsView : UIView {
    NSMutableArray *_starViews;
}




-(id)_starImageViewWithImage:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupStars;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif