// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTERROR_H
#define SUSCRIPTERROR_H

@class NSError, NSString;


#import "SUScriptObject.h"

@interface SUScriptError : SUScriptObject {
    NSError *_error;
}


@property (readonly) NSInteger code;
@property (readonly) NSString *domain;
@property (readonly) NSString *localizedDescription;
@property (readonly) NSString *localizedFailureReason;
@property (readonly) NSString *localizedRecoverySuggestion;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithError:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)dealloc;


@end


#endif