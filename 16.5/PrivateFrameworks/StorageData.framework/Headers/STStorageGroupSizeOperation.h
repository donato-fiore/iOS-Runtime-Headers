// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSTORAGEGROUPSIZEOPERATION_H
#define STSTORAGEGROUPSIZEOPERATION_H

@class NSArray;


#import "STStorageSizeOperation.h"

@interface STStorageGroupSizeOperation : STStorageSizeOperation

@property (retain) NSArray *operations; // ivar: _operations


+(id)operationForOperations:(id)arg0 ;
-(void)cancel;
-(void)main;


@end


#endif