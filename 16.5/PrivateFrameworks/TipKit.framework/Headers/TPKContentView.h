// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPKCONTENTVIEW_H
#define TPKCONTENTVIEW_H

@class UITraitCollection, UIImageView, UIColor, UIVisualEffect;


#import "TPKBaseContentView.h"

@interface TPKContentView : TPKBaseContentView {
    ? preferredTraitCollection;
    ? displayBottomSeparator;
    ? imageProxy;
}


@property (nonatomic, retain) UITraitCollection *_preferredTraitCollection;
@property (nonatomic) BOOL displaysBottomSeparator;
@property (nonatomic, readonly) UIImageView *iconImageView;
@property (nonatomic, retain) UIColor *preferredActionTintColor;
@property (nonatomic, retain) UIColor *preferredIconImageTintColor;
@property (nonatomic) CGSize preferredMicaLayerSize;
@property (nonatomic, retain) UIVisualEffect *visualEffect;


+(id)SiriIconWithTraitCollection:(id)arg0 ;
+(id)TipsIconWithTraitCollection:(id)arg0 ;
+(struct CGSize )defaultMicaSize;
-(id)createHostingView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithController:(id)arg0 content:(id)arg1 ;
-(id)initWithReusableTipView:(id)arg0 ;
-(void)bottomSeperatorNeedsUpdate;
-(void)monitorDeviceOrientationChanges;
-(void)setupHostingViewWithController:(id)arg0 content:(id)arg1 ;
-(void)updateDisplaysBottomSeparator:(BOOL)arg0 ;
-(void)updatePreferredTraitCollection:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif