// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIFEATUREDCELLOVERLAYVIEW_H
#define VUIFEATUREDCELLOVERLAYVIEW_H

@class UIView, NSArray;


#import "VUIBaseView.h"
#import "VUILabel.h"

@interface VUIFeaturedCellOverlayView : VUIBaseView

@property (retain, nonatomic) UIView *appleTVChannelLogoView; // ivar: _appleTVChannelLogoView
@property (retain, nonatomic) NSArray *buttons; // ivar: _buttons
@property (retain, nonatomic) VUILabel *disclaimerLabel; // ivar: _disclaimerLabel
@property (retain, nonatomic) VUILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) VUILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) BOOL usesDefaultOverlayType; // ivar: _usesDefaultOverlayType


-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)_layoutSubviews;


@end


#endif