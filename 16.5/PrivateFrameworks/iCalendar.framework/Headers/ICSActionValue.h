// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSACTIONVALUE_H
#define ICSACTIONVALUE_H



#import "ICSPredefinedValue.h"

@interface ICSActionValue : ICSPredefinedValue



+(id)actionParameterFromCode:(int)arg0 ;
+(id)actionValueFromICSString:(id)arg0 ;
-(Class)classForCoder;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;


@end


#endif