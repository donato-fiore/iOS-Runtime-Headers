// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFROWTEMPLATEVALUE_H
#define WFROWTEMPLATEVALUE_H

@class NSDate, NSNumber, NSString, NSUnit;
@protocol NSSecureCoding, NSObject><NSCopying><NSCoding;

#import <Foundation/Foundation.h>


@interface WFRowTemplateValue : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDate *anotherDate; // ivar: _anotherDate
@property (retain, nonatomic) NSNumber *boolean; // ivar: _boolean
@property (retain, nonatomic) NSNumber *byteCountUnit; // ivar: _byteCountUnit
@property (retain, nonatomic) NSNumber *calendarUnit; // ivar: _calendarUnit
@property (readonly, nonatomic) NSInteger comparisonOperator; // ivar: _comparisonOperator
@property (readonly, nonatomic) Class contentItemClass; // ivar: _contentItemClass
@property (readonly, nonatomic) NSString *contentPropertyName; // ivar: _contentPropertyName
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSString *email; // ivar: _email
@property (retain, nonatomic) NSObject<NSObject><NSCopying><NSCoding> *enumeration; // ivar: _enumeration
@property (retain, nonatomic) NSUnit *measurementUnit; // ivar: _measurementUnit
@property (retain, nonatomic) NSNumber *number; // ivar: _number
@property (retain, nonatomic) NSString *phone; // ivar: _phone
@property (readonly, nonatomic) BOOL removable; // ivar: _removable
@property (retain, nonatomic) NSString *string; // ivar: _string


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentItemClass:(Class)arg0 contentPropertyName:(id)arg1 comparisonOperator:(NSInteger)arg2 removable:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif