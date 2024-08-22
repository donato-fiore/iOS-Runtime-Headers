// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRANSPARENCYCLOUDDEVICE_H
#define TRANSPARENCYCLOUDDEVICE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "KTLoggableData.h"

@interface TransparencyCloudDevice : NSObject <NSSecureCoding>



@property (retain) KTLoggableData *loggableData; // ivar: _loggableData
@property (retain) NSString *state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif