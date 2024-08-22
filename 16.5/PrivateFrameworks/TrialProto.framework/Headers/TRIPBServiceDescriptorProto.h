// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPBSERVICEDESCRIPTORPROTO_H
#define TRIPBSERVICEDESCRIPTORPROTO_H

@class NSMutableArray, NSString;


#import "TRIPBMessage.h"
#import "TRIPBServiceOptions.h"

@interface TRIPBServiceDescriptorProto : TRIPBMessage

@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasOptions;
@property (retain, nonatomic) NSMutableArray *methodArray;
@property (readonly, nonatomic) NSUInteger methodArray_Count;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) TRIPBServiceOptions *options;


+(id)descriptor;


@end


#endif