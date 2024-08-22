// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUITRENDINGSEARCHPROVIDER_H
#define SKUITRENDINGSEARCHPROVIDER_H

@class NSOperationQueue, NSMutableArray, NSOperation;

#import <Foundation/Foundation.h>

#import "SKUITrendingSearchPage.h"
#import "SKUIClientContext.h"

@interface SKUITrendingSearchProvider : NSObject

@property (retain, nonatomic) SKUITrendingSearchPage *cachedSearchPage; // ivar: _cachedSearchPage
@property (readonly, nonatomic) NSOperationQueue *callbackQueue;
@property (readonly, weak, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) NSMutableArray *pendingCompletionBlocks; // ivar: _pendingCompletionBlocks
@property (retain, nonatomic) NSOperation *runningRequestOperation; // ivar: _runningRequestOperation


-(id)initWithClientContext:(id)arg0 ;
-(id)requestOperationWithPageURL:(id)arg0 completionBlock:(id)arg1 ;
-(void)clearCache;
-(void)dealloc;
-(void)requestTrendingSearchPageWithURL:(id)arg0 ;
-(void)trendingSearchPageWithURL:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif