// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFALWAYSONLIVERENDERINGASSERTIONPROVIDER_H
#define SBFALWAYSONLIVERENDERINGASSERTIONPROVIDER_H

@protocol SBFAlwaysOnLiveRenderingBLSAssertionProvider, BLSBacklightStateObservable;

#import <Foundation/Foundation.h>

#import "SBFAlwaysOnLiveRenderingAssertionWeakCollection.h"

@interface SBFAlwaysOnLiveRenderingAssertionProvider : NSObject {
    SBFAlwaysOnLiveRenderingAssertionWeakCollection *_assertions;
}


@property (retain, nonatomic) NSObject<SBFAlwaysOnLiveRenderingBLSAssertionProvider> *assertionProvider; // ivar: _assertionProvider
@property (retain, nonatomic) NSObject<BLSBacklightStateObservable> *backlight; // ivar: _backlight


+(id)sharedInstance;
-(id)_acquireLiveRenderingAssertionForScene:(id)arg0 identifier:(id)arg1 reason:(id)arg2 attributes:(id)arg3 ;
-(id)_assertionManagerForScene:(id)arg0 ;
-(id)acquireLiveRenderingAssertionForFBSScene:(id)arg0 reason:(id)arg1 ;
-(id)acquireLiveRenderingAssertionForUIScene:(id)arg0 reason:(id)arg1 ;
-(id)description;
-(id)init;
-(void)_setAssertionManager:(id)arg0 forScene:(id)arg1 ;
-(void)invalidateAllAssertions;


@end


#endif