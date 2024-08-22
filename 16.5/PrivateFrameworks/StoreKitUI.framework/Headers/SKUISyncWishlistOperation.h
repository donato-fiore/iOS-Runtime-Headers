// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISYNCWISHLISTOPERATION_H
#define SKUISYNCWISHLISTOPERATION_H

@class NSOperation;
@protocol OS_dispatch_queue;


#import "SKUIClientContext.h"

@interface SKUISyncWishlistOperation : NSOperation {
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id *_resultBlock;
}


@property (copy) id *resultBlock;


-(BOOL)_loadRemoteItemsForWishlist:(id)arg0 didChange:(*BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_mergeItems:(id)arg0 wishlist:(id)arg1 didChange:(*BOOL)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithClientContext:(id)arg0 ;
-(void)_sendLocalChangesForWishlist:(id)arg0 ;
-(void)main;


@end


#endif