// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLKROUNDEDCORNERLABEL_H
#define TLKROUNDEDCORNERLABEL_H

@class UIView;


#import "TLKView.h"
#import "TLKLabel.h"

@interface TLKRoundedCornerLabel : TLKView

@property (retain, nonatomic) UIView *borderView; // ivar: _borderView
@property (retain, nonatomic) TLKLabel *label; // ivar: _label
@property (nonatomic) NSUInteger sizeConfiguration; // ivar: _sizeConfiguration


-(BOOL)allowsVibrancy;
-(id)initWithProminence:(NSUInteger)arg0 ;
-(struct CGSize )effectiveLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateFont;


@end


#endif