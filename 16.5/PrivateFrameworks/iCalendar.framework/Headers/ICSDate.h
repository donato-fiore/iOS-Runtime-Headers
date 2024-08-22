// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSDATE_H
#define ICSDATE_H

@class NSString;


#import "ICSProperty.h"

@interface ICSDate : ICSProperty

@property (retain, nonatomic) NSString *tzid;


-(BOOL)hasFloatingTimeZone;
-(BOOL)hasTimeComponent;
-(id)components;
-(id)description;
-(id)initWithValue:(id)arg0 ;
-(id)initWithYear:(NSInteger)arg0 month:(NSInteger)arg1 day:(NSInteger)arg2 ;
-(id)initWithYear:(NSInteger)arg0 month:(NSInteger)arg1 day:(NSInteger)arg2 hour:(NSInteger)arg3 minute:(NSInteger)arg4 second:(NSInteger)arg5 ;
-(id)initWithYear:(NSInteger)arg0 month:(NSInteger)arg1 day:(NSInteger)arg2 hour:(NSInteger)arg3 minute:(NSInteger)arg4 second:(NSInteger)arg5 timeZone:(id)arg6 ;
-(id)parametersToIncludeForChecksumVersion:(int)arg0 ;


@end


#endif