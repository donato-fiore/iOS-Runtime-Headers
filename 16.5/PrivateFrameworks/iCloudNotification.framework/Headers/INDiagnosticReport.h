// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INDIAGNOSTICREPORT_H
#define INDIAGNOSTICREPORT_H

@class NSDate, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INDiagnosticReport : NSObject <NSSecureCoding>



@property (nonatomic) BOOL disabled; // ivar: _disabled
@property (copy, nonatomic) NSDate *nextHeartbeatDate; // ivar: _nextHeartbeatDate
@property (copy, nonatomic) NSString *pushEnvironment; // ivar: _pushEnvironment
@property (copy, nonatomic) NSString *pushToken; // ivar: _pushToken
@property (copy, nonatomic) NSArray *pushTopics; // ivar: _pushTopics


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif