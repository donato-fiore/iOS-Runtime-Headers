// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KTOPTINSTATE_H
#define KTOPTINSTATE_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KTOptInState : NSObject <NSSecureCoding>



@property (retain) NSString *application; // ivar: _application
@property (retain) NSString *osVersion; // ivar: _osVersion
@property (retain) NSString *serialNumber; // ivar: _serialNumber
@property (retain) NSDate *smtTimestamp; // ivar: _smtTimestamp
@property BOOL state; // ivar: _state
@property (retain) NSString *uri; // ivar: _uri


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURI:(id)arg0 application:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif