// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KTIDMSDEVICE_H
#define KTIDMSDEVICE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KTIDMSDevice : NSObject <NSSecureCoding>



@property (retain) NSString *build; // ivar: _build
@property (retain) NSString *deviceID; // ivar: _deviceID
@property (retain) NSString *model; // ivar: _model
@property (retain) NSString *name; // ivar: _name
@property (retain) NSString *osVersion; // ivar: _osVersion
@property (retain) NSString *pushToken; // ivar: _pushToken
@property (retain) NSString *serial; // ivar: _serial


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif