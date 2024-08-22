// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFBACKDROPLEGIBILITYSETTINGSPROVIDER_H
#define SBFBACKDROPLEGIBILITYSETTINGSPROVIDER_H

@class _UIBackdropView, NSString, _UILegibilitySettings;
@protocol _UIBackdropViewObserver, SBFLegibilitySettingsProvider, SBFLegibilitySettingsProviderDelegate;

#import <Foundation/Foundation.h>


@interface SBFBackdropLegibilitySettingsProvider : NSObject <_UIBackdropViewObserver, SBFLegibilitySettingsProvider>

 {
    _UIBackdropView *_backdropView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFLegibilitySettingsProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly) Class superclass;


-(id)initWithBackdropView:(id)arg0 ;
-(void)backdropViewDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif