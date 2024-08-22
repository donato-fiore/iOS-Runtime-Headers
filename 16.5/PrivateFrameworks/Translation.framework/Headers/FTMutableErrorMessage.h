// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEERRORMESSAGE_H
#define FTMUTABLEERRORMESSAGE_H

@class NSString;


#import "FTErrorMessage.h"

@interface FTMutableErrorMessage : FTErrorMessage

@property (nonatomic) unsigned int error_code;
@property (copy, nonatomic) NSString *reason;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif