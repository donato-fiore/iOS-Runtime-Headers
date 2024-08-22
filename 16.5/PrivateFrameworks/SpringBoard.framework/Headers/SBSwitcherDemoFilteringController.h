// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWITCHERDEMOFILTERINGCONTROLLER_H
#define SBSWITCHERDEMOFILTERINGCONTROLLER_H

@class NSHashTable, NSArray;

#import <Foundation/Foundation.h>


@interface SBSwitcherDemoFilteringController : NSObject {
    NSHashTable *_observers;
}


@property (copy, nonatomic) NSArray *hiddenApplicationBundleIDs; // ivar: _hiddenApplicationBundleIDs


-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif