// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLPAGECOOKIE_H
#define RWIPROTOCOLPAGECOOKIE_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolPageCookie : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *domain;
@property (nonatomic) CGFloat expires;
@property (nonatomic) BOOL httpOnly;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) NSInteger sameSite;
@property (nonatomic) BOOL secure;
@property (nonatomic) BOOL session;
@property (copy, nonatomic) NSString *value;


-(id)initWithName:(id)arg0 value:(id)arg1 domain:(id)arg2 path:(id)arg3 expires:(CGFloat)arg4 session:(BOOL)arg5 httpOnly:(BOOL)arg6 secure:(BOOL)arg7 sameSite:(NSInteger)arg8 ;


@end


#endif