// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLKOBJECT_H
#define TLKOBJECT_H

@class NSString;
@protocol TLKObservable, TLKObserver;

#import <Foundation/Foundation.h>


@interface TLKObject : NSObject <TLKObservable, TLKObserver>



@property (nonatomic) NSInteger batchUpdateCount; // ivar: batchUpdateCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) NSObject<TLKObserver> *observer; // ivar: observer
@property (readonly) Class superclass;


-(void)propertiesDidChange;


@end


#endif