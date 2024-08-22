// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TAAISFETCHSUCCESS_H
#define TAAISFETCHSUCCESS_H

@class NSDate, NSString, NSUUID;
@protocol TAEventProtocol;

#import <Foundation/Foundation.h>

#import "TAAccessoryInformation.h"

@interface TAAISFetchSuccess : NSObject <TAEventProtocol>



@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) TAAccessoryInformation *info; // ivar: _info
@property (readonly, nonatomic) NSUInteger successType; // ivar: _successType
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 withAISInfo:(id)arg1 successType:(NSUInteger)arg2 date:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithOSLogCoder:(id)arg0 options:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 ;


@end


#endif