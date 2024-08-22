// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUILEGIBILITYCONTAINERVIEW_H
#define SBUILEGIBILITYCONTAINERVIEW_H

@class UIView, UIView<_SBUILegibilityContainerContentView>, UIImage;
@protocol SBUILegibilityEngine, SBUILegibilitySettings;



@interface SBUILegibilityContainerView : UIView {
    UIView<_SBUILegibilityContainerContentView> *_drawView;
    BOOL _dirty;
}


@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (weak, nonatomic) NSObject<SBUILegibilityEngine> *legibilityEngine; // ivar: _legibilityEngine
@property (retain, nonatomic) NSObject<SBUILegibilitySettings> *legibilitySettings; // ivar: _legibilitySettings
@property (readonly, nonatomic) NSInteger options; // ivar: _options
@property (readonly, nonatomic) UIImage *processedImage; // ivar: _processedImage
@property (nonatomic) CGFloat strength; // ivar: _strength
@property (readonly, nonatomic) UIImage *strengthenedImage; // ivar: _strengthenedImage


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)_updateFilters;
-(BOOL)_usesColorFilters;
-(BOOL)_usesSecondaryColor;
-(BOOL)updateOptions:(NSInteger)arg0 ;
-(id)_contentColor;
-(id)_drawView;
-(id)buildDrawView;
-(void)_applyStrength;
-(void)_setDrawImage:(id)arg0 ;
-(void)applySettingsForLegibilityStyle:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)sizeToFit;


@end


#endif