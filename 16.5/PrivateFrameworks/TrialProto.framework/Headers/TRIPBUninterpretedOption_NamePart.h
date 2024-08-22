// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPBUNINTERPRETEDOPTION_NAMEPART_H
#define TRIPBUNINTERPRETEDOPTION_NAMEPART_H

@class NSString;


#import "TRIPBMessage.h"

@interface TRIPBUninterpretedOption_NamePart : TRIPBMessage

@property (nonatomic) BOOL hasIsExtension;
@property (nonatomic) BOOL hasNamePart;
@property (nonatomic) BOOL isExtension;
@property (copy, nonatomic) NSString *namePart;


+(id)descriptor;


@end


#endif