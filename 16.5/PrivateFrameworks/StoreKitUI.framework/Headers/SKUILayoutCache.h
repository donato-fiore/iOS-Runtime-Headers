// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUILAYOUTCACHE_H
#define SKUILAYOUTCACHE_H

@class NSMutableArray;
@protocol OS_dispatch_queue, SKUILayoutCacheDelegate;

#import <Foundation/Foundation.h>


@interface SKUILayoutCache : NSObject {
    NSMutableArray *_batchedRequests;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_layouts;
    NSMutableArray *_requests;
}


@property (weak, nonatomic) NSObject<SKUILayoutCacheDelegate> *delegate; // ivar: _delegate


-(id)init;
-(id)layoutForIndex:(NSInteger)arg0 ;
-(id)layoutForIndex:(NSInteger)arg0 forced:(BOOL)arg1 ;
-(struct _NSRange )addLayoutRequests:(id)arg0 ;
-(struct _NSRange )populateCacheWithLayoutRequests:(id)arg0 ;
-(void)_addLayoutBatch:(id)arg0 ;
-(void)_layoutRequestsInRange:(struct _NSRange )arg0 ;
-(void)_populateCache;
-(void)commitLayoutRequests;


@end


#endif