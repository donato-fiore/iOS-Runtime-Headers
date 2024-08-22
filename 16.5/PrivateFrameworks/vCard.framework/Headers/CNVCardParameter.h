// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVCARDPARAMETER_H
#define CNVCARDPARAMETER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CNVCardParameter : NSObject

@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSString *value; // ivar: _value


+(id)parameterWithName:(id)arg0 value:(id)arg1 ;
-(id)initWithName:(id)arg0 value:(id)arg1 ;


@end


#endif