// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTEXTUALACTIONCALENDAREVENTDESCRIPTOR_H
#define WFCONTEXTUALACTIONCALENDAREVENTDESCRIPTOR_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFContextualActionCalendarEventDescriptor : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *eventIdentifier; // ivar: _eventIdentifier
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventIdentifier:(id)arg0 uniqueIdentifier:(id)arg1 title:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif