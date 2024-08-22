// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIMETRICSDOMCHANGEQUEUE_H
#define SKUIMETRICSDOMCHANGEQUEUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SKUIMetricsDOMChangeQueue : NSObject {
    NSMutableArray *_storage;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;


-(id)init;
-(id)oldestPendingChange;
-(void)addPendingChange:(id)arg0 ;


@end


#endif