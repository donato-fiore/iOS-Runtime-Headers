// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIMEDIASOCIALSUGGESTEDHANDLESOPERATION_H
#define SKUIMEDIASOCIALSUGGESTEDHANDLESOPERATION_H

@class SSVComplexOperation, NSLock, NSArray;


#import "SKUIClientContext.h"

@interface SKUIMediaSocialSuggestedHandlesOperation : SSVComplexOperation {
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    id *_outputBlock;
    NSArray *_words;
}


@property (copy) id *outputBlock;
@property (copy) NSArray *words;


-(id)initWithClientContext:(id)arg0 ;
-(void)main;


@end


#endif