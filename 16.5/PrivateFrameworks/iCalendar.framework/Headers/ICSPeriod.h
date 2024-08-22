// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSPERIOD_H
#define ICSPERIOD_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICSDateValue.h"
#import "ICSDuration.h"

@interface ICSPeriod : NSObject <NSSecureCoding>

 {
    ICSDateValue *_start;
    ICSDateValue *_end;
    ICSDuration *_duration;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isDurationBased;
-(id)duration;
-(id)end;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStart:(id)arg0 ;
-(id)initWithStart:(id)arg0 duration:(id)arg1 ;
-(id)initWithStart:(id)arg0 end:(id)arg1 ;
-(id)start;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif