// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCLOUDKITWEBSERVICETASK_H
#define WFCLOUDKITWEBSERVICETASK_H

@class NSURLSessionTask, NSOperationQueue;


#import "WFCloudKitTask.h"

@interface WFCloudKitWebServiceTask : WFCloudKitTask

@property (retain, nonatomic) NSURLSessionTask *dataTask; // ivar: _dataTask
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue


-(id)init;
-(void)cancel;


@end


#endif