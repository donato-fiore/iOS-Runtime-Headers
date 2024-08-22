// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXKONACONFIGURATION_H
#define AXKONACONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AXKonaConfiguration : NSObject

@property (readonly, nonatomic) NSString *dialectCode; // ivar: _dialectCode
@property (readonly, nonatomic) NSString *dylib; // ivar: _dylib
@property (readonly, nonatomic) int eciDialect; // ivar: _eciDialect
@property (readonly, nonatomic) NSString *iniString;


-(id)initWithDylib:(id)arg0 dialectCode:(id)arg1 dialect:(int)arg2 ;


@end


#endif