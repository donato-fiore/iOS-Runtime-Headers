// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KTSTATUSRESULT_H
#define KTSTATUSRESULT_H

@class NSDictionary, NSDate, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KTStatusResult : NSObject <NSSecureCoding>



@property (readonly) NSDictionary *diagnosticsJsonDictionary;
@property (retain) NSDate *expectedSelfResolutionDate; // ivar: _expectedSelfResolutionDate
@property BOOL optInState; // ivar: _optInState
@property (retain) NSArray *recentFailedEventIds; // ivar: _recentFailedEventIds


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif