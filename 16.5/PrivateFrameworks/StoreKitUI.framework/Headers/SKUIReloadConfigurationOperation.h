// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIRELOADCONFIGURATIONOPERATION_H
#define SKUIRELOADCONFIGURATIONOPERATION_H

@class NSOperation, SSURLBag;
@protocol OS_dispatch_queue;



@interface SKUIReloadConfigurationOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id *_outputBlock;
    SSURLBag *_urlBag;
}


@property (retain) SSURLBag *URLBag;
@property (copy) id *outputBlock;


+(id)cachePath;
-(id)init;
-(void)main;


@end


#endif