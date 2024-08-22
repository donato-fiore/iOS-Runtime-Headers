// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBALLDISPLAYSPREDICATE_H
#define _SBALLDISPLAYSPREDICATE_H



#import "SBDisplayModePredicate.h"

@interface _SBAllDisplaysPredicate : SBDisplayModePredicate



+(id)fromDefaultsKey:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesDisplay:(id)arg0 ;
-(NSUInteger)hash;
-(id)defaultsKeyRepresentation;
-(id)description;
-(id)init;


@end


#endif