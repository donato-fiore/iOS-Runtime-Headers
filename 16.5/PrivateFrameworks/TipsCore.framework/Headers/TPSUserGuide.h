// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSUSERGUIDE_H
#define TPSUSERGUIDE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "TPSGradient.h"

@interface TPSUserGuide : NSObject {
    ? identifier;
    ? version;
    ? text;
    ? symbol;
    ? gradientColorStrings;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) TPSGradient *gradient; // ivar: gradient
@property (nonatomic, readonly) NSArray *gradientColorStrings;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) BOOL platformIndependent; // ivar: platformIndependent
@property (nonatomic, readonly) NSString *symbol;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *version;


-(id)init;
-(id)initWithIdentifier:(id)arg0 version:(id)arg1 text:(id)arg2 symbol:(id)arg3 platformIndependent:(BOOL)arg4 gradientColorStrings:(id)arg5 ;


@end


#endif