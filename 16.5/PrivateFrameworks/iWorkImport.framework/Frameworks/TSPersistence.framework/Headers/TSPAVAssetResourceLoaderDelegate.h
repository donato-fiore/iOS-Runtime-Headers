// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPAVASSETRESOURCELOADERDELEGATE_H
#define TSPAVASSETRESOURCELOADERDELEGATE_H

@class NSString;
@protocol AVAssetResourceLoaderDelegate, OS_dispatch_queue, TSUReadChannel;

#import <Foundation/Foundation.h>

#import "TSPData.h"

@interface TSPAVAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>

 {
    TSPData *_data;
    NSInteger _dataLength;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_requestHandlingQueue;
    id<TSUReadChannel> *_readChannel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldDisableEntireLengthAvailableOnDemand;
-(BOOL)resourceLoader:(id)arg0 shouldWaitForLoadingOfRequestedResource:(id)arg1 ;
-(id)delegateQueue;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(void)_provideContentInformationToLoadingRequest:(id)arg0 ;
-(void)_provideDataToLoadingRequest:(id)arg0 ;
-(void)_provideNextDataBlockToLoadingRequest:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)resourceLoader:(id)arg0 didCancelLoadingRequest:(id)arg1 ;


@end


#endif