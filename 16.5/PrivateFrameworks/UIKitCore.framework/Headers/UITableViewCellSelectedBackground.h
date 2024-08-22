// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITABLEVIEWCELLSELECTEDBACKGROUND_H
#define UITABLEVIEWCELLSELECTEDBACKGROUND_H

@class NSArray;


#import "UIView.h"
#import "UIVisualEffectView.h"
#import "UIColor.h"

@interface UITableViewCellSelectedBackground : UIView {
    UIVisualEffectView *_selectionEffectsView;
}


@property (nonatomic, getter=isMultiselect) BOOL multiselect; // ivar: _multiselect
@property (retain, nonatomic) UIColor *multiselectBackgroundColor; // ivar: _multiselectBackgroundColor
@property (retain, nonatomic) UIColor *noneStyleBackgroundColor; // ivar: _noneStyleBackgroundColor
@property (copy, nonatomic) NSArray *selectionEffects;
@property (nonatomic) NSInteger selectionStyle; // ivar: _selectionStyle
@property (retain, nonatomic) UIColor *selectionTintColor; // ivar: _selectionTintColor


-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)updateBackgroundColor;


@end


#endif