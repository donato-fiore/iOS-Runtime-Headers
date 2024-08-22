// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFALWAYSONLIVERENDERINGASSERTIONWEAKCOLLECTION_H
#define SBFALWAYSONLIVERENDERINGASSERTIONWEAKCOLLECTION_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface SBFAlwaysOnLiveRenderingAssertionWeakCollection : NSObject {
    NSHashTable *_assertions;
}




-(BOOL)isEmpty;
-(NSInteger)count;
-(id)init;
-(id)mostRecentlyCreatedValidAssertion;
-(void)addAssertion:(id)arg0 ;
-(void)invalidateAll;
-(void)removeAll;
-(void)removeAssertion:(id)arg0 ;


@end


#endif