// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBDIMMINGVIEW_H
#define UIKBDIMMINGVIEW_H



#import "UIView.h"
#import "UIKBTree.h"
#import "UIKBScreenTraits.h"

@interface UIKBDimmingView : UIView {
    UIKBTree *_keyplane;
}


@property (retain, nonatomic) UIKBScreenTraits *screenTraits; // ivar: _screenTraits


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)refreshStyleForKeyplane:(id)arg0 ;


@end


#endif