// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFALWAYSONLIVERENDERINGBLSASSERTIONPROVIDER_H
#define SBFALWAYSONLIVERENDERINGBLSASSERTIONPROVIDER_H

@class NSMapTable, NSString;
@protocol SBFAlwaysOnLiveRenderingBLSAssertionProvider, BLSAssertionObserving;

#import <Foundation/Foundation.h>


@interface SBFAlwaysOnLiveRenderingBLSAssertionProvider : NSObject <SBFAlwaysOnLiveRenderingBLSAssertionProvider>

 {
    NSMapTable *_assertions;
}


@property (weak, nonatomic) NSObject<BLSAssertionObserving> *assertionObserver; // ivar: _assertionObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)acquiredAssertionsCount;
-(id)acquireWithExplanation:(id)arg0 attributes:(id)arg1 ;
-(id)init;
-(void)assertion:(id)arg0 didCancelWithError:(id)arg1 ;
-(void)assertionWasAcquired:(id)arg0 ;


@end


#endif