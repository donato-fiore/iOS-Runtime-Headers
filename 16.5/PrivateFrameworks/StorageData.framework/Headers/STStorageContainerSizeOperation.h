// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSTORAGECONTAINERSIZEOPERATION_H
#define STSTORAGECONTAINERSIZEOPERATION_H

@protocol STContainer;


#import "STStorageSizeOperation.h"

@interface STStorageContainerSizeOperation : STStorageSizeOperation

@property (retain) NSObject<STContainer> *container; // ivar: _container


+(id)operationForContainer:(id)arg0 ;
-(void)main;


@end


#endif