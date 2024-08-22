// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPBONEOFDESCRIPTORPROTO_H
#define TRIPBONEOFDESCRIPTORPROTO_H

@class NSString;


#import "TRIPBMessage.h"
#import "TRIPBOneofOptions.h"

@interface TRIPBOneofDescriptorProto : TRIPBMessage

@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasOptions;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) TRIPBOneofOptions *options;


+(id)descriptor;


@end


#endif