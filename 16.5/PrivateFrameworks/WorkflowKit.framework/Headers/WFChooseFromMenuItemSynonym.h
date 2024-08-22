// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCHOOSEFROMMENUITEMSYNONYM_H
#define WFCHOOSEFROMMENUITEMSYNONYM_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "WFVariableString.h"

@interface WFChooseFromMenuItemSynonym : NSObject

@property (readonly, nonatomic) NSUUID *identity; // ivar: _identity
@property (readonly, nonatomic) WFVariableString *synonym; // ivar: _synonym


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithIdentity:(id)arg0 synonym:(id)arg1 ;


@end


#endif