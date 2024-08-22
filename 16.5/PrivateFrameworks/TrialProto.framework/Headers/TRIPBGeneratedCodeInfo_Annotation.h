// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPBGENERATEDCODEINFO_ANNOTATION_H
#define TRIPBGENERATEDCODEINFO_ANNOTATION_H

@class NSString;


#import "TRIPBMessage.h"
#import "TRIPBInt32Array.h"

@interface TRIPBGeneratedCodeInfo_Annotation : TRIPBMessage

@property (nonatomic) int begin;
@property (nonatomic) int end;
@property (nonatomic) BOOL hasBegin;
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) BOOL hasSourceFile;
@property (retain, nonatomic) TRIPBInt32Array *pathArray;
@property (readonly, nonatomic) NSUInteger pathArray_Count;
@property (copy, nonatomic) NSString *sourceFile;


+(id)descriptor;


@end


#endif