// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIACCESSIBILITYBRIDGEAXACTIONMESSAGE_H
#define UIACCESSIBILITYBRIDGEAXACTIONMESSAGE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UIAccessibilityBridgeAXActionMessage : NSObject <NSSecureCoding>



@property (nonatomic) int axAction; // ivar: _axAction
@property (retain, nonatomic) NSData *elementRefData; // ivar: _elementRefData
@property (retain, nonatomic) id *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)initWithAxAction:(int)arg0 withValue:(id)arg1 forElementRefData:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif