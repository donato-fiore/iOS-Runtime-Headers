// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTUIPROXIMITYTRYAGAINVIEW_H
#define VTUIPROXIMITYTRYAGAINVIEW_H

@class UIButton, UILabel, NSArray, VTPreferences;


#import "VTUIProximityView.h"
#import "VTUIProximityContainerView.h"
#import "VTUIStyle.h"

@interface VTUIProximityTryAgainView : VTUIProximityView

@property (retain, nonatomic) VTUIProximityContainerView *containerView; // ivar: _containerView
@property (readonly, nonatomic) UIButton *dismissButton; // ivar: _dismissButton
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSArray *viewConstraints; // ivar: _viewConstraints
@property (retain, nonatomic) VTPreferences *vtPrefs; // ivar: _vtPrefs
@property (retain, nonatomic) VTUIStyle *vtStyle; // ivar: _vtStyle


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupConstraintsToSize:(struct CGSize )arg0 ;
-(void)_setupViews;


@end


#endif