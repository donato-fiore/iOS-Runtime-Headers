// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPBENUMDESCRIPTORPROTO_ENUMRESERVEDRANGE_H
#define TRIPBENUMDESCRIPTORPROTO_ENUMRESERVEDRANGE_H



#import "TRIPBMessage.h"

@interface TRIPBEnumDescriptorProto_EnumReservedRange : TRIPBMessage

@property (nonatomic) int end;
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) BOOL hasStart;
@property (nonatomic) int start;


+(id)descriptor;


@end


#endif