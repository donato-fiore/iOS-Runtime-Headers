// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTUREKEYLINECOLORVALIDATOR_H
#define SBSYSTEMAPERTUREKEYLINECOLORVALIDATOR_H

@class NSString;
@protocol PTSettingsKeyObserver;

#import <Foundation/Foundation.h>

#import "SBSystemApertureSettings.h"

@interface SBSystemApertureKeyLineColorValidator : NSObject <PTSettingsKeyObserver>

 {
    SBSystemApertureSettings *_settings;
    *CGColorSpace _labColorSpace;
    *CGColorSpace _rgbColorSpace;
    *CGColorTransform _colorTransformToLAB;
    *CGColorTransform _colorTransformToRGB;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)validateKeyLineColor:(id)arg0 ;
-(void)_applySettingsValues;
-(void)dealloc;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif