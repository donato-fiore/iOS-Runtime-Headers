// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUFORWARDINGTOUCHTOOLBAR_H
#define TUFORWARDINGTOUCHTOOLBAR_H

@class UIToolbar;



@interface TUForwardingTouchToolbar : UIToolbar {
    ? maxHeight;
}


@property (nonatomic) NSInteger accessibilityContainerType;
@property (nonatomic) BOOL accessibilityElementsHidden;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif