// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSDATE_H
#define VCSDATE_H

@class NSDateComponents;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VCSDate : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSDateComponents *components; // ivar: _components
@property (readonly, nonatomic) BOOL dateOnly; // ivar: _dateOnly
@property (readonly, nonatomic) BOOL floating; // ivar: _floating


+(id)dateListFromData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateByAddingDays:(NSInteger)arg0 ;
-(id)dateForEndOfDay;
-(id)dateWithTimeComponentsFromDate:(id)arg0 ;
-(id)description;
-(id)initWithDateComponents:(id)arg0 floating:(BOOL)arg1 dateOnly:(BOOL)arg2 ;
-(id)initWithDateString:(char *)arg0 ;
-(id)initWithYear:(NSInteger)arg0 month:(NSInteger)arg1 day:(NSInteger)arg2 hour:(NSInteger)arg3 minute:(NSInteger)arg4 second:(NSInteger)arg5 floating:(BOOL)arg6 dateOnly:(BOOL)arg7 ;
-(id)nsDateWithLocalTimeZone:(id)arg0 ;


@end


#endif