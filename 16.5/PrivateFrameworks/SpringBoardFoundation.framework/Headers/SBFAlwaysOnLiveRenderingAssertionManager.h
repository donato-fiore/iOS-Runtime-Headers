// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFALWAYSONLIVERENDERINGASSERTIONMANAGER_H
#define SBFALWAYSONLIVERENDERINGASSERTIONMANAGER_H

@class BLSAssertion;
@protocol SBFAlwaysOnLiveRenderingBLSAssertionProvider, SBFAlwaysOnLiveRenderingBLSAttributesProvider, BLSBacklightStateObservable;

#import <Foundation/Foundation.h>

#import "SBFAlwaysOnLiveRenderingAssertionWeakCollection.h"

@interface SBFAlwaysOnLiveRenderingAssertionManager : NSObject {
    BLSAssertion *_liveRenderingAssertion;
    SBFAlwaysOnLiveRenderingAssertionWeakCollection *_liveRenderingAssertionProxies;
    id<SBFAlwaysOnLiveRenderingBLSAssertionProvider> *_assertionProvider;
    id<SBFAlwaysOnLiveRenderingBLSAttributesProvider> *_attributesProvider;
    id<BLSBacklightStateObservable> *_backlight;
}




-(id)_nextLiveRenderingAssertionProxyIfAny;
-(id)acquireLiveRenderingAssertionWithReason:(id)arg0 ;
-(id)backlight;
-(id)debugDescription;
-(id)description;
-(id)initWithBacklight:(id)arg0 assertionProvider:(id)arg1 attributesProvider:(id)arg2 ;
-(void)_acquireLiveRenderingAssertionIfNeededForProxy:(id)arg0 backlight:(id)arg1 ;
-(void)_acquireLiveRenderingAssertionProxy:(id)arg0 ;
-(void)_invalidateWithReason:(id)arg0 ;
-(void)_releaseLiveRenderingAssertionProxy:(id)arg0 ;
-(void)_releaseLiveRenderingAssertionWithReason:(id)arg0 ;
-(void)assertion:(id)arg0 didCancelWithError:(id)arg1 ;
-(void)assertion:(id)arg0 didFailToAcquireWithError:(id)arg1 ;
-(void)backlight:(id)arg0 didChangeAlwaysOnEnabled:(BOOL)arg1 ;
-(void)backlight:(id)arg0 didCompleteUpdateToState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif