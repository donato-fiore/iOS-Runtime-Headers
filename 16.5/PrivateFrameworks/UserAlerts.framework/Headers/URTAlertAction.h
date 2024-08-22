// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef URTALERTACTION_H
#define URTALERTACTION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface URTAlertAction : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)actionWithTitle:(id)arg0 handler:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 handler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif