// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUILOADGRATISELIGIBILITYOPERATION_H
#define SKUILOADGRATISELIGIBILITYOPERATION_H

@class NSOperation, NSArray;
@protocol OS_dispatch_queue;


#import "SKUIClientContext.h"

@interface SKUILoadGratisEligibilityOperation : NSOperation {
    NSArray *_bundleIDs;
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id *_outputBlock;
}


@property (copy) id *outputBlock;


-(id)_bodyData;
-(id)init;
-(id)initWithBundleIdentifiers:(id)arg0 clientContext:(id)arg1 ;
-(void)main;


@end


#endif